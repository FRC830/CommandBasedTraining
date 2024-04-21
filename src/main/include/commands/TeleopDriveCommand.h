#pragma once

#include "frc2/command/CommandHelper.h"
#include "WPISwerveDrive.h"
#include "frc/XboxController.h"

class TeleopDriveCommand 
    : public frc2::CommandHelper<frc2::Command, TeleopDriveCommand>
{
public:
    TeleopDriveCommand(frc::XboxController& controller, WPISwerveDrive& swerve);
    ~TeleopDriveCommand() = default;

    void Initialize() override;
    void Execute() override;
    bool IsFinished() override;
    void End(bool interrupted) override;

private:
    frc::XboxController& m_controller;
    WPISwerveDrive& m_swerve;
};

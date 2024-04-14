#pragma once

class TeleopDriveCommand 
    : public frc2::CommandHelper<frc2::Command, TeleopDriveCommand>
{
public:
    TeleopDriveCommand(frc::XboxController& controller, SwerveDrive& swerve);
    ~TeleopDriveCommand() = default;

    void Initialize() override;
    void Execute()
    void IsFinished() override;
    void End(bool interrupted) override;

private:
    frc::XboxController& m_controller;
    SwerveDrive& m_swerve
};

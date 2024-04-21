#include "commands/TeleopDriveCommand.h"

TeleopDriveCommand::TeleopDriveCommand(frc::XboxController& controller, WPISwerveDrive& swerve)
    : m_controller(controller)
    , m_swerve(swerve)
{}

void TeleopDriveCommand::Initialize()
{
    // do nothing
}

void TeleopDriveCommand::Execute()
{
    // TODO - read joystick axis

    // TODO - command swerve
}

bool TeleopDriveCommand::IsFinished()
{
    return false;
}

void TeleopDriveCommand::End(bool interrupted)
{
    // do nothing
}
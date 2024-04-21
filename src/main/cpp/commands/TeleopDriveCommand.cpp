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
    double xTranslation = -m_controller.GetLeftY();
    double yTranslation = -m_controller.GetLeftX();
    double rotation = -m_controller.GetRightX();
    // TODO - command swerve
    m_swerve.Drive(xTranslation, yTranslation, rotation);
}

bool TeleopDriveCommand::IsFinished()
{
    return false;
}

void TeleopDriveCommand::End(bool interrupted)
{
    // do nothing
    m_swerve.Drive(0.0,0.0,0.0);
}
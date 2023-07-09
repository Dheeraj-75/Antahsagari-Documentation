
(cl:in-package :asdf)

(defsystem "uuv_control_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :std_msgs-msg
               :uuv_control_msgs-msg
)
  :components ((:file "_package")
    (:file "AddWaypoint" :depends-on ("_package_AddWaypoint"))
    (:file "_package_AddWaypoint" :depends-on ("_package"))
    (:file "ClearWaypoints" :depends-on ("_package_ClearWaypoints"))
    (:file "_package_ClearWaypoints" :depends-on ("_package"))
    (:file "GetMBSMControllerParams" :depends-on ("_package_GetMBSMControllerParams"))
    (:file "_package_GetMBSMControllerParams" :depends-on ("_package"))
    (:file "GetPIDParams" :depends-on ("_package_GetPIDParams"))
    (:file "_package_GetPIDParams" :depends-on ("_package"))
    (:file "GetSMControllerParams" :depends-on ("_package_GetSMControllerParams"))
    (:file "_package_GetSMControllerParams" :depends-on ("_package"))
    (:file "GetWaypoints" :depends-on ("_package_GetWaypoints"))
    (:file "_package_GetWaypoints" :depends-on ("_package"))
    (:file "GoTo" :depends-on ("_package_GoTo"))
    (:file "_package_GoTo" :depends-on ("_package"))
    (:file "GoToIncremental" :depends-on ("_package_GoToIncremental"))
    (:file "_package_GoToIncremental" :depends-on ("_package"))
    (:file "Hold" :depends-on ("_package_Hold"))
    (:file "_package_Hold" :depends-on ("_package"))
    (:file "InitCircularTrajectory" :depends-on ("_package_InitCircularTrajectory"))
    (:file "_package_InitCircularTrajectory" :depends-on ("_package"))
    (:file "InitHelicalTrajectory" :depends-on ("_package_InitHelicalTrajectory"))
    (:file "_package_InitHelicalTrajectory" :depends-on ("_package"))
    (:file "InitRectTrajectory" :depends-on ("_package_InitRectTrajectory"))
    (:file "_package_InitRectTrajectory" :depends-on ("_package"))
    (:file "InitWaypointSet" :depends-on ("_package_InitWaypointSet"))
    (:file "_package_InitWaypointSet" :depends-on ("_package"))
    (:file "InitWaypointsFromFile" :depends-on ("_package_InitWaypointsFromFile"))
    (:file "_package_InitWaypointsFromFile" :depends-on ("_package"))
    (:file "IsRunningTrajectory" :depends-on ("_package_IsRunningTrajectory"))
    (:file "_package_IsRunningTrajectory" :depends-on ("_package"))
    (:file "ResetController" :depends-on ("_package_ResetController"))
    (:file "_package_ResetController" :depends-on ("_package"))
    (:file "SetMBSMControllerParams" :depends-on ("_package_SetMBSMControllerParams"))
    (:file "_package_SetMBSMControllerParams" :depends-on ("_package"))
    (:file "SetPIDParams" :depends-on ("_package_SetPIDParams"))
    (:file "_package_SetPIDParams" :depends-on ("_package"))
    (:file "SetSMControllerParams" :depends-on ("_package_SetSMControllerParams"))
    (:file "_package_SetSMControllerParams" :depends-on ("_package"))
    (:file "StartTrajectory" :depends-on ("_package_StartTrajectory"))
    (:file "_package_StartTrajectory" :depends-on ("_package"))
    (:file "SwitchToAutomatic" :depends-on ("_package_SwitchToAutomatic"))
    (:file "_package_SwitchToAutomatic" :depends-on ("_package"))
    (:file "SwitchToManual" :depends-on ("_package_SwitchToManual"))
    (:file "_package_SwitchToManual" :depends-on ("_package"))
  ))
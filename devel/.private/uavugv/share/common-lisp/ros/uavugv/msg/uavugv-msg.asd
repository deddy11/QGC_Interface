
(cl:in-package :asdf)

(defsystem "uavugv-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "uavugverror" :depends-on ("_package_uavugverror"))
    (:file "_package_uavugverror" :depends-on ("_package"))
  ))
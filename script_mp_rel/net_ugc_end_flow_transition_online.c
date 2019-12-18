#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14[4] = { 0, 0, 0, 0 };
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	int iLocal_31 = 0;
	bool bLocal_32 = false;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	struct<394> Local_39 = { 0, 0, 1, 0, 0, 0, 0, -1, -1, -1, 4, 255, 0, -1, -1, -1, 255, 0, -1, -1, -1, 255, 0, -1, -1, -1, 255, 0, -1, -1, -1, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, -1, 0 } ;
	struct<5> Local_433[32];
	struct<12> Local_594[32];
	struct<38> Local_979[32];
	struct<1484> Local_2196 = { 0, 4, 0, 0, 0, 0, -1, 0, 255, 0, 0, 0, 0, 0, 4, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, 20, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, 20, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 10, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 10, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 5, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 24, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1 } ;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 14;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755 = 0;
	var uLocal_3756 = 0;
	var uLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = 0;
	var uLocal_3765 = 0;
	var uLocal_3766 = 0;
	var uLocal_3767 = 0;
	var uLocal_3768 = 0;
	var uLocal_3769 = 0;
	var uLocal_3770 = 0;
	var uLocal_3771 = 0;
	var uLocal_3772 = 0;
	var uLocal_3773 = 0;
	var uLocal_3774 = 0;
	var uLocal_3775 = 0;
	var uLocal_3776 = 0;
	var uLocal_3777 = 0;
	var uLocal_3778 = 0;
	var uLocal_3779 = 0;
	var uLocal_3780 = 0;
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = 0;
	var uLocal_3787 = 0;
	var uLocal_3788 = 0;
	var uLocal_3789 = 0;
	var uLocal_3790 = 0;
	var uLocal_3791 = 0;
	var uLocal_3792 = 0;
	var uLocal_3793 = 0;
	var uLocal_3794 = 0;
	var uLocal_3795 = 0;
	var uLocal_3796 = 0;
	var uLocal_3797 = 0;
	var uLocal_3798 = 0;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = 0;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 0;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = 0;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	var uLocal_3817 = 0;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	var uLocal_3824 = 0;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	var uLocal_3828 = 0;
	var uLocal_3829 = 0;
	var uLocal_3830 = 0;
	var uLocal_3831 = 0;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 0;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = 0;
	var uLocal_3853 = 0;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 0;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865 = 1097859072;
	var uLocal_3866 = 1101004800;
	var uLocal_3867 = 0;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 0;
	var uLocal_3888 = 0;
	var uLocal_3889 = 0;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 0;
	var uLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 4;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	var uLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	var uLocal_3913 = 0;
	var uLocal_3914 = 0;
	var uLocal_3915 = 0;
	var uLocal_3916 = 0;
	var uLocal_3917 = 0;
	var uLocal_3918 = 0;
	var uLocal_3919 = 0;
	var uLocal_3920 = 0;
	var uLocal_3921 = 0;
	var uLocal_3922 = 0;
	var uLocal_3923 = 0;
	var uLocal_3924 = 0;
	var uLocal_3925 = 0;
	var uLocal_3926 = 0;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 0;
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = 0;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 1000;
	var uLocal_3972 = 15;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 0;
	var uLocal_3981 = 0;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = 0;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = 0;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038 = 0;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 30;
	var uLocal_4065 = 0;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 0;
	var uLocal_4095 = 0;
	var uLocal_4096 = 60;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 0;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = 0;
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 2;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 75;
	var uLocal_4161 = 2;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 2;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
	var uLocal_4167 = 2;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 2;
	var uLocal_4171 = 0;
	var uLocal_4172 = 0;
	var uLocal_4173 = 2;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 2;
	var uLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = 2;
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = 2;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 2;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 2;
	var uLocal_4189 = 0;
	var uLocal_4190 = 0;
	var uLocal_4191 = 2;
	var uLocal_4192 = 0;
	var uLocal_4193 = 0;
	var uLocal_4194 = 2;
	var uLocal_4195 = 0;
	var uLocal_4196 = 0;
	var uLocal_4197 = 2;
	var uLocal_4198 = 0;
	var uLocal_4199 = 0;
	var uLocal_4200 = 2;
	var uLocal_4201 = 0;
	var uLocal_4202 = 0;
	var uLocal_4203 = 2;
	var uLocal_4204 = 0;
	var uLocal_4205 = 0;
	var uLocal_4206 = 2;
	var uLocal_4207 = 0;
	var uLocal_4208 = 0;
	var uLocal_4209 = 2;
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 2;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 2;
	var uLocal_4216 = 0;
	var uLocal_4217 = 0;
	var uLocal_4218 = 2;
	var uLocal_4219 = 0;
	var uLocal_4220 = 0;
	var uLocal_4221 = 2;
	var uLocal_4222 = 0;
	var uLocal_4223 = 0;
	var uLocal_4224 = 2;
	var uLocal_4225 = 0;
	var uLocal_4226 = 0;
	var uLocal_4227 = 2;
	var uLocal_4228 = 0;
	var uLocal_4229 = 0;
	var uLocal_4230 = 2;
	var uLocal_4231 = 0;
	var uLocal_4232 = 0;
	var uLocal_4233 = 2;
	var uLocal_4234 = 0;
	var uLocal_4235 = 0;
	var uLocal_4236 = 2;
	var uLocal_4237 = 0;
	var uLocal_4238 = 0;
	var uLocal_4239 = 2;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 2;
	var uLocal_4243 = 0;
	var uLocal_4244 = 0;
	var uLocal_4245 = 2;
	var uLocal_4246 = 0;
	var uLocal_4247 = 0;
	var uLocal_4248 = 2;
	var uLocal_4249 = 0;
	var uLocal_4250 = 0;
	var uLocal_4251 = 2;
	var uLocal_4252 = 0;
	var uLocal_4253 = 0;
	var uLocal_4254 = 2;
	var uLocal_4255 = 0;
	var uLocal_4256 = 0;
	var uLocal_4257 = 2;
	var uLocal_4258 = 0;
	var uLocal_4259 = 0;
	var uLocal_4260 = 2;
	var uLocal_4261 = 0;
	var uLocal_4262 = 0;
	var uLocal_4263 = 2;
	var uLocal_4264 = 0;
	var uLocal_4265 = 0;
	var uLocal_4266 = 2;
	var uLocal_4267 = 0;
	var uLocal_4268 = 0;
	var uLocal_4269 = 2;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 2;
	var uLocal_4273 = 0;
	var uLocal_4274 = 0;
	var uLocal_4275 = 2;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = 2;
	var uLocal_4279 = 0;
	var uLocal_4280 = 0;
	var uLocal_4281 = 2;
	var uLocal_4282 = 0;
	var uLocal_4283 = 0;
	var uLocal_4284 = 2;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 2;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 2;
	var uLocal_4291 = 0;
	var uLocal_4292 = 0;
	var uLocal_4293 = 2;
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 2;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 2;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 2;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 2;
	var uLocal_4306 = 0;
	var uLocal_4307 = 0;
	var uLocal_4308 = 2;
	var uLocal_4309 = 0;
	var uLocal_4310 = 0;
	var uLocal_4311 = 2;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 2;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 2;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 2;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 2;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 2;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 2;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 2;
	var uLocal_4333 = 0;
	var uLocal_4334 = 0;
	var uLocal_4335 = 2;
	var uLocal_4336 = 0;
	var uLocal_4337 = 0;
	var uLocal_4338 = 2;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 2;
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 2;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 2;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 2;
	var uLocal_4351 = 0;
	var uLocal_4352 = 0;
	var uLocal_4353 = 2;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 2;
	var uLocal_4357 = 0;
	var uLocal_4358 = 0;
	var uLocal_4359 = 2;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 2;
	var uLocal_4363 = 0;
	var uLocal_4364 = 0;
	var uLocal_4365 = 2;
	var uLocal_4366 = 0;
	var uLocal_4367 = 0;
	var uLocal_4368 = 2;
	var uLocal_4369 = 0;
	var uLocal_4370 = 0;
	var uLocal_4371 = 2;
	var uLocal_4372 = 0;
	var uLocal_4373 = 0;
	var uLocal_4374 = 2;
	var uLocal_4375 = 0;
	var uLocal_4376 = 0;
	var uLocal_4377 = 2;
	var uLocal_4378 = 0;
	var uLocal_4379 = 0;
	var uLocal_4380 = 2;
	var uLocal_4381 = 0;
	var uLocal_4382 = 0;
	var uLocal_4383 = 2;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 32;
	var uLocal_4387 = 2;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 2;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 2;
	var uLocal_4394 = 0;
	var uLocal_4395 = 0;
	var uLocal_4396 = 2;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 2;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 2;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 2;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = 2;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 2;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 2;
	var uLocal_4415 = 0;
	var uLocal_4416 = 0;
	var uLocal_4417 = 2;
	var uLocal_4418 = 0;
	var uLocal_4419 = 0;
	var uLocal_4420 = 2;
	var uLocal_4421 = 0;
	var uLocal_4422 = 0;
	var uLocal_4423 = 2;
	var uLocal_4424 = 0;
	var uLocal_4425 = 0;
	var uLocal_4426 = 2;
	var uLocal_4427 = 0;
	var uLocal_4428 = 0;
	var uLocal_4429 = 2;
	var uLocal_4430 = 0;
	var uLocal_4431 = 0;
	var uLocal_4432 = 2;
	var uLocal_4433 = 0;
	var uLocal_4434 = 0;
	var uLocal_4435 = 2;
	var uLocal_4436 = 0;
	var uLocal_4437 = 0;
	var uLocal_4438 = 2;
	var uLocal_4439 = 0;
	var uLocal_4440 = 0;
	var uLocal_4441 = 2;
	var uLocal_4442 = 0;
	var uLocal_4443 = 0;
	var uLocal_4444 = 2;
	var uLocal_4445 = 0;
	var uLocal_4446 = 0;
	var uLocal_4447 = 2;
	var uLocal_4448 = 0;
	var uLocal_4449 = 0;
	var uLocal_4450 = 2;
	var uLocal_4451 = 0;
	var uLocal_4452 = 0;
	var uLocal_4453 = 2;
	var uLocal_4454 = 0;
	var uLocal_4455 = 0;
	var uLocal_4456 = 2;
	var uLocal_4457 = 0;
	var uLocal_4458 = 0;
	var uLocal_4459 = 2;
	var uLocal_4460 = 0;
	var uLocal_4461 = 0;
	var uLocal_4462 = 2;
	var uLocal_4463 = 0;
	var uLocal_4464 = 0;
	var uLocal_4465 = 2;
	var uLocal_4466 = 0;
	var uLocal_4467 = 0;
	var uLocal_4468 = 2;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = 2;
	var uLocal_4472 = 0;
	var uLocal_4473 = 0;
	var uLocal_4474 = 2;
	var uLocal_4475 = 0;
	var uLocal_4476 = 0;
	var uLocal_4477 = 2;
	var uLocal_4478 = 0;
	var uLocal_4479 = 0;
	var uLocal_4480 = 2;
	var uLocal_4481 = 0;
	var uLocal_4482 = 0;
	var uLocal_4483 = 4;
	var uLocal_4484 = 2;
	var uLocal_4485 = 0;
	var uLocal_4486 = 0;
	var uLocal_4487 = 2;
	var uLocal_4488 = 0;
	var uLocal_4489 = 0;
	var uLocal_4490 = 2;
	var uLocal_4491 = 0;
	var uLocal_4492 = 0;
	var uLocal_4493 = 2;
	var uLocal_4494 = 0;
	var uLocal_4495 = 0;
	var uLocal_4496 = 0;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 0;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 0;
	var uLocal_4503 = 0;
	var uLocal_4504 = 0;
	var uLocal_4505 = 0;
	var uLocal_4506 = 0;
	var uLocal_4507 = 0;
	var uLocal_4508 = 0;
	var uLocal_4509 = 0;
	var uLocal_4510 = 0;
	var uLocal_4511 = 0;
	var uLocal_4512 = 0;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 0;
	var uLocal_4516 = 0;
	var uLocal_4517 = 0;
	var uLocal_4518 = 0;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = 0;
	var uLocal_4522 = 0;
	var uLocal_4523 = 24;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = 0;
	var uLocal_4535 = 0;
	var uLocal_4536 = 0;
	var uLocal_4537 = 0;
	var uLocal_4538 = 0;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 0;
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
	var uLocal_4559 = 0;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = 0;
	var uLocal_4564 = 0;
	var uLocal_4565 = 0;
	var uLocal_4566 = 0;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 0;
	var uLocal_4579 = 0;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = 0;
	var uLocal_4594 = 0;
	var uLocal_4595 = 0;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = 0;
	var uLocal_4607 = 0;
	var uLocal_4608 = 0;
	var uLocal_4609 = 0;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
	var uLocal_4619 = 0;
	var uLocal_4620 = 0;
	var uLocal_4621 = 3;
	var uLocal_4622 = 0;
	var uLocal_4623 = 0;
	var uLocal_4624 = 0;
	var uLocal_4625 = 3;
	var uLocal_4626 = 0;
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = -1;
	var uLocal_4633 = 4;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = 0;
	var uLocal_4637 = 0;
	var uLocal_4638 = 4;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = 0;
	var uLocal_4643 = 75;
	var uLocal_4644 = -1;
	var uLocal_4645 = -1;
	var uLocal_4646 = -1;
	var uLocal_4647 = -1;
	var uLocal_4648 = -1;
	var uLocal_4649 = -1;
	var uLocal_4650 = -1;
	var uLocal_4651 = -1;
	var uLocal_4652 = -1;
	var uLocal_4653 = -1;
	var uLocal_4654 = -1;
	var uLocal_4655 = -1;
	var uLocal_4656 = -1;
	var uLocal_4657 = -1;
	var uLocal_4658 = -1;
	var uLocal_4659 = -1;
	var uLocal_4660 = -1;
	var uLocal_4661 = -1;
	var uLocal_4662 = -1;
	var uLocal_4663 = -1;
	var uLocal_4664 = -1;
	var uLocal_4665 = -1;
	var uLocal_4666 = -1;
	var uLocal_4667 = -1;
	var uLocal_4668 = -1;
	var uLocal_4669 = -1;
	var uLocal_4670 = -1;
	var uLocal_4671 = -1;
	var uLocal_4672 = -1;
	var uLocal_4673 = -1;
	var uLocal_4674 = -1;
	var uLocal_4675 = -1;
	var uLocal_4676 = -1;
	var uLocal_4677 = -1;
	var uLocal_4678 = -1;
	var uLocal_4679 = -1;
	var uLocal_4680 = -1;
	var uLocal_4681 = -1;
	var uLocal_4682 = -1;
	var uLocal_4683 = -1;
	var uLocal_4684 = -1;
	var uLocal_4685 = -1;
	var uLocal_4686 = -1;
	var uLocal_4687 = -1;
	var uLocal_4688 = -1;
	var uLocal_4689 = -1;
	var uLocal_4690 = -1;
	var uLocal_4691 = -1;
	var uLocal_4692 = -1;
	var uLocal_4693 = -1;
	var uLocal_4694 = -1;
	var uLocal_4695 = -1;
	var uLocal_4696 = -1;
	var uLocal_4697 = -1;
	var uLocal_4698 = -1;
	var uLocal_4699 = -1;
	var uLocal_4700 = -1;
	var uLocal_4701 = -1;
	var uLocal_4702 = -1;
	var uLocal_4703 = -1;
	var uLocal_4704 = -1;
	var uLocal_4705 = -1;
	var uLocal_4706 = -1;
	var uLocal_4707 = -1;
	var uLocal_4708 = -1;
	var uLocal_4709 = -1;
	var uLocal_4710 = -1;
	var uLocal_4711 = -1;
	var uLocal_4712 = -1;
	var uLocal_4713 = -1;
	var uLocal_4714 = -1;
	var uLocal_4715 = -1;
	var uLocal_4716 = -1;
	var uLocal_4717 = -1;
	var uLocal_4718 = -1;
	var uLocal_4719 = -1;
	var uLocal_4720 = -1;
	var uLocal_4721 = -1;
	var uLocal_4722 = -1;
	var uLocal_4723 = -1;
	var uLocal_4724 = -1;
	var uLocal_4725 = -1;
	var uLocal_4726 = -1;
	var uLocal_4727 = -1;
	var uLocal_4728 = -1;
	var uLocal_4729 = -1;
	var uLocal_4730 = -1;
	var uLocal_4731 = -1;
	var uLocal_4732 = -1;
	var uLocal_4733 = -1;
	var uLocal_4734 = -1;
	var uLocal_4735 = -1;
	var uLocal_4736 = -1;
	var uLocal_4737 = -1;
	var uLocal_4738 = -1;
	var uLocal_4739 = -1;
	var uLocal_4740 = -1;
	var uLocal_4741 = -1;
	var uLocal_4742 = -1;
	var uLocal_4743 = -1;
	var uLocal_4744 = -1;
	var uLocal_4745 = -1;
	var uLocal_4746 = -1;
	var uLocal_4747 = -1;
	var uLocal_4748 = -1;
	var uLocal_4749 = -1;
	var uLocal_4750 = -1;
	var uLocal_4751 = -1;
	var uLocal_4752 = -1;
	var uLocal_4753 = -1;
	var uLocal_4754 = -1;
	var uLocal_4755 = -1;
	var uLocal_4756 = -1;
	var uLocal_4757 = -1;
	var uLocal_4758 = -1;
	var uLocal_4759 = -1;
	var uLocal_4760 = -1;
	var uLocal_4761 = -1;
	var uLocal_4762 = -1;
	var uLocal_4763 = -1;
	var uLocal_4764 = -1;
	var uLocal_4765 = -1;
	var uLocal_4766 = -1;
	var uLocal_4767 = -1;
	var uLocal_4768 = -1;
	var uLocal_4769 = -1;
	var uLocal_4770 = -1;
	var uLocal_4771 = -1;
	var uLocal_4772 = -1;
	var uLocal_4773 = -1;
	var uLocal_4774 = -1;
	var uLocal_4775 = -1;
	var uLocal_4776 = -1;
	var uLocal_4777 = -1;
	var uLocal_4778 = -1;
	var uLocal_4779 = -1;
	var uLocal_4780 = -1;
	var uLocal_4781 = -1;
	var uLocal_4782 = -1;
	var uLocal_4783 = -1;
	var uLocal_4784 = -1;
	var uLocal_4785 = -1;
	var uLocal_4786 = -1;
	var uLocal_4787 = -1;
	var uLocal_4788 = -1;
	var uLocal_4789 = -1;
	var uLocal_4790 = -1;
	var uLocal_4791 = -1;
	var uLocal_4792 = -1;
	var uLocal_4793 = -1;
	var uLocal_4794 = 20;
	var uLocal_4795 = -1;
	var uLocal_4796 = -1;
	var uLocal_4797 = -1;
	var uLocal_4798 = -1;
	var uLocal_4799 = -1;
	var uLocal_4800 = -1;
	var uLocal_4801 = -1;
	var uLocal_4802 = -1;
	var uLocal_4803 = -1;
	var uLocal_4804 = -1;
	var uLocal_4805 = -1;
	var uLocal_4806 = -1;
	var uLocal_4807 = -1;
	var uLocal_4808 = -1;
	var uLocal_4809 = -1;
	var uLocal_4810 = -1;
	var uLocal_4811 = -1;
	var uLocal_4812 = -1;
	var uLocal_4813 = -1;
	var uLocal_4814 = -1;
	var uLocal_4815 = -1;
	var uLocal_4816 = -1;
	var uLocal_4817 = -1;
	var uLocal_4818 = -1;
	var uLocal_4819 = -1;
	var uLocal_4820 = -1;
	var uLocal_4821 = -1;
	var uLocal_4822 = -1;
	var uLocal_4823 = -1;
	var uLocal_4824 = -1;
	var uLocal_4825 = -1;
	var uLocal_4826 = -1;
	var uLocal_4827 = -1;
	var uLocal_4828 = -1;
	var uLocal_4829 = -1;
	var uLocal_4830 = -1;
	var uLocal_4831 = -1;
	var uLocal_4832 = -1;
	var uLocal_4833 = -1;
	var uLocal_4834 = -1;
	var uLocal_4835 = 75;
	var uLocal_4836 = 0;
	var uLocal_4837 = 0;
	var uLocal_4838 = 0;
	var uLocal_4839 = 0;
	var uLocal_4840 = 0;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 0;
	var uLocal_4844 = 0;
	var uLocal_4845 = 0;
	var uLocal_4846 = 0;
	var uLocal_4847 = 0;
	var uLocal_4848 = 0;
	var uLocal_4849 = 0;
	var uLocal_4850 = 0;
	var uLocal_4851 = 0;
	var uLocal_4852 = 0;
	var uLocal_4853 = 0;
	var uLocal_4854 = 0;
	var uLocal_4855 = 0;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 0;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = 0;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 0;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = 0;
	var uLocal_4877 = 0;
	var uLocal_4878 = 0;
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 0;
	var uLocal_4887 = 0;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = 0;
	var uLocal_4892 = 0;
	var uLocal_4893 = 0;
	var uLocal_4894 = 0;
	var uLocal_4895 = 0;
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = 0;
	var uLocal_4901 = 0;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = 0;
	var uLocal_4906 = 0;
	var uLocal_4907 = 0;
	var uLocal_4908 = 0;
	var uLocal_4909 = 0;
	var uLocal_4910 = 0;
	var uLocal_4911 = 32;
	var uLocal_4912 = 0;
	var uLocal_4913 = 0;
	var uLocal_4914 = 0;
	var uLocal_4915 = 0;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 0;
	var uLocal_4920 = 0;
	var uLocal_4921 = 0;
	var uLocal_4922 = 0;
	var uLocal_4923 = 0;
	var uLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 0;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
	var uLocal_4933 = 0;
	var uLocal_4934 = 0;
	var uLocal_4935 = 0;
	var uLocal_4936 = 0;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 0;
	var uLocal_4944 = 75;
	var uLocal_4945 = 0;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = 0;
	var uLocal_4952 = 0;
	var uLocal_4953 = 0;
	var uLocal_4954 = 0;
	var uLocal_4955 = 0;
	var uLocal_4956 = 0;
	var uLocal_4957 = 0;
	var uLocal_4958 = 0;
	var uLocal_4959 = 0;
	var uLocal_4960 = 0;
	var uLocal_4961 = 0;
	var uLocal_4962 = 0;
	var uLocal_4963 = 0;
	var uLocal_4964 = 0;
	var uLocal_4965 = 0;
	var uLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 0;
	var uLocal_4969 = 0;
	var uLocal_4970 = 0;
	var uLocal_4971 = 0;
	var uLocal_4972 = 0;
	var uLocal_4973 = 0;
	var uLocal_4974 = 0;
	var uLocal_4975 = 0;
	var uLocal_4976 = 0;
	var uLocal_4977 = 0;
	var uLocal_4978 = 0;
	var uLocal_4979 = 0;
	var uLocal_4980 = 0;
	var uLocal_4981 = 0;
	var uLocal_4982 = 0;
	var uLocal_4983 = 0;
	var uLocal_4984 = 0;
	var uLocal_4985 = 0;
	var uLocal_4986 = 0;
	var uLocal_4987 = 0;
	var uLocal_4988 = 0;
	var uLocal_4989 = 0;
	var uLocal_4990 = 0;
	var uLocal_4991 = 0;
	var uLocal_4992 = 0;
	var uLocal_4993 = 0;
	var uLocal_4994 = 0;
	var uLocal_4995 = 0;
	var uLocal_4996 = 0;
	var uLocal_4997 = 0;
	var uLocal_4998 = 0;
	var uLocal_4999 = 0;
	var uLocal_5000 = 0;
	var uLocal_5001 = 0;
	var uLocal_5002 = 0;
	var uLocal_5003 = 0;
	var uLocal_5004 = 0;
	var uLocal_5005 = 0;
	var uLocal_5006 = 0;
	var uLocal_5007 = 0;
	var uLocal_5008 = 0;
	var uLocal_5009 = 0;
	var uLocal_5010 = 0;
	var uLocal_5011 = 0;
	var uLocal_5012 = 0;
	var uLocal_5013 = 0;
	var uLocal_5014 = 0;
	var uLocal_5015 = 0;
	var uLocal_5016 = 0;
	var uLocal_5017 = 0;
	var uLocal_5018 = 0;
	var uLocal_5019 = 0;
	var uLocal_5020 = 32;
	var uLocal_5021 = 0;
	var uLocal_5022 = 0;
	var uLocal_5023 = 0;
	var uLocal_5024 = 0;
	var uLocal_5025 = 0;
	var uLocal_5026 = 0;
	var uLocal_5027 = 0;
	var uLocal_5028 = 0;
	var uLocal_5029 = 0;
	var uLocal_5030 = 0;
	var uLocal_5031 = 0;
	var uLocal_5032 = 0;
	var uLocal_5033 = 0;
	var uLocal_5034 = 0;
	var uLocal_5035 = 0;
	var uLocal_5036 = 0;
	var uLocal_5037 = 0;
	var uLocal_5038 = 0;
	var uLocal_5039 = 0;
	var uLocal_5040 = 0;
	var uLocal_5041 = 0;
	var uLocal_5042 = 0;
	var uLocal_5043 = 0;
	var uLocal_5044 = 0;
	var uLocal_5045 = 0;
	var uLocal_5046 = 0;
	var uLocal_5047 = 0;
	var uLocal_5048 = 0;
	var uLocal_5049 = 0;
	var uLocal_5050 = 0;
	var uLocal_5051 = 0;
	var uLocal_5052 = 0;
	var uLocal_5053 = 10;
	var uLocal_5054 = 0;
	var uLocal_5055 = 0;
	var uLocal_5056 = 0;
	var uLocal_5057 = 0;
	var uLocal_5058 = 0;
	var uLocal_5059 = 0;
	var uLocal_5060 = 0;
	var uLocal_5061 = 0;
	var uLocal_5062 = 0;
	var uLocal_5063 = 0;
	var uLocal_5064 = 0;
	var uLocal_5065 = 0;
	var uLocal_5066 = 0;
	var uLocal_5067 = 0;
	var uLocal_5068 = 0;
	var uLocal_5069 = 0;
	var uLocal_5070 = 0;
	var uLocal_5071 = 0;
	var uLocal_5072 = 0;
	var uLocal_5073 = 0;
	var uLocal_5074 = 0;
	var uLocal_5075 = 0;
	var uLocal_5076 = 0;
	var uLocal_5077 = 0;
	var uLocal_5078 = 0;
	var uLocal_5079 = 0;
	var uLocal_5080 = 0;
	var uLocal_5081 = 0;
	var uLocal_5082 = 0;
	var uLocal_5083 = 0;
	var uLocal_5084 = 0;
	var uLocal_5085 = 0;
	var uLocal_5086 = 0;
	var uLocal_5087 = 0;
	var uLocal_5088 = 0;
	var uLocal_5089 = 0;
	var uLocal_5090 = 0;
	var uLocal_5091 = 0;
	var uLocal_5092 = 0;
	var uLocal_5093 = 0;
	var uLocal_5094 = 0;
	var uLocal_5095 = 0;
	var uLocal_5096 = 0;
	var uLocal_5097 = 0;
	var uLocal_5098 = 0;
	var uLocal_5099 = 0;
	var uLocal_5100 = 0;
	var uLocal_5101 = 0;
	var uLocal_5102 = 0;
	var uLocal_5103 = 0;
	var uLocal_5104 = 75;
	var uLocal_5105 = 0;
	var uLocal_5106 = 0;
	var uLocal_5107 = 0;
	var uLocal_5108 = 0;
	var uLocal_5109 = 0;
	var uLocal_5110 = 0;
	var uLocal_5111 = 0;
	var uLocal_5112 = 0;
	var uLocal_5113 = 0;
	var uLocal_5114 = 0;
	var uLocal_5115 = 0;
	var uLocal_5116 = 0;
	var uLocal_5117 = 0;
	var uLocal_5118 = 0;
	var uLocal_5119 = 0;
	var uLocal_5120 = 0;
	var uLocal_5121 = 0;
	var uLocal_5122 = 0;
	var uLocal_5123 = 0;
	var uLocal_5124 = 0;
	var uLocal_5125 = 0;
	var uLocal_5126 = 0;
	var uLocal_5127 = 0;
	var uLocal_5128 = 0;
	var uLocal_5129 = 0;
	var uLocal_5130 = 0;
	var uLocal_5131 = 0;
	var uLocal_5132 = 0;
	var uLocal_5133 = 0;
	var uLocal_5134 = 0;
	var uLocal_5135 = 0;
	var uLocal_5136 = 0;
	var uLocal_5137 = 0;
	var uLocal_5138 = 0;
	var uLocal_5139 = 0;
	var uLocal_5140 = 0;
	var uLocal_5141 = 0;
	var uLocal_5142 = 0;
	var uLocal_5143 = 0;
	var uLocal_5144 = 0;
	var uLocal_5145 = 0;
	var uLocal_5146 = 0;
	var uLocal_5147 = 0;
	var uLocal_5148 = 0;
	var uLocal_5149 = 0;
	var uLocal_5150 = 0;
	var uLocal_5151 = 0;
	var uLocal_5152 = 0;
	var uLocal_5153 = 0;
	var uLocal_5154 = 0;
	var uLocal_5155 = 0;
	var uLocal_5156 = 0;
	var uLocal_5157 = 0;
	var uLocal_5158 = 0;
	var uLocal_5159 = 0;
	var uLocal_5160 = 0;
	var uLocal_5161 = 0;
	var uLocal_5162 = 0;
	var uLocal_5163 = 0;
	var uLocal_5164 = 0;
	var uLocal_5165 = 0;
	var uLocal_5166 = 0;
	var uLocal_5167 = 0;
	var uLocal_5168 = 0;
	var uLocal_5169 = 0;
	var uLocal_5170 = 0;
	var uLocal_5171 = 0;
	var uLocal_5172 = 0;
	var uLocal_5173 = 0;
	var uLocal_5174 = 0;
	var uLocal_5175 = 0;
	var uLocal_5176 = 0;
	var uLocal_5177 = 0;
	var uLocal_5178 = 0;
	var uLocal_5179 = 0;
	var uLocal_5180 = 0;
	var uLocal_5181 = 0;
	var uLocal_5182 = 0;
	var uLocal_5183 = 0;
	var uLocal_5184 = 0;
	var uLocal_5185 = 0;
	var uLocal_5186 = 0;
	var uLocal_5187 = 0;
	var uLocal_5188 = 0;
	var uLocal_5189 = 0;
	var uLocal_5190 = 0;
	var uLocal_5191 = 0;
	var uLocal_5192 = 0;
	var uLocal_5193 = 0;
	var uLocal_5194 = 0;
	var uLocal_5195 = 0;
	var uLocal_5196 = 0;
	var uLocal_5197 = 0;
	var uLocal_5198 = 0;
	var uLocal_5199 = 0;
	var uLocal_5200 = 0;
	var uLocal_5201 = 0;
	var uLocal_5202 = 0;
	var uLocal_5203 = 0;
	var uLocal_5204 = 0;
	var uLocal_5205 = 0;
	var uLocal_5206 = 0;
	var uLocal_5207 = 0;
	var uLocal_5208 = 0;
	var uLocal_5209 = 0;
	var uLocal_5210 = 0;
	var uLocal_5211 = 0;
	var uLocal_5212 = 0;
	var uLocal_5213 = 0;
	var uLocal_5214 = 0;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = 0;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 0;
	var uLocal_5222 = 0;
	var uLocal_5223 = 0;
	var uLocal_5224 = 0;
	var uLocal_5225 = 0;
	var uLocal_5226 = 0;
	var uLocal_5227 = 0;
	var uLocal_5228 = 0;
	var uLocal_5229 = 0;
	var uLocal_5230 = 0;
	var uLocal_5231 = 0;
	var uLocal_5232 = 0;
	var uLocal_5233 = 0;
	var uLocal_5234 = 0;
	var uLocal_5235 = 0;
	var uLocal_5236 = 0;
	var uLocal_5237 = 0;
	var uLocal_5238 = 0;
	var uLocal_5239 = 0;
	var uLocal_5240 = 0;
	var uLocal_5241 = 0;
	var uLocal_5242 = 0;
	var uLocal_5243 = 0;
	var uLocal_5244 = 0;
	var uLocal_5245 = 0;
	var uLocal_5246 = 0;
	var uLocal_5247 = 0;
	var uLocal_5248 = 0;
	var uLocal_5249 = 0;
	var uLocal_5250 = 0;
	var uLocal_5251 = 0;
	var uLocal_5252 = 0;
	var uLocal_5253 = 0;
	var uLocal_5254 = 0;
	var uLocal_5255 = 75;
	var uLocal_5256 = 0;
	var uLocal_5257 = 0;
	var uLocal_5258 = 0;
	var uLocal_5259 = 0;
	var uLocal_5260 = 0;
	var uLocal_5261 = 0;
	var uLocal_5262 = 0;
	var uLocal_5263 = 0;
	var uLocal_5264 = 0;
	var uLocal_5265 = 0;
	var uLocal_5266 = 0;
	var uLocal_5267 = 0;
	var uLocal_5268 = 0;
	var uLocal_5269 = 0;
	var uLocal_5270 = 0;
	var uLocal_5271 = 0;
	var uLocal_5272 = 0;
	var uLocal_5273 = 0;
	var uLocal_5274 = 0;
	var uLocal_5275 = 0;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	var uLocal_5279 = 0;
	var uLocal_5280 = 0;
	var uLocal_5281 = 0;
	var uLocal_5282 = 0;
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 0;
	var uLocal_5288 = 0;
	var uLocal_5289 = 0;
	var uLocal_5290 = 0;
	var uLocal_5291 = 0;
	var uLocal_5292 = 0;
	var uLocal_5293 = 0;
	var uLocal_5294 = 0;
	var uLocal_5295 = 0;
	var uLocal_5296 = 0;
	var uLocal_5297 = 0;
	var uLocal_5298 = 0;
	var uLocal_5299 = 0;
	var uLocal_5300 = 0;
	var uLocal_5301 = 0;
	var uLocal_5302 = 0;
	var uLocal_5303 = 0;
	var uLocal_5304 = 0;
	var uLocal_5305 = 0;
	var uLocal_5306 = 0;
	var uLocal_5307 = 0;
	var uLocal_5308 = 0;
	var uLocal_5309 = 0;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	var uLocal_5315 = 0;
	var uLocal_5316 = 0;
	var uLocal_5317 = 0;
	var uLocal_5318 = 0;
	var uLocal_5319 = 0;
	var uLocal_5320 = 0;
	var uLocal_5321 = 0;
	var uLocal_5322 = 0;
	var uLocal_5323 = 0;
	var uLocal_5324 = 0;
	var uLocal_5325 = 0;
	var uLocal_5326 = 0;
	var uLocal_5327 = 0;
	var uLocal_5328 = 0;
	var uLocal_5329 = 0;
	var uLocal_5330 = 0;
	var uLocal_5331 = 0;
	var uLocal_5332 = 0;
	var uLocal_5333 = 0;
	var uLocal_5334 = 0;
	var uLocal_5335 = 0;
	var uLocal_5336 = 0;
	var uLocal_5337 = 0;
	var uLocal_5338 = 0;
	var uLocal_5339 = 0;
	var uLocal_5340 = 0;
	var uLocal_5341 = 0;
	var uLocal_5342 = 0;
	var uLocal_5343 = 0;
	var uLocal_5344 = 0;
	var uLocal_5345 = 0;
	var uLocal_5346 = 0;
	var uLocal_5347 = 0;
	var uLocal_5348 = 0;
	var uLocal_5349 = 0;
	var uLocal_5350 = 0;
	var uLocal_5351 = 0;
	var uLocal_5352 = 0;
	var uLocal_5353 = 0;
	var uLocal_5354 = 0;
	var uLocal_5355 = 0;
	var uLocal_5356 = 0;
	var uLocal_5357 = 0;
	var uLocal_5358 = 0;
	var uLocal_5359 = 0;
	var uLocal_5360 = 0;
	var uLocal_5361 = 0;
	var uLocal_5362 = 0;
	var uLocal_5363 = 0;
	var uLocal_5364 = 0;
	var uLocal_5365 = 0;
	var uLocal_5366 = 0;
	var uLocal_5367 = 0;
	var uLocal_5368 = 0;
	var uLocal_5369 = 0;
	var uLocal_5370 = 0;
	var uLocal_5371 = 0;
	var uLocal_5372 = 0;
	var uLocal_5373 = 0;
	var uLocal_5374 = 0;
	var uLocal_5375 = 0;
	var uLocal_5376 = 0;
	var uLocal_5377 = 0;
	var uLocal_5378 = 0;
	var uLocal_5379 = 0;
	var uLocal_5380 = 0;
	var uLocal_5381 = 0;
	var uLocal_5382 = 0;
	var uLocal_5383 = 0;
	var uLocal_5384 = 0;
	var uLocal_5385 = 0;
	var uLocal_5386 = 0;
	var uLocal_5387 = 0;
	var uLocal_5388 = 0;
	var uLocal_5389 = 0;
	var uLocal_5390 = 0;
	var uLocal_5391 = 0;
	var uLocal_5392 = 0;
	var uLocal_5393 = 0;
	var uLocal_5394 = 0;
	var uLocal_5395 = 0;
	var uLocal_5396 = 0;
	var uLocal_5397 = 0;
	var uLocal_5398 = 0;
	var uLocal_5399 = 0;
	var uLocal_5400 = 0;
	var uLocal_5401 = 0;
	var uLocal_5402 = 0;
	var uLocal_5403 = 0;
	var uLocal_5404 = 0;
	var uLocal_5405 = 0;
	var uLocal_5406 = 32;
	var uLocal_5407 = 0;
	var uLocal_5408 = 0;
	var uLocal_5409 = 0;
	var uLocal_5410 = 0;
	var uLocal_5411 = 0;
	var uLocal_5412 = 0;
	var uLocal_5413 = 0;
	var uLocal_5414 = 0;
	var uLocal_5415 = 0;
	var uLocal_5416 = 0;
	var uLocal_5417 = 0;
	var uLocal_5418 = 0;
	var uLocal_5419 = 0;
	var uLocal_5420 = 0;
	var uLocal_5421 = 0;
	var uLocal_5422 = 0;
	var uLocal_5423 = 0;
	var uLocal_5424 = 0;
	var uLocal_5425 = 0;
	var uLocal_5426 = 0;
	var uLocal_5427 = 0;
	var uLocal_5428 = 0;
	var uLocal_5429 = 0;
	var uLocal_5430 = 0;
	var uLocal_5431 = 0;
	var uLocal_5432 = 0;
	var uLocal_5433 = 0;
	var uLocal_5434 = 0;
	var uLocal_5435 = 0;
	var uLocal_5436 = 0;
	var uLocal_5437 = 0;
	var uLocal_5438 = 0;
	var uLocal_5439 = 0;
	var uLocal_5440 = 0;
	var uLocal_5441 = 0;
	var uLocal_5442 = 0;
	var uLocal_5443 = 0;
	var uLocal_5444 = 0;
	var uLocal_5445 = 0;
	var uLocal_5446 = 0;
	var uLocal_5447 = 0;
	var uLocal_5448 = 0;
	var uLocal_5449 = 0;
	var uLocal_5450 = 0;
	var uLocal_5451 = 0;
	var uLocal_5452 = 0;
	var uLocal_5453 = 0;
	var uLocal_5454 = 0;
	var uLocal_5455 = 0;
	var uLocal_5456 = 0;
	var uLocal_5457 = 0;
	var uLocal_5458 = 0;
	var uLocal_5459 = 0;
	var uLocal_5460 = 0;
	var uLocal_5461 = 0;
	var uLocal_5462 = 0;
	var uLocal_5463 = 0;
	var uLocal_5464 = 0;
	var uLocal_5465 = 0;
	var uLocal_5466 = 0;
	var uLocal_5467 = 0;
	var uLocal_5468 = 0;
	var uLocal_5469 = 0;
	var uLocal_5470 = 0;
	var uLocal_5471 = 0;
	var uLocal_5472 = 0;
	var uLocal_5473 = 0;
	var uLocal_5474 = 0;
	var uLocal_5475 = 0;
	var uLocal_5476 = 0;
	var uLocal_5477 = 0;
	var uLocal_5478 = 0;
	var uLocal_5479 = 0;
	var uLocal_5480 = 0;
	var uLocal_5481 = 0;
	var uLocal_5482 = 0;
	var uLocal_5483 = 0;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 0;
	var uLocal_5488 = 623901053;
	var uLocal_5489 = 6;
	var uLocal_5490 = 0;
	var uLocal_5491 = 0;
	var uLocal_5492 = 0;
	var uLocal_5493 = 0;
	var uLocal_5494 = 0;
	var uLocal_5495 = 0;
	var uLocal_5496 = 0;
	var uLocal_5497 = 0;
	var uLocal_5498 = 0;
	var uLocal_5499 = 0;
	var uLocal_5500 = 0;
	var uLocal_5501 = 0;
	var uLocal_5502 = 0;
	var uLocal_5503 = 1048576000;
	var uLocal_5504 = 1092616192;
	var uLocal_5505 = -1082130432;
	var uLocal_5506 = -1082130432;
	var uLocal_5507 = 0;
	var uLocal_5508 = 0;
	var uLocal_5509 = 0;
	var uLocal_5510 = 0;
	var uLocal_5511 = 0;
	var uLocal_5512 = 0;
	var uLocal_5513 = 0;
	var uLocal_5514 = 0;
	var uLocal_5515 = 0;
	var uLocal_5516 = 0;
	var uLocal_5517 = 0;
	var uLocal_5518 = 4;
	var uLocal_5519 = 0;
	var uLocal_5520 = 0;
	var uLocal_5521 = -1;
	var uLocal_5522 = -1;
	var uLocal_5523 = 0;
	var uLocal_5524 = -1;
	var uLocal_5525 = -1;
	var uLocal_5526 = -1;
	var uLocal_5527 = -1;
	var uLocal_5528 = 0;
	var uLocal_5529 = 0;
	var uLocal_5530 = 0;
	var uLocal_5531 = 0;
	var uLocal_5532 = 0;
	var uLocal_5533 = 0;
	var uLocal_5534 = 0;
	var uLocal_5535 = -1;
	var uLocal_5536 = 255;
	var uLocal_5537 = 0;
	var uLocal_5538 = 0;
	var uLocal_5539 = 0;
	var uLocal_5540 = 0;
	var uLocal_5541 = 0;
	var uLocal_5542 = 0;
	var uLocal_5543 = 0;
	var uLocal_5544 = 0;
	var uLocal_5545 = 0;
	var uLocal_5546 = 0;
	var uLocal_5547 = 0;
	var uLocal_5548 = -1;
	var uLocal_5549 = 0;
	var uLocal_5550 = 0;
	var uLocal_5551 = 0;
	var uLocal_5552 = 0;
	var uLocal_5553 = 0;
	var uLocal_5554 = 0;
	var uLocal_5555 = -1;
	var uLocal_5556 = -1;
	var uLocal_5557 = 0;
	var uLocal_5558 = -1;
	var uLocal_5559 = -1;
	var uLocal_5560 = -1;
	var uLocal_5561 = -1;
	var uLocal_5562 = 0;
	var uLocal_5563 = 0;
	var uLocal_5564 = 0;
	var uLocal_5565 = 0;
	var uLocal_5566 = 0;
	var uLocal_5567 = 0;
	var uLocal_5568 = 0;
	var uLocal_5569 = -1;
	var uLocal_5570 = 255;
	var uLocal_5571 = 0;
	var uLocal_5572 = 0;
	var uLocal_5573 = 0;
	var uLocal_5574 = 0;
	var uLocal_5575 = 0;
	var uLocal_5576 = 0;
	var uLocal_5577 = 0;
	var uLocal_5578 = 0;
	var uLocal_5579 = 0;
	var uLocal_5580 = 0;
	var uLocal_5581 = 0;
	var uLocal_5582 = -1;
	var uLocal_5583 = 0;
	var uLocal_5584 = 0;
	var uLocal_5585 = 0;
	var uLocal_5586 = 0;
	var uLocal_5587 = 0;
	var uLocal_5588 = 0;
	var uLocal_5589 = -1;
	var uLocal_5590 = -1;
	var uLocal_5591 = 0;
	var uLocal_5592 = -1;
	var uLocal_5593 = -1;
	var uLocal_5594 = -1;
	var uLocal_5595 = -1;
	var uLocal_5596 = 0;
	var uLocal_5597 = 0;
	var uLocal_5598 = 0;
	var uLocal_5599 = 0;
	var uLocal_5600 = 0;
	var uLocal_5601 = 0;
	var uLocal_5602 = 0;
	var uLocal_5603 = -1;
	var uLocal_5604 = 255;
	var uLocal_5605 = 0;
	var uLocal_5606 = 0;
	var uLocal_5607 = 0;
	var uLocal_5608 = 0;
	var uLocal_5609 = 0;
	var uLocal_5610 = 0;
	var uLocal_5611 = 0;
	var uLocal_5612 = 0;
	var uLocal_5613 = 0;
	var uLocal_5614 = 0;
	var uLocal_5615 = 0;
	var uLocal_5616 = -1;
	var uLocal_5617 = 0;
	var uLocal_5618 = 0;
	var uLocal_5619 = 0;
	var uLocal_5620 = 0;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = -1;
	var uLocal_5624 = -1;
	var uLocal_5625 = 0;
	var uLocal_5626 = -1;
	var uLocal_5627 = -1;
	var uLocal_5628 = -1;
	var uLocal_5629 = -1;
	var uLocal_5630 = 0;
	var uLocal_5631 = 0;
	var uLocal_5632 = 0;
	var uLocal_5633 = 0;
	var uLocal_5634 = 0;
	var uLocal_5635 = 0;
	var uLocal_5636 = 0;
	var uLocal_5637 = -1;
	var uLocal_5638 = 255;
	var uLocal_5639 = 0;
	var uLocal_5640 = 0;
	var uLocal_5641 = 0;
	var uLocal_5642 = 0;
	var uLocal_5643 = 0;
	var uLocal_5644 = 0;
	var uLocal_5645 = 0;
	var uLocal_5646 = 0;
	var uLocal_5647 = 0;
	var uLocal_5648 = 0;
	var uLocal_5649 = 0;
	var uLocal_5650 = -1;
	var uLocal_5651 = 0;
	var uLocal_5652 = 0;
	var uLocal_5653 = 0;
	var uLocal_5654 = 0;
	var uLocal_5655 = 20;
	var uLocal_5656 = 0;
	var uLocal_5657 = 0;
	var uLocal_5658 = -1;
	var uLocal_5659 = -1;
	var uLocal_5660 = 0;
	var uLocal_5661 = -1;
	var uLocal_5662 = -1;
	var uLocal_5663 = -1;
	var uLocal_5664 = -1;
	var uLocal_5665 = 0;
	var uLocal_5666 = 0;
	var uLocal_5667 = 0;
	var uLocal_5668 = 0;
	var uLocal_5669 = 0;
	var uLocal_5670 = 0;
	var uLocal_5671 = 0;
	var uLocal_5672 = -1;
	var uLocal_5673 = 255;
	var uLocal_5674 = 0;
	var uLocal_5675 = 0;
	var uLocal_5676 = 0;
	var uLocal_5677 = 0;
	var uLocal_5678 = 0;
	var uLocal_5679 = 0;
	var uLocal_5680 = 0;
	var uLocal_5681 = 0;
	var uLocal_5682 = 0;
	var uLocal_5683 = 0;
	var uLocal_5684 = 0;
	var uLocal_5685 = -1;
	var uLocal_5686 = 0;
	var uLocal_5687 = 0;
	var uLocal_5688 = 0;
	var uLocal_5689 = 0;
	var uLocal_5690 = 0;
	var uLocal_5691 = 0;
	var uLocal_5692 = -1;
	var uLocal_5693 = -1;
	var uLocal_5694 = 0;
	var uLocal_5695 = -1;
	var uLocal_5696 = -1;
	var uLocal_5697 = -1;
	var uLocal_5698 = -1;
	var uLocal_5699 = 0;
	var uLocal_5700 = 0;
	var uLocal_5701 = 0;
	var uLocal_5702 = 0;
	var uLocal_5703 = 0;
	var uLocal_5704 = 0;
	var uLocal_5705 = 0;
	var uLocal_5706 = -1;
	var uLocal_5707 = 255;
	var uLocal_5708 = 0;
	var uLocal_5709 = 0;
	var uLocal_5710 = 0;
	var uLocal_5711 = 0;
	var uLocal_5712 = 0;
	var uLocal_5713 = 0;
	var uLocal_5714 = 0;
	var uLocal_5715 = 0;
	var uLocal_5716 = 0;
	var uLocal_5717 = 0;
	var uLocal_5718 = 0;
	var uLocal_5719 = -1;
	var uLocal_5720 = 0;
	var uLocal_5721 = 0;
	var uLocal_5722 = 0;
	var uLocal_5723 = 0;
	var uLocal_5724 = 0;
	var uLocal_5725 = 0;
	var uLocal_5726 = -1;
	var uLocal_5727 = -1;
	var uLocal_5728 = 0;
	var uLocal_5729 = -1;
	var uLocal_5730 = -1;
	var uLocal_5731 = -1;
	var uLocal_5732 = -1;
	var uLocal_5733 = 0;
	var uLocal_5734 = 0;
	var uLocal_5735 = 0;
	var uLocal_5736 = 0;
	var uLocal_5737 = 0;
	var uLocal_5738 = 0;
	var uLocal_5739 = 0;
	var uLocal_5740 = -1;
	var uLocal_5741 = 255;
	var uLocal_5742 = 0;
	var uLocal_5743 = 0;
	var uLocal_5744 = 0;
	var uLocal_5745 = 0;
	var uLocal_5746 = 0;
	var uLocal_5747 = 0;
	var uLocal_5748 = 0;
	var uLocal_5749 = 0;
	var uLocal_5750 = 0;
	var uLocal_5751 = 0;
	var uLocal_5752 = 0;
	var uLocal_5753 = -1;
	var uLocal_5754 = 0;
	var uLocal_5755 = 0;
	var uLocal_5756 = 0;
	var uLocal_5757 = 0;
	var uLocal_5758 = 0;
	var uLocal_5759 = 0;
	var uLocal_5760 = -1;
	var uLocal_5761 = -1;
	var uLocal_5762 = 0;
	var uLocal_5763 = -1;
	var uLocal_5764 = -1;
	var uLocal_5765 = -1;
	var uLocal_5766 = -1;
	var uLocal_5767 = 0;
	var uLocal_5768 = 0;
	var uLocal_5769 = 0;
	var uLocal_5770 = 0;
	var uLocal_5771 = 0;
	var uLocal_5772 = 0;
	var uLocal_5773 = 0;
	var uLocal_5774 = -1;
	var uLocal_5775 = 255;
	var uLocal_5776 = 0;
	var uLocal_5777 = 0;
	var uLocal_5778 = 0;
	var uLocal_5779 = 0;
	var uLocal_5780 = 0;
	var uLocal_5781 = 0;
	var uLocal_5782 = 0;
	var uLocal_5783 = 0;
	var uLocal_5784 = 0;
	var uLocal_5785 = 0;
	var uLocal_5786 = 0;
	var uLocal_5787 = -1;
	var uLocal_5788 = 0;
	var uLocal_5789 = 0;
	var uLocal_5790 = 0;
	var uLocal_5791 = 0;
	var uLocal_5792 = 0;
	var uLocal_5793 = 0;
	var uLocal_5794 = -1;
	var uLocal_5795 = -1;
	var uLocal_5796 = 0;
	var uLocal_5797 = -1;
	var uLocal_5798 = -1;
	var uLocal_5799 = -1;
	var uLocal_5800 = -1;
	var uLocal_5801 = 0;
	var uLocal_5802 = 0;
	var uLocal_5803 = 0;
	var uLocal_5804 = 0;
	var uLocal_5805 = 0;
	var uLocal_5806 = 0;
	var uLocal_5807 = 0;
	var uLocal_5808 = -1;
	var uLocal_5809 = 255;
	var uLocal_5810 = 0;
	var uLocal_5811 = 0;
	var uLocal_5812 = 0;
	var uLocal_5813 = 0;
	var uLocal_5814 = 0;
	var uLocal_5815 = 0;
	var uLocal_5816 = 0;
	var uLocal_5817 = 0;
	var uLocal_5818 = 0;
	var uLocal_5819 = 0;
	var uLocal_5820 = 0;
	var uLocal_5821 = -1;
	var uLocal_5822 = 0;
	var uLocal_5823 = 0;
	var uLocal_5824 = 0;
	var uLocal_5825 = 0;
	var uLocal_5826 = 0;
	var uLocal_5827 = 0;
	var uLocal_5828 = -1;
	var uLocal_5829 = -1;
	var uLocal_5830 = 0;
	var uLocal_5831 = -1;
	var uLocal_5832 = -1;
	var uLocal_5833 = -1;
	var uLocal_5834 = -1;
	var uLocal_5835 = 0;
	var uLocal_5836 = 0;
	var uLocal_5837 = 0;
	var uLocal_5838 = 0;
	var uLocal_5839 = 0;
	var uLocal_5840 = 0;
	var uLocal_5841 = 0;
	var uLocal_5842 = -1;
	var uLocal_5843 = 255;
	var uLocal_5844 = 0;
	var uLocal_5845 = 0;
	var uLocal_5846 = 0;
	var uLocal_5847 = 0;
	var uLocal_5848 = 0;
	var uLocal_5849 = 0;
	var uLocal_5850 = 0;
	var uLocal_5851 = 0;
	var uLocal_5852 = 0;
	var uLocal_5853 = 0;
	var uLocal_5854 = 0;
	var uLocal_5855 = -1;
	var uLocal_5856 = 0;
	var uLocal_5857 = 0;
	var uLocal_5858 = 0;
	var uLocal_5859 = 0;
	var uLocal_5860 = 0;
	var uLocal_5861 = 0;
	var uLocal_5862 = -1;
	var uLocal_5863 = -1;
	var uLocal_5864 = 0;
	var uLocal_5865 = -1;
	var uLocal_5866 = -1;
	var uLocal_5867 = -1;
	var uLocal_5868 = -1;
	var uLocal_5869 = 0;
	var uLocal_5870 = 0;
	var uLocal_5871 = 0;
	var uLocal_5872 = 0;
	var uLocal_5873 = 0;
	var uLocal_5874 = 0;
	var uLocal_5875 = 0;
	var uLocal_5876 = -1;
	var uLocal_5877 = 255;
	var uLocal_5878 = 0;
	var uLocal_5879 = 0;
	var uLocal_5880 = 0;
	var uLocal_5881 = 0;
	var uLocal_5882 = 0;
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = -1;
	var uLocal_5890 = 0;
	var uLocal_5891 = 0;
	var uLocal_5892 = 0;
	var uLocal_5893 = 0;
	var uLocal_5894 = 0;
	var uLocal_5895 = 0;
	var uLocal_5896 = -1;
	var uLocal_5897 = -1;
	var uLocal_5898 = 0;
	var uLocal_5899 = -1;
	var uLocal_5900 = -1;
	var uLocal_5901 = -1;
	var uLocal_5902 = -1;
	var uLocal_5903 = 0;
	var uLocal_5904 = 0;
	var uLocal_5905 = 0;
	var uLocal_5906 = 0;
	var uLocal_5907 = 0;
	var uLocal_5908 = 0;
	var uLocal_5909 = 0;
	var uLocal_5910 = -1;
	var uLocal_5911 = 255;
	var uLocal_5912 = 0;
	var uLocal_5913 = 0;
	var uLocal_5914 = 0;
	var uLocal_5915 = 0;
	var uLocal_5916 = 0;
	var uLocal_5917 = 0;
	var uLocal_5918 = 0;
	var uLocal_5919 = 0;
	var uLocal_5920 = 0;
	var uLocal_5921 = 0;
	var uLocal_5922 = 0;
	var uLocal_5923 = -1;
	var uLocal_5924 = 0;
	var uLocal_5925 = 0;
	var uLocal_5926 = 0;
	var uLocal_5927 = 0;
	var uLocal_5928 = 0;
	var uLocal_5929 = 0;
	var uLocal_5930 = -1;
	var uLocal_5931 = -1;
	var uLocal_5932 = 0;
	var uLocal_5933 = -1;
	var uLocal_5934 = -1;
	var uLocal_5935 = -1;
	var uLocal_5936 = -1;
	var uLocal_5937 = 0;
	var uLocal_5938 = 0;
	var uLocal_5939 = 0;
	var uLocal_5940 = 0;
	var uLocal_5941 = 0;
	var uLocal_5942 = 0;
	var uLocal_5943 = 0;
	var uLocal_5944 = -1;
	var uLocal_5945 = 255;
	var uLocal_5946 = 0;
	var uLocal_5947 = 0;
	var uLocal_5948 = 0;
	var uLocal_5949 = 0;
	var uLocal_5950 = 0;
	var uLocal_5951 = 0;
	var uLocal_5952 = 0;
	var uLocal_5953 = 0;
	var uLocal_5954 = 0;
	var uLocal_5955 = 0;
	var uLocal_5956 = 0;
	var uLocal_5957 = -1;
	var uLocal_5958 = 0;
	var uLocal_5959 = 0;
	var uLocal_5960 = 0;
	var uLocal_5961 = 0;
	var uLocal_5962 = 0;
	var uLocal_5963 = 0;
	var uLocal_5964 = -1;
	var uLocal_5965 = -1;
	var uLocal_5966 = 0;
	var uLocal_5967 = -1;
	var uLocal_5968 = -1;
	var uLocal_5969 = -1;
	var uLocal_5970 = -1;
	var uLocal_5971 = 0;
	var uLocal_5972 = 0;
	var uLocal_5973 = 0;
	var uLocal_5974 = 0;
	var uLocal_5975 = 0;
	var uLocal_5976 = 0;
	var uLocal_5977 = 0;
	var uLocal_5978 = -1;
	var uLocal_5979 = 255;
	var uLocal_5980 = 0;
	var uLocal_5981 = 0;
	var uLocal_5982 = 0;
	var uLocal_5983 = 0;
	var uLocal_5984 = 0;
	var uLocal_5985 = 0;
	var uLocal_5986 = 0;
	var uLocal_5987 = 0;
	var uLocal_5988 = 0;
	var uLocal_5989 = 0;
	var uLocal_5990 = 0;
	var uLocal_5991 = -1;
	var uLocal_5992 = 0;
	var uLocal_5993 = 0;
	var uLocal_5994 = 0;
	var uLocal_5995 = 0;
	var uLocal_5996 = 0;
	var uLocal_5997 = 0;
	var uLocal_5998 = -1;
	var uLocal_5999 = -1;
	var uLocal_6000 = 0;
	var uLocal_6001 = -1;
	var uLocal_6002 = -1;
	var uLocal_6003 = -1;
	var uLocal_6004 = -1;
	var uLocal_6005 = 0;
	var uLocal_6006 = 0;
	var uLocal_6007 = 0;
	var uLocal_6008 = 0;
	var uLocal_6009 = 0;
	var uLocal_6010 = 0;
	var uLocal_6011 = 0;
	var uLocal_6012 = -1;
	var uLocal_6013 = 255;
	var uLocal_6014 = 0;
	var uLocal_6015 = 0;
	var uLocal_6016 = 0;
	var uLocal_6017 = 0;
	var uLocal_6018 = 0;
	var uLocal_6019 = 0;
	var uLocal_6020 = 0;
	var uLocal_6021 = 0;
	var uLocal_6022 = 0;
	var uLocal_6023 = 0;
	var uLocal_6024 = 0;
	var uLocal_6025 = -1;
	var uLocal_6026 = 0;
	var uLocal_6027 = 0;
	var uLocal_6028 = 0;
	var uLocal_6029 = 0;
	var uLocal_6030 = 0;
	var uLocal_6031 = 0;
	var uLocal_6032 = -1;
	var uLocal_6033 = -1;
	var uLocal_6034 = 0;
	var uLocal_6035 = -1;
	var uLocal_6036 = -1;
	var uLocal_6037 = -1;
	var uLocal_6038 = -1;
	var uLocal_6039 = 0;
	var uLocal_6040 = 0;
	var uLocal_6041 = 0;
	var uLocal_6042 = 0;
	var uLocal_6043 = 0;
	var uLocal_6044 = 0;
	var uLocal_6045 = 0;
	var uLocal_6046 = -1;
	var uLocal_6047 = 255;
	var uLocal_6048 = 0;
	var uLocal_6049 = 0;
	var uLocal_6050 = 0;
	var uLocal_6051 = 0;
	var uLocal_6052 = 0;
	var uLocal_6053 = 0;
	var uLocal_6054 = 0;
	var uLocal_6055 = 0;
	var uLocal_6056 = 0;
	var uLocal_6057 = 0;
	var uLocal_6058 = 0;
	var uLocal_6059 = -1;
	var uLocal_6060 = 0;
	var uLocal_6061 = 0;
	var uLocal_6062 = 0;
	var uLocal_6063 = 0;
	var uLocal_6064 = 0;
	var uLocal_6065 = 0;
	var uLocal_6066 = -1;
	var uLocal_6067 = -1;
	var uLocal_6068 = 0;
	var uLocal_6069 = -1;
	var uLocal_6070 = -1;
	var uLocal_6071 = -1;
	var uLocal_6072 = -1;
	var uLocal_6073 = 0;
	var uLocal_6074 = 0;
	var uLocal_6075 = 0;
	var uLocal_6076 = 0;
	var uLocal_6077 = 0;
	var uLocal_6078 = 0;
	var uLocal_6079 = 0;
	var uLocal_6080 = -1;
	var uLocal_6081 = 255;
	var uLocal_6082 = 0;
	var uLocal_6083 = 0;
	var uLocal_6084 = 0;
	var uLocal_6085 = 0;
	var uLocal_6086 = 0;
	var uLocal_6087 = 0;
	var uLocal_6088 = 0;
	var uLocal_6089 = 0;
	var uLocal_6090 = 0;
	var uLocal_6091 = 0;
	var uLocal_6092 = 0;
	var uLocal_6093 = -1;
	var uLocal_6094 = 0;
	var uLocal_6095 = 0;
	var uLocal_6096 = 0;
	var uLocal_6097 = 0;
	var uLocal_6098 = 0;
	var uLocal_6099 = 0;
	var uLocal_6100 = -1;
	var uLocal_6101 = -1;
	var uLocal_6102 = 0;
	var uLocal_6103 = -1;
	var uLocal_6104 = -1;
	var uLocal_6105 = -1;
	var uLocal_6106 = -1;
	var uLocal_6107 = 0;
	var uLocal_6108 = 0;
	var uLocal_6109 = 0;
	var uLocal_6110 = 0;
	var uLocal_6111 = 0;
	var uLocal_6112 = 0;
	var uLocal_6113 = 0;
	var uLocal_6114 = -1;
	var uLocal_6115 = 255;
	var uLocal_6116 = 0;
	var uLocal_6117 = 0;
	var uLocal_6118 = 0;
	var uLocal_6119 = 0;
	var uLocal_6120 = 0;
	var uLocal_6121 = 0;
	var uLocal_6122 = 0;
	var uLocal_6123 = 0;
	var uLocal_6124 = 0;
	var uLocal_6125 = 0;
	var uLocal_6126 = 0;
	var uLocal_6127 = -1;
	var uLocal_6128 = 0;
	var uLocal_6129 = 0;
	var uLocal_6130 = 0;
	var uLocal_6131 = 0;
	var uLocal_6132 = 0;
	var uLocal_6133 = 0;
	var uLocal_6134 = -1;
	var uLocal_6135 = -1;
	var uLocal_6136 = 0;
	var uLocal_6137 = -1;
	var uLocal_6138 = -1;
	var uLocal_6139 = -1;
	var uLocal_6140 = -1;
	var uLocal_6141 = 0;
	var uLocal_6142 = 0;
	var uLocal_6143 = 0;
	var uLocal_6144 = 0;
	var uLocal_6145 = 0;
	var uLocal_6146 = 0;
	var uLocal_6147 = 0;
	var uLocal_6148 = -1;
	var uLocal_6149 = 255;
	var uLocal_6150 = 0;
	var uLocal_6151 = 0;
	var uLocal_6152 = 0;
	var uLocal_6153 = 0;
	var uLocal_6154 = 0;
	var uLocal_6155 = 0;
	var uLocal_6156 = 0;
	var uLocal_6157 = 0;
	var uLocal_6158 = 0;
	var uLocal_6159 = 0;
	var uLocal_6160 = 0;
	var uLocal_6161 = -1;
	var uLocal_6162 = 0;
	var uLocal_6163 = 0;
	var uLocal_6164 = 0;
	var uLocal_6165 = 0;
	var uLocal_6166 = 0;
	var uLocal_6167 = 0;
	var uLocal_6168 = -1;
	var uLocal_6169 = -1;
	var uLocal_6170 = 0;
	var uLocal_6171 = -1;
	var uLocal_6172 = -1;
	var uLocal_6173 = -1;
	var uLocal_6174 = -1;
	var uLocal_6175 = 0;
	var uLocal_6176 = 0;
	var uLocal_6177 = 0;
	var uLocal_6178 = 0;
	var uLocal_6179 = 0;
	var uLocal_6180 = 0;
	var uLocal_6181 = 0;
	var uLocal_6182 = -1;
	var uLocal_6183 = 255;
	var uLocal_6184 = 0;
	var uLocal_6185 = 0;
	var uLocal_6186 = 0;
	var uLocal_6187 = 0;
	var uLocal_6188 = 0;
	var uLocal_6189 = 0;
	var uLocal_6190 = 0;
	var uLocal_6191 = 0;
	var uLocal_6192 = 0;
	var uLocal_6193 = 0;
	var uLocal_6194 = 0;
	var uLocal_6195 = -1;
	var uLocal_6196 = 0;
	var uLocal_6197 = 0;
	var uLocal_6198 = 0;
	var uLocal_6199 = 0;
	var uLocal_6200 = 0;
	var uLocal_6201 = 0;
	var uLocal_6202 = -1;
	var uLocal_6203 = -1;
	var uLocal_6204 = 0;
	var uLocal_6205 = -1;
	var uLocal_6206 = -1;
	var uLocal_6207 = -1;
	var uLocal_6208 = -1;
	var uLocal_6209 = 0;
	var uLocal_6210 = 0;
	var uLocal_6211 = 0;
	var uLocal_6212 = 0;
	var uLocal_6213 = 0;
	var uLocal_6214 = 0;
	var uLocal_6215 = 0;
	var uLocal_6216 = -1;
	var uLocal_6217 = 255;
	var uLocal_6218 = 0;
	var uLocal_6219 = 0;
	var uLocal_6220 = 0;
	var uLocal_6221 = 0;
	var uLocal_6222 = 0;
	var uLocal_6223 = 0;
	var uLocal_6224 = 0;
	var uLocal_6225 = 0;
	var uLocal_6226 = 0;
	var uLocal_6227 = 0;
	var uLocal_6228 = 0;
	var uLocal_6229 = -1;
	var uLocal_6230 = 0;
	var uLocal_6231 = 0;
	var uLocal_6232 = 0;
	var uLocal_6233 = 0;
	var uLocal_6234 = 0;
	var uLocal_6235 = 0;
	var uLocal_6236 = -1;
	var uLocal_6237 = -1;
	var uLocal_6238 = 0;
	var uLocal_6239 = -1;
	var uLocal_6240 = -1;
	var uLocal_6241 = -1;
	var uLocal_6242 = -1;
	var uLocal_6243 = 0;
	var uLocal_6244 = 0;
	var uLocal_6245 = 0;
	var uLocal_6246 = 0;
	var uLocal_6247 = 0;
	var uLocal_6248 = 0;
	var uLocal_6249 = 0;
	var uLocal_6250 = -1;
	var uLocal_6251 = 255;
	var uLocal_6252 = 0;
	var uLocal_6253 = 0;
	var uLocal_6254 = 0;
	var uLocal_6255 = 0;
	var uLocal_6256 = 0;
	var uLocal_6257 = 0;
	var uLocal_6258 = 0;
	var uLocal_6259 = 0;
	var uLocal_6260 = 0;
	var uLocal_6261 = 0;
	var uLocal_6262 = 0;
	var uLocal_6263 = -1;
	var uLocal_6264 = 0;
	var uLocal_6265 = 0;
	var uLocal_6266 = 0;
	var uLocal_6267 = 0;
	var uLocal_6268 = 0;
	var uLocal_6269 = 0;
	var uLocal_6270 = -1;
	var uLocal_6271 = -1;
	var uLocal_6272 = 0;
	var uLocal_6273 = -1;
	var uLocal_6274 = -1;
	var uLocal_6275 = -1;
	var uLocal_6276 = -1;
	var uLocal_6277 = 0;
	var uLocal_6278 = 0;
	var uLocal_6279 = 0;
	var uLocal_6280 = 0;
	var uLocal_6281 = 0;
	var uLocal_6282 = 0;
	var uLocal_6283 = 0;
	var uLocal_6284 = -1;
	var uLocal_6285 = 255;
	var uLocal_6286 = 0;
	var uLocal_6287 = 0;
	var uLocal_6288 = 0;
	var uLocal_6289 = 0;
	var uLocal_6290 = 0;
	var uLocal_6291 = 0;
	var uLocal_6292 = 0;
	var uLocal_6293 = 0;
	var uLocal_6294 = 0;
	var uLocal_6295 = 0;
	var uLocal_6296 = 0;
	var uLocal_6297 = -1;
	var uLocal_6298 = 0;
	var uLocal_6299 = 0;
	var uLocal_6300 = 0;
	var uLocal_6301 = 0;
	var uLocal_6302 = 0;
	var uLocal_6303 = 0;
	var uLocal_6304 = -1;
	var uLocal_6305 = -1;
	var uLocal_6306 = 0;
	var uLocal_6307 = -1;
	var uLocal_6308 = -1;
	var uLocal_6309 = -1;
	var uLocal_6310 = -1;
	var uLocal_6311 = 0;
	var uLocal_6312 = 0;
	var uLocal_6313 = 0;
	var uLocal_6314 = 0;
	var uLocal_6315 = 0;
	var uLocal_6316 = 0;
	var uLocal_6317 = 0;
	var uLocal_6318 = -1;
	var uLocal_6319 = 255;
	var uLocal_6320 = 0;
	var uLocal_6321 = 0;
	var uLocal_6322 = 0;
	var uLocal_6323 = 0;
	var uLocal_6324 = 0;
	var uLocal_6325 = 0;
	var uLocal_6326 = 0;
	var uLocal_6327 = 0;
	var uLocal_6328 = 0;
	var uLocal_6329 = 0;
	var uLocal_6330 = 0;
	var uLocal_6331 = -1;
	var uLocal_6332 = 0;
	var uLocal_6333 = 0;
	var uLocal_6334 = 0;
	var uLocal_6335 = 0;
	var uScriptParam_0 = -1;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_29 = 1f;
	fLocal_30 = 1f;
	iLocal_31 = 675980447;
	func_1(&uScriptParam_0);
	while (!func_2())
	{
		func_3();
		if (iLocal_33 >= 0 && iLocal_33 < 32)
		{
			iLocal_38 = MISC::GET_GAME_TIMER();
			aggregate_func_2563();
			func_5();
			func_6();
		}
		else
		{
			iVar0 = MISC::GET_GAME_TIMER();
			if (iLocal_38 != 0)
			{
				if ((iVar0 - iLocal_38) > 30000)
				{
					CAM::DO_SCREEN_FADE_IN(0);
					func_7();
					SCRIPTS::TERMINATE_THIS_THREAD();
				}
			}
			else
			{
				iLocal_38 = iVar0;
			}
		}
		BUILTIN::WAIT(0);
	}
	func_7();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	aggregate_func_1994(32, *uParam0);
	aggregate_func_306();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_10();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_39, 394, 47);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&Local_39), 394, "sServerBD");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_433, 161, 48);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_433[0 /*5*/]), 161, "sClientBD");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_594, 385, 49);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_594[0 /*12*/]), 385, "sCutscenePlayerBD");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_979, 1217, 50);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_979[0 /*38*/]), 1217, "sVotingPlayerBD");
	while (!NETWORK::_0x5D10B3795F3FC886() && !func_2())
	{
		BUILTIN::WAIT(0);
	}
	while (!func_13() && !func_2())
	{
		if (!aggregate_func_4287(&uLocal_36))
		{
			aggregate_func_1181(&uLocal_36, 1, 0);
		}
		BUILTIN::WAIT(0);
	}
}

bool func_2()
{
	if (aggregate_func_523(Global_390004->f_6, Global_390004->f_7))
	{
		return true;
	}
	if (Local_39 == 5)
	{
		return true;
	}
	return false;
}

void func_3()
{
	bLocal_32 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
	iLocal_33 = NETWORK::PARTICIPANT_ID_TO_INT();
}

void func_5()
{
	int iVar0;
	int iVar1;

	if (!bLocal_32)
	{
		return;
	}
	while (iVar0 < 6)
	{
		iVar1 = Local_39;
		switch (Local_39)
		{
			case 0:
				if (func_18(1))
				{
					func_19();
					iVar1 = 1;
				}
				break;
			case 1:
				if (func_18(3))
				{
					iVar1 = 2;
				}
				break;
			case 2:
				if (func_20())
				{
					iVar1 = 3;
				}
				break;
			case 3:
				if (func_18(5))
				{
					iVar1 = 4;
				}
				break;
			case 4:
				iVar1 = 5;
				break;
		}
		if (iVar1 != Local_39)
		{
			Local_39 = iVar1;
			iVar0++;
		}
	else
	{
		}
	else
	{
		}
	}
}

void func_6()
{
	int iVar0;
	int iVar1;

	while (iVar0 < 6)
	{
		iVar1 = &Local_433[iLocal_33 /*5*/];
		switch (&Local_433[iLocal_33 /*5*/])
		{
			case 0:
				if (func_21())
				{
					iVar1 = 1;
				}
				break;
			case 1:
				if (Local_39 >= 1)
				{
					func_22();
					iVar1 = 2;
				}
				break;
			case 2:
				if (func_23())
				{
					iVar1 = 3;
				}
				break;
			case 3:
				if (Local_39 >= 2)
				{
					iVar1 = 4;
				}
				break;
			case 4:
				if (func_24())
				{
					iVar1 = 5;
				}
				break;
		}
		if (iVar1 != &Local_433[iLocal_33 /*5*/])
		{
			Local_433[iLocal_33 /*5*/] = iVar1;
			iVar0++;
		}
	else
	{
		}
	else
	{
		}
	}
}

void func_7()
{
	if (func_25())
	{
		aggregate_func_2882(&Local_2196, 12);
	}
	func_27(&Local_2196, Local_594[iLocal_33 /*12*/]);
	func_28();
}

void func_10()
{
	int iVar0;

	func_32(Local_39.f_2[0 /*33*/]);
	iVar0 = 0;
	while (iVar0 < Local_594)
	{
		func_33(Local_594[iVar0 /*12*/]);
		iVar0++;
	}
	aggregate_func_7708(&Local_2196);
}

bool func_13()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (aggregate_func_4287(&uLocal_36) && aggregate_func_646(&uLocal_36, 1, 0) > 20000)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID((*Global_3407872)[iVar0 /*7*/]))
		{
		}
		else
		{
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION((*Global_3407872)[iVar0 /*7*/]))
			{
				return false;
			}
			iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE((*Global_3407872)[iVar0 /*7*/]);
			if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
			{
				return false;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
			{
				return false;
			}
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_17(int iParam0)
{
	var uVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &uVar0, 4))
	{
		return;
	}
}

bool func_18(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
		}
		else if (&Local_433[iVar0 /*5*/] != iParam0)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_25())
	{
		return;
	}
	Local_39.f_393 = 255;
	iVar0 = 255;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
		{
			if ((Local_433[iVar1 /*5*/])->f_3 == 0)
			{
			}
			else
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
				if (iVar3 != _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(iVar3)))
				{
					if (iVar0 == 255)
					{
						iVar0 = iVar2;
					}
				}
				else
				{
					Local_39.f_393 = iVar2;
				}
			}
		}
		iVar1++;
	}
	if (Local_39.f_393 == 255)
	{
		if (iVar0 != 255)
		{
			Local_39.f_393 = iVar0;
		}
	}
	if (Local_39.f_393 != 255)
	{
		Local_39.f_391 = (Local_433[Local_39.f_393 /*5*/])->f_3;
		Local_39.f_392 = (Local_433[Local_39.f_393 /*5*/])->f_4;
	}
	if (Local_39.f_392 == -1)
	{
		Local_39.f_391 = 0;
	}
}

bool func_20()
{
	switch (Global_3407872->f_225)
	{
		case 1:
			return func_36();
		default:
			break;
	}
	return true;
	return false;
}

bool func_21()
{
	int iVar0;

	if (!func_25())
	{
		return true;
	}
	if (!func_37())
	{
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-2111141782))
	{
		MISC::SET_BIT(&((Local_433[iLocal_33 /*5*/])->f_3), 0);
		MISC::SET_BIT(&((Local_433[iLocal_33 /*5*/])->f_3), 1);
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1384963671))
	{
		MISC::SET_BIT(&((Local_433[iLocal_33 /*5*/])->f_3), 3);
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-567253426))
	{
		MISC::SET_BIT(&((Local_433[iLocal_33 /*5*/])->f_3), 2);
	}
	iVar0 = aggregate_func_3450(aggregate_func_5163(), 1);
	if (iVar0 == -1)
	{
		(Local_433[iLocal_33 /*5*/])->f_3 = 0;
	}
	(Local_433[iLocal_33 /*5*/])->f_4 = iVar0;
	return true;
}

void func_22()
{
	var uVar0;
	int iVar5;

	if (!func_25())
	{
		return;
	}
	if (!aggregate_func_9519())
	{
		return;
	}
	if (Local_39.f_393 == NETWORK::PARTICIPANT_ID())
	{
		uVar0 = 4;
		func_41(&uVar0);
		func_42(&uVar0);
	}
	if (Global_3407872->f_226 == 2)
	{
		func_43(-1, &(((Global_3407872->f_227[0 /*2270*/])->f_2056[0 /*26*/])->f_17), (Global_3407872->f_227[0 /*2270*/])->f_1621[0 /*3*/], &(((Global_3407872->f_227[0 /*2270*/])->f_2056[0 /*26*/])->f_16), &(Local_39.f_392));
	}
	else
	{
		iVar5 = 0;
		while (iVar5 < 4)
		{
			func_43(iVar5, &(((Global_3407872->f_227[0 /*2270*/])->f_2056[iVar5 /*26*/])->f_17), (Global_3407872->f_227[0 /*2270*/])->f_1621[iVar5 /*3*/], &(((Global_3407872->f_227[0 /*2270*/])->f_2056[iVar5 /*26*/])->f_16), &(Local_39.f_392));
			iVar5++;
		}
	}
}

bool func_23()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (!func_25())
	{
		return true;
	}
	if (!aggregate_func_9519())
	{
		return true;
	}
	bVar0 = aggregate_func_4497(255);
	bVar1 = ENTITY::IS_ENTITY_DEAD(Global_35);
	bVar2 = Global_1275329->f_29.f_3 == 2;
	if ((!bVar0 && !bVar1) && bVar2)
	{
		return true;
	}
	return false;
}

bool func_24()
{
	func_45();
	switch (Global_3407872->f_225)
	{
		case 1:
			return func_46();
		default:
			break;
	}
	return true;
	return false;
}

bool func_25()
{
	return (Global_3407872->f_226 == 3 || Global_3407872->f_226 == 2);
}

void func_27(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(&(Global_1956121->f_1), 5);
	Global_1048584 = 0;
	STREAMING::CLEAR_FOCUS();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_47(iParam0))
		{
			NETWORK::_0x007FF852DCF49DA4(256);
			NETWORK::_0x4B05B97BA46F419D(1);
			NETWORK::_0x6C7E04E9DE451789();
		}
	}
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	if (CAM::DOES_CAM_EXIST(iParam0->f_1478))
	{
		CAM::DESTROY_CAM(iParam0->f_1478, false);
	}
	if (aggregate_func_4224(&(iParam0->f_1483)))
	{
		func_49(&(iParam0->f_1483));
	}
	func_50(&(iParam0->f_1483));
	func_51(iParam0, iParam1);
}

void func_28()
{
	struct<228> Var0;

	Var0 = 32;
	Var0.f_227 = 1;
	Var0.f_227.f_1.f_24 = 4;
	Var0.f_227.f_1.f_24.f_1.f_11 = 2;
	Var0.f_227.f_1.f_24.f_1.f_11.f_1.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_11 = 2;
	Var0.f_227.f_1.f_24.f_1.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_11 = 2;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_80.f_11 = 2;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_345 = 20;
	Var0.f_227.f_1.f_345.f_1 = -1;
	Var0.f_227.f_1.f_345.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_926 = 20;
	Var0.f_227.f_1.f_926.f_1 = -1;
	Var0.f_227.f_1.f_926.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227 = 10;
	Var0.f_227.f_1.f_1227.f_1 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378 = 10;
	Var0.f_227.f_1.f_1378.f_1 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1529 = 1;
	Var0.f_227.f_1.f_1529.f_1 = -1;
	Var0.f_227.f_1.f_1529.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1529.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545 = 5;
	Var0.f_227.f_1.f_1545.f_1 = -1;
	Var0.f_227.f_1.f_1545.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15 = -1;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1621 = 8;
	Var0.f_227.f_1.f_1647 = 2;
	Var0.f_227.f_1.f_1651 = 4;
	Var0.f_227.f_1.f_1668 = 20;
	Var0.f_227.f_1.f_1829 = 20;
	Var0.f_227.f_1.f_1910 = 10;
	Var0.f_227.f_1.f_1951 = 1;
	Var0.f_227.f_1.f_1956 = 10;
	Var0.f_227.f_1.f_1997 = 5;
	Var0.f_227.f_1.f_2018 = 3;
	Var0.f_227.f_1.f_2043 = 3;
	Var0.f_227.f_1.f_2056 = 8;
	Var0.f_227.f_1.f_2056.f_1.f_21 = 3;
	Var0.f_227.f_1.f_2056.f_1.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2056.f_1.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2056.f_1.f_26.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2056.f_1.f_26.f_26.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2056.f_1.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2056.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2056.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	MISC::_COPY_MEMORY(Global_3407872, &Var0, 2500);
}

void func_32(int iParam0)
{
	struct<8> Var0;
	int iVar33;

	Var0.f_4 = -1;
	Var0.f_4.f_1 = -1;
	Var0.f_4.f_2 = -1;
	Var0.f_7 = 4;
	Var0.f_7.f_1 = 255;
	Var0.f_7.f_1.f_2 = -1;
	Var0.f_7.f_1.f_3 = -1;
	Var0.f_7.f_1.f_4 = -1;
	Var0.f_7.f_1.f_5 = 255;
	Var0.f_7.f_1.f_5.f_2 = -1;
	Var0.f_7.f_1.f_5.f_3 = -1;
	Var0.f_7.f_1.f_5.f_4 = -1;
	Var0.f_7.f_1.f_5.f_5 = 255;
	Var0.f_7.f_1.f_5.f_5.f_2 = -1;
	Var0.f_7.f_1.f_5.f_5.f_3 = -1;
	Var0.f_7.f_1.f_5.f_5.f_4 = -1;
	Var0.f_7.f_1.f_5.f_5.f_5 = 255;
	Var0.f_7.f_1.f_5.f_5.f_5.f_2 = -1;
	Var0.f_7.f_1.f_5.f_5.f_5.f_3 = -1;
	Var0.f_7.f_1.f_5.f_5.f_5.f_4 = -1;
	MISC::_COPY_MEMORY(iParam0, &Var0, 33);
	iParam0->f_28 = 255;
	iVar33 = 0;
	while (iVar33 < 4)
	{
		iParam0->f_7[iVar33 /*5*/] = 255;
		iVar33++;
	}
}

void func_33(int iParam0)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_2 = -1;
	Var0.f_9 = -1;
	Var0.f_9.f_1 = -1;
	Var0.f_9.f_2 = -1;
	MISC::_COPY_MEMORY(iParam0, &Var0, 12);
}

int func_36()
{
	var uVar0;
	bool bVar33;
	bool bVar34;
	int iVar35;
	int iVar36;

	uVar0 = 32;
	bVar33 = func_56(Local_39.f_2[0 /*33*/], 0, &Local_594, &uVar0, Global_3407872->f_227[0 /*2270*/], &(Local_39.f_61), &Local_979, 11475, 11483);
	while (iVar35 < 6)
	{
		iVar36 = Local_39.f_1;
		switch (Local_39.f_1)
		{
			case 0:
				Local_39.f_388 = { aggregate_func_9680() };
				Local_39.f_388 = 1;
				Local_39.f_388.f_1 = 0;
				iVar36 = 1;
				break;
			case 1:
				if (!func_58(&(Local_39.f_388.f_2), &bVar34))
				{
					return 0;
				}
				if (bVar34)
				{
					iVar36 = 5;
				}
				else
				{
					iVar36 = 2;
				}
				break;
			case 2:
				if (func_59(Local_39.f_2[0 /*33*/], 0, Local_39.f_388, 2, 0))
				{
					iVar36 = 3;
				}
				break;
			case 3:
				if (func_60(1))
				{
					if (func_59(Local_39.f_2[0 /*33*/], 0, Local_39.f_388, 3, 0))
					{
						iVar36 = 4;
					}
				}
				break;
			case 4:
				if (bVar33)
				{
					iVar36 = 5;
				}
				break;
			case 5:
				return 1;
		}
		if (iVar36 != Local_39.f_1)
		{
			Local_39.f_1 = iVar36;
			iVar35++;
		}
	else
	{
		}
	else
	{
		}
	}
	return 0;
}

bool func_37()
{
	return (aggregate_func_6548() && &Global_1275117 == 1);
}

void func_41(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = *uParam0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (iVar0 <= iVar1)
		{
		}
		else
		{
			if (!NETWORK::NETWORK_IS_HANDLE_VALID((*Global_3407872)[iVar2 /*7*/]))
			{
			}
			else if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION((*Global_3407872)[iVar2 /*7*/]))
			{
			}
			else
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE((*Global_3407872)[iVar2 /*7*/]);
				if (!NETWORK::_0x255A5EF65EDA9167(iVar3))
				{
				}
				else
				{
					(*uParam0)[iVar1] = iVar3;
					iVar1++;
				}
			}
			iVar2++;
		}
	}
}

void func_42(var uParam0)
{
	int iVar0;
	struct<20> Var1;
	int iVar27;

	if (Global_1275117->f_1 == 4)
	{
		return;
	}
	aggregate_func_6994(4);
	iVar0 = *uParam0;
	if (iVar0 > 4)
	{
		return;
	}
	aggregate_func_1575(2, 0, 1);
	Var1.f_5 = 255;
	Var1.f_7 = -1;
	Var1.f_9 = 7;
	Var1.f_19 = -1;
	Var1.f_19.f_1 = -1;
	Var1.f_5 = &Global_1273882->f_154[&Global_1273882];
	Var1.f_4 = 2;
	iVar27 = 0;
	while (iVar27 <= (iVar0 - 1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0[iVar27]) && uParam0[iVar27] != &Global_1273882->f_154[&Global_1273882])
		{
			func_64(&Var1, uParam0[iVar27]);
		}
		iVar27++;
	}
	aggregate_func_9192(0);
}

void func_43(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 3:
			StringCopy(sParam1, "pl_Band", 32);
			break;
		case 2:
			StringCopy(sParam1, "pl_Bar", 32);
			break;
		case 1:
			StringCopy(sParam1, "pl_Cook", 32);
			break;
		case 0:
			StringCopy(sParam1, "pl_Maggie", 32);
			break;
	}
	switch (*uParam4)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 1779.365f, -802.881f, 187.965f };
					*uParam3 = -136.6f;
					break;
				case 1:
					*uParam2 = { 1789.989f, -818.1904f, 188.401f };
					*uParam3 = 28.4f;
					break;
				case 0:
					*uParam2 = { 1789.589f, -812.6585f, 191.5976f };
					*uParam3 = -176.6f;
					break;
				case -1:
					*uParam2 = { 1787.426f, -809.093f, 190.695f };
					*uParam3 = -108.9f;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { -1086.47f, 694.842f, 79.6002f };
					*uParam3 = 23.5f;
					break;
				case 1:
					*uParam2 = { -1091.248f, 712.8531f, 80.0358f };
					*uParam3 = -171.5f;
					break;
				case 0:
					*uParam2 = { -1092.755f, 707.5154f, 83.2324f };
					*uParam3 = -16.5f;
					break;
				case -1:
					*uParam2 = { -1091.934f, 703.427f, 82.33f };
					*uParam3 = 51.2f;
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { -2785.119f, -3060.223f, -13.3343f };
					*uParam3 = -27.7f;
					break;
				case 1:
					*uParam2 = { -2774.076f, -3045.214f, -12.8987f };
					*uParam3 = 137.3f;
					break;
				case 0:
					*uParam2 = { -2779.18f, -3047.384f, -9.7021f };
					*uParam3 = -67.7f;
					break;
				case -1:
					*uParam2 = { -2781.852f, -3050.585f, -10.605f };
					*uParam3 = 0f;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 1615.008f, 837.4983f, 120.3081f };
					*uParam3 = -113.2f;
					break;
				case 1:
					*uParam2 = { 1630.838f, 827.6671f, 120.7437f };
					*uParam3 = 51.8f;
					break;
				case 0:
					*uParam2 = { 1628.273f, 832.5851f, 123.9403f };
					*uParam3 = -153.2f;
					break;
				case -1:
					*uParam2 = { 1624.872f, 834.998f, 123.038f };
					*uParam3 = -85.5f;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { -1851.025f, -1738.521f, 84.6213f };
					*uParam3 = 60f;
					break;
				case 1:
					*uParam2 = { -1865.579f, -1726.884f, 85.0569f };
					*uParam3 = -135f;
					break;
				case 0:
					*uParam2 = { -1863.615f, -1732.071f, 88.2535f };
					*uParam3 = 20f;
					break;
				case -1:
					*uParam2 = { -1860.524f, -1734.87f, 87.351f };
					*uParam3 = 87.7f;
					break;
			}
			break;
	}
}

void func_45()
{
	char* sVar0;

	if (iLocal_35 == 4)
	{
		return;
	}
	sVar0 = func_67();
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		aggregate_func_4627(4);
		return;
	}
	switch (iLocal_35)
	{
		case 0:
			aggregate_func_4627(1);
			break;
		case 1:
			AUDIO::PREPARE_MUSIC_EVENT(sVar0);
			aggregate_func_4627(2);
			break;
		case 2:
			if (CAM::IS_SCREEN_FADED_IN())
			{
				aggregate_func_4627(3);
			}
			break;
		case 3:
			AUDIO::TRIGGER_MUSIC_EVENT(sVar0);
			aggregate_func_4627(4);
			break;
	}
}

int func_46()
{
	bool bVar0;
	var uVar1;
	int iVar34;
	int iVar35;

	func_69(&(Local_2196.f_1483), 524288, 1);
	uVar1 = 32;
	if ((Local_433[iLocal_33 /*5*/])->f_2 >= 1)
	{
		bVar0 = func_71(&(Local_39.f_2), 1, &Local_2196, &Local_594, iLocal_33, iLocal_33, &uVar1, &(Local_39.f_61), &Local_979, &(Global_3407872->f_227), 12700, 11483, 0);
	}
	while (iVar34 < 6)
	{
		iVar35 = (Local_433[iLocal_33 /*5*/])->f_2;
		switch ((Local_433[iLocal_33 /*5*/])->f_2)
		{
			case 0:
				if (Local_39.f_1 > 4)
				{
					iVar35 = 5;
				}
				else if (Local_39.f_388.f_2 >= 0 && Local_39.f_388.f_2 < 8)
				{
					if (aggregate_func_6977())
					{
						aggregate_func_7065(1);
						aggregate_func_5070(1);
						aggregate_func_7242(1);
						aggregate_func_7873(1);
						aggregate_func_5123(*((Global_3407872->f_227[0 /*2270*/])->f_1621[Local_39.f_388.f_2 /*3*/]), ((Global_3407872->f_227[0 /*2270*/])->f_2056[Local_39.f_388.f_2 /*26*/])->f_16, 1);
					}
					aggregate_func_1181(&uLocal_36, 1, 0);
					iVar35 = 3;
				}
				break;
			case 3:
				if (aggregate_func_4346(255) != 1 || (aggregate_func_646(&uLocal_36, 1, 0) > 100 && aggregate_func_4346(255) == 1))
				{
					aggregate_func_4241(&(Global_3407872->f_2499), 4);
					iVar35 = 4;
				}
				break;
			case 4:
				if (aggregate_func_4346(255) == 1)
				{
					iVar35 = 1;
				}
				break;
			case 1:
				if ((aggregate_func_4240(Global_3407872->f_2499, 1) && func_81(Local_594[iLocal_33 /*12*/])) && ANIMSCENE::_0x25557E324489393C(Local_2196.f_1483.f_208))
				{
					aggregate_func_4241(&((Local_433[iLocal_33 /*5*/])->f_1), 1);
					iVar35 = 2;
				}
				break;
			case 2:
				if (func_82(Local_594[iLocal_33 /*12*/]))
				{
					if (!aggregate_func_4240(uLocal_34, 1))
					{
						aggregate_func_7769(0, 0);
						aggregate_func_4241(&uLocal_34, 1);
					}
				}
				if (bVar0)
				{
					iVar35 = 5;
				}
				break;
			case 5:
				return 1;
		}
		if (iVar35 != (Local_433[iLocal_33 /*5*/])->f_2)
		{
			(Local_433[iLocal_33 /*5*/])->f_2 = iVar35;
			iVar34++;
		}
	else
	{
		}
	else
	{
		}
	}
	return 0;
}

bool func_47(int* iParam0)
{
	return !aggregate_func_2923(*iParam0, 12);
}

void func_49(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_208))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_208);
	}
}

void func_50(int iParam0)
{
	struct<293> Var0;

	Var0 = 1;
	Var0.f_17 = 14;
	Var0.f_186 = 1097859072;
	Var0.f_187 = 1101004800;
	Var0.f_225 = 4;
	Var0.f_292 = 1000;
	MISC::_COPY_MEMORY(iParam0, &Var0, 293);
}

void func_51(int iParam0, int iParam1)
{
	aggregate_func_7708(iParam0);
	func_33(iParam1);
}

void func_52(int iParam0)
{
	struct<1484> Var0;
	int iVar1776;

	Var0.f_1 = 4;
	Var0.f_6 = -1;
	Var0.f_8 = 255;
	Var0.f_14 = 4;
	Var0.f_14.f_1 = -1;
	Var0.f_14.f_1.f_1 = -1;
	Var0.f_14.f_1.f_1.f_5.f_4 = -1082130432;
	Var0.f_14.f_1.f_1.f_13.f_2 = -1;
	Var0.f_14.f_1.f_1.f_13.f_4 = -2;
	Var0.f_14.f_1.f_21 = -1;
	Var0.f_14.f_1.f_21.f_1 = -1;
	Var0.f_14.f_1.f_21.f_1.f_5.f_4 = -1082130432;
	Var0.f_14.f_1.f_21.f_1.f_13.f_2 = -1;
	Var0.f_14.f_1.f_21.f_1.f_13.f_4 = -2;
	Var0.f_14.f_1.f_21.f_21 = -1;
	Var0.f_14.f_1.f_21.f_21.f_1 = -1;
	Var0.f_14.f_1.f_21.f_21.f_1.f_5.f_4 = -1082130432;
	Var0.f_14.f_1.f_21.f_21.f_1.f_13.f_2 = -1;
	Var0.f_14.f_1.f_21.f_21.f_1.f_13.f_4 = -2;
	Var0.f_14.f_1.f_21.f_21.f_21 = -1;
	Var0.f_14.f_1.f_21.f_21.f_21.f_1 = -1;
	Var0.f_14.f_1.f_21.f_21.f_21.f_1.f_5.f_4 = -1082130432;
	Var0.f_14.f_1.f_21.f_21.f_21.f_1.f_13.f_2 = -1;
	Var0.f_14.f_1.f_21.f_21.f_21.f_1.f_13.f_4 = -2;
	Var0.f_99 = 20;
	Var0.f_99.f_1 = -1;
	Var0.f_99.f_1.f_5.f_4 = -1082130432;
	Var0.f_99.f_1.f_13.f_2 = -1;
	Var0.f_99.f_1.f_13.f_4 = -2;
	Var0.f_99.f_1.f_20 = -1;
	Var0.f_99.f_1.f_20.f_5.f_4 = -1082130432;
	Var0.f_99.f_1.f_20.f_13.f_2 = -1;
	Var0.f_99.f_1.f_20.f_13.f_4 = -2;
	Var0.f_99.f_1.f_20.f_20 = -1;
	Var0.f_99.f_1.f_20.f_20.f_5.f_4 = -1082130432;
	Var0.f_99.f_1.f_20.f_20.f_13.f_2 = -1;
	Var0.f_99.f_1.f_20.f_20.f_13.f_4 = -2;
	Var0.f_99.f_1.f_20.f_20.f_20 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_5.f_4 = -1082130432;
	Var0.f_99.f_1.f_20.f_20.f_20.f_13.f_2 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_13.f_4 = -2;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_5.f_4 = -1082130432;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_13.f_2 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_13.f_4 = -2;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_5.f_4 = -1082130432;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_13.f_2 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_13.f_4 = -2;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_5.f_4 = -1082130432;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_2 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_4 = -2;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_5.f_4 = -1082130432;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_2 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_4 = -2;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_5.f_4 = -1082130432;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_2 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_4 = -2;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_5.f_4 = -1082130432;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_2 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_4 = -2;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_5.f_4 = -1082130432;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_2 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_4 = -2;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_5.f_4 = -1082130432;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_2 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_4 = -2;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_5.f_4 = -1082130432;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_2 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_4 = -2;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_5.f_4 = -1082130432;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_2 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_4 = -2;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_5.f_4 = -1082130432;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_2 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_4 = -2;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_5.f_4 = -1082130432;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_2 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_4 = -2;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_5.f_4 = -1082130432;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_2 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_4 = -2;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_5.f_4 = -1082130432;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_2 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_4 = -2;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_5.f_4 = -1082130432;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_2 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_4 = -2;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_5.f_4 = -1082130432;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_2 = -1;
	Var0.f_99.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_13.f_4 = -2;
	Var0.f_500 = 20;
	Var0.f_500.f_1 = -1;
	Var0.f_500.f_1.f_5.f_4 = -1082130432;
	Var0.f_500.f_1.f_13 = -1;
	Var0.f_500.f_1.f_13.f_5.f_4 = -1082130432;
	Var0.f_500.f_1.f_13.f_13 = -1;
	Var0.f_500.f_1.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_500.f_1.f_13.f_13.f_13 = -1;
	Var0.f_500.f_1.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13 = -1;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_500.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_761 = 10;
	Var0.f_761.f_1 = -1;
	Var0.f_761.f_1.f_5.f_4 = -1082130432;
	Var0.f_761.f_1.f_13 = -1;
	Var0.f_761.f_1.f_13.f_5.f_4 = -1082130432;
	Var0.f_761.f_1.f_13.f_13 = -1;
	Var0.f_761.f_1.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_761.f_1.f_13.f_13.f_13 = -1;
	Var0.f_761.f_1.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_761.f_1.f_13.f_13.f_13.f_13 = -1;
	Var0.f_761.f_1.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_761.f_1.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_761.f_1.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_761.f_1.f_13.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_761.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_761.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_761.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_761.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_761.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_761.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_761.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_892 = 10;
	Var0.f_892.f_1 = -1;
	Var0.f_892.f_1.f_5.f_4 = -1082130432;
	Var0.f_892.f_1.f_13 = -1;
	Var0.f_892.f_1.f_13.f_5.f_4 = -1082130432;
	Var0.f_892.f_1.f_13.f_13 = -1;
	Var0.f_892.f_1.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_892.f_1.f_13.f_13.f_13 = -1;
	Var0.f_892.f_1.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_892.f_1.f_13.f_13.f_13.f_13 = -1;
	Var0.f_892.f_1.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_892.f_1.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_892.f_1.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_892.f_1.f_13.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_892.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_892.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_892.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_892.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_892.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_892.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = -1;
	Var0.f_892.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_1023 = 5;
	Var0.f_1023.f_1 = -1;
	Var0.f_1023.f_1.f_5.f_4 = -1082130432;
	Var0.f_1023.f_1.f_13 = -1;
	Var0.f_1023.f_1.f_13.f_5.f_4 = -1082130432;
	Var0.f_1023.f_1.f_13.f_13 = -1;
	Var0.f_1023.f_1.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_1023.f_1.f_13.f_13.f_13 = -1;
	Var0.f_1023.f_1.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_1023.f_1.f_13.f_13.f_13.f_13 = -1;
	Var0.f_1023.f_1.f_13.f_13.f_13.f_13.f_5.f_4 = -1082130432;
	Var0.f_1089 = 1;
	Var0.f_1089.f_1 = -1;
	Var0.f_1089.f_1.f_5.f_4 = -1082130432;
	Var0.f_1104 = 24;
	Var0.f_1104.f_1 = -1;
	Var0.f_1104.f_1.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_13 = -1;
	Var0.f_1104.f_1.f_15 = -1;
	Var0.f_1104.f_1.f_15.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_15.f_13 = -1;
	Var0.f_1104.f_1.f_15.f_15 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_15.f_15.f_13 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_13 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_13 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_13 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_13 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_13 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_13 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_13 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_13 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_13 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_13 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_13 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_13 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_13 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_13 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_13 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_13 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_13 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_13 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_13 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_13 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_5.f_4 = -1082130432;
	Var0.f_1104.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_13 = -1;
	Var0.f_1480 = -1;
	Var0.f_1483 = 1;
	Var0.f_1483.f_17 = 14;
	Var0.f_1483.f_186 = 1097859072;
	Var0.f_1483.f_187 = 1101004800;
	Var0.f_1483.f_225 = 4;
	Var0.f_1483.f_292 = 1000;
	MISC::_COPY_MEMORY(iParam0, &Var0, 1776);
	iVar1776 = 0;
	while (iVar1776 < 4)
	{
		iParam0->f_1[iVar1776] = -1;
		iVar1776++;
	}
	aggregate_func_8135(0);
	Global_1048584 = 0;
}

int func_55(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return 2;
}

int func_56(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;

	iVar0 = *iParam0;
	while (iVar1 < 8)
	{
		switch (*iParam0)
		{
			case 0:
				if (func_89(iParam0))
				{
					iVar0 = 1;
				}
				break;
			case 1:
				if (func_90(iParam0, iParam1, iParam2, uParam3, uParam4))
				{
					iVar0 = 2;
				}
				break;
			case 2:
				if (func_91(iParam0, iParam1, iParam2, uParam3, uParam4))
				{
					iVar0 = 3;
				}
				break;
			case 3:
				if (func_92(iParam0, uParam4, iParam8))
				{
					iVar0 = 4;
				}
				break;
			case 4:
				if (func_93(iParam0, iParam1, uParam4, uParam5, iParam8))
				{
					iVar0 = 5;
				}
				break;
			case 5:
				if (func_94(iParam0, iParam1, iParam2, uParam4))
				{
					iVar0 = 6;
				}
				break;
			case 6:
				if (func_95(iParam0, iParam1, iParam2, uParam5, uParam6, iParam7))
				{
					iVar0 = 7;
				}
				break;
			case 7:
				if (func_96(iParam0, iParam1, iParam2))
				{
					return 1;
				}
				break;
		}
		if (iVar0 != *iParam0)
		{
			*iParam0 = iVar0;
			iVar1++;
		}
	else
	{
		}
	else
	{
		}
	}
	return 0;
}

bool func_58(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2[8];
	int iVar11;

	iVar11 = 0;
	if (func_25())
	{
		if (Local_39.f_391 != 0)
		{
			if (Global_3407872->f_226 == 2)
			{
				iVar2[0] = 0;
				iVar1 = 1;
			}
			else
			{
				iVar11 = 0;
				while (iVar11 <= 7)
				{
					if (MISC::IS_BIT_SET(Local_39.f_391, iVar11))
					{
						iVar2[iVar1] = iVar11;
						iVar1++;
					}
					iVar11++;
				}
			}
		}
		else
		{
			iVar1 = 0;
		}
		iVar0 = 8;
	}
	else
	{
		iVar11 = 0;
		while (iVar11 <= 7)
		{
			if (func_97(iVar11, Global_3407872->f_227[0 /*2270*/], Global_3407872->f_2498, Local_39.f_36[iVar11 /*3*/]))
			{
				iVar0++;
				if (!(Local_39.f_36[iVar11 /*3*/])->f_2)
				{
					iVar2[iVar1] = iVar11;
					iVar1++;
				}
			}
			iVar11++;
		}
	}
	if (iVar0 < 8)
	{
		return false;
	}
	if (iVar1 == 0)
	{
		*bParam1 = 1;
		return true;
	}
	*uParam0 = -1;
	if (*uParam0 == -1)
	{
		*uParam0 = &iVar2[MISC::GET_RANDOM_INT_IN_RANGE(0, aggregate_func_5045(iVar1, 0, 7))];
	}
	iVar11 = 0;
	while (iVar11 <= 7)
	{
		if (iVar11 != *uParam0 && VOLUME::_0xF6A8A652A6B186CD(&(Local_39.f_36[iVar11 /*3*/])))
		{
			VOLUME::_0xFDFECC6EE4491E11(&(Local_39.f_36[iVar11 /*3*/]));
		}
		iVar11++;
	}
	return true;
}

bool func_59(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6)
{
	if (iParam1 < 0 || iParam1 >= 8)
	{
		return false;
	}
	if (!aggregate_func_9682(vParam2, 1))
	{
		return false;
	}
	if (func_100(uParam0))
	{
		return false;
	}
	if (func_101(uParam0->f_4, vParam2) && iParam5 == uParam0->f_2)
	{
		return true;
	}
	uParam0->f_4 = { vParam2 };
	uParam0->f_2 = iParam5;
	uParam0->f_3 = iParam6;
	return true;
}

bool func_60(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
		}
		else if (!aggregate_func_4240((Local_433[iVar0 /*5*/])->f_1, iParam0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_64(var uParam0, int iParam1)
{
	var uVar0;

	*uParam0 = 13;
	uParam0->f_1 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x31010318BA9897AC(&uVar0, iParam1);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 26, 16, &uVar0);
}

char* func_67()
{
	if (Global_3407872->f_226 == 1)
	{
		return "MP_BH_MISSION_COMPLETE_MUSIC";
	}
	return "";
}

void func_69(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
	if (((iParam1 == 512 && bParam2) && ANIMSCENE::_0x25557E324489393C(uParam0->f_208)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_208))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_208);
	}
}

void func_70(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			aggregate_func_4241(&(Global_3407872->f_2499), 2);
			break;
		case 7:
			func_106();
			break;
		case 2:
			func_107();
			break;
	}
}

int func_71(var uParam0, int iParam1, int* iParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, bool bParam12)
{
	struct<2> Var0;

	Var0 = 1;
	Var0.f_1.f_8.f_24 = 4;
	Var0.f_1.f_8.f_24.f_1.f_11 = 2;
	Var0.f_1.f_8.f_24.f_1.f_11.f_1.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_11 = 2;
	Var0.f_1.f_8.f_24.f_1.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_11 = 2;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_80.f_11 = 2;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_345 = 20;
	Var0.f_1.f_8.f_345.f_1 = -1;
	Var0.f_1.f_8.f_345.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_926 = 20;
	Var0.f_1.f_8.f_926.f_1 = -1;
	Var0.f_1.f_8.f_926.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227 = 10;
	Var0.f_1.f_8.f_1227.f_1 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378 = 10;
	Var0.f_1.f_8.f_1378.f_1 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1529 = 1;
	Var0.f_1.f_8.f_1529.f_1 = -1;
	Var0.f_1.f_8.f_1529.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1529.f_1.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545 = 5;
	Var0.f_1.f_8.f_1545.f_1 = -1;
	Var0.f_1.f_8.f_1545.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15 = -1;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1621 = 8;
	Var0.f_1.f_8.f_1647 = 2;
	Var0.f_1.f_1659 = 20;
	Var0.f_1.f_2301 = 4;
	Var0.f_1.f_2301.f_1 = 2;
	Var0.f_1.f_2301.f_1.f_3 = 2;
	Var0.f_1.f_2301.f_1.f_3.f_3 = 2;
	Var0.f_1.f_2301.f_1.f_3.f_3.f_3 = 2;
	Var0.f_1.f_2314 = 20;
	func_108(uParam0, iParam1, (*iParam3)[iParam4 /*12*/], uParam6[iParam5], &Var0, uParam9);
	func_109(iParam2);
	if (aggregate_func_9682(((*iParam3)[iParam4 /*12*/])->f_1, 1) && ((*iParam3)[iParam4 /*12*/])->f_1 == 1)
	{
		func_110(uParam0, iParam2, (*iParam3)[iParam4 /*12*/], uParam9);
		return func_111(uParam0, iParam2, iParam3, iParam4, iParam5, uParam7, uParam8, uParam9, iParam10, iParam11, bParam12);
	}
	return 0;
}

bool func_81(var uParam0)
{
	if (!func_116(uParam0))
	{
		return false;
	}
	if (uParam0->f_8 != 3)
	{
		return false;
	}
	return true;
}

bool func_82(var uParam0)
{
	if (!func_116(uParam0))
	{
		return false;
	}
	return uParam0->f_4 == 10;
}

void func_86(int iParam0)
{
	var uVar0;
	struct<551> Var26;

	MISC::_COPY_MEMORY(&uVar0, &(iParam0->f_524), 26);
	Var26 = 15;
	Var26.f_92 = 30;
	Var26.f_124 = 60;
	Var26.f_185 = 2;
	Var26.f_188 = 75;
	Var26.f_188.f_1 = 2;
	Var26.f_188.f_1.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_188.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414 = 32;
	Var26.f_414.f_1 = 2;
	Var26.f_414.f_1.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_414.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var26.f_511 = 4;
	Var26.f_511.f_1 = 2;
	Var26.f_511.f_1.f_3 = 2;
	Var26.f_511.f_1.f_3.f_3 = 2;
	Var26.f_511.f_1.f_3.f_3.f_3 = 2;
	Var26.f_550.f_1 = 24;
	Var26.f_550.f_99 = 3;
	Var26.f_550.f_103 = 3;
	Var26.f_550.f_110 = -1;
	Var26.f_550.f_111 = 4;
	Var26.f_550.f_116 = 4;
	Var26.f_550.f_121 = 75;
	Var26.f_550.f_121.f_1 = -1;
	Var26.f_550.f_121.f_1.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_121.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_272 = 20;
	Var26.f_550.f_272.f_1 = -1;
	Var26.f_550.f_272.f_1.f_1 = -1;
	Var26.f_550.f_272.f_1.f_2 = -1;
	Var26.f_550.f_272.f_1.f_2.f_1 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_1 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var26.f_550.f_272.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var26.f_550.f_313 = 75;
	Var26.f_550.f_389 = 32;
	Var26.f_550.f_422 = 75;
	Var26.f_550.f_498 = 32;
	Var26.f_550.f_531 = 10;
	Var26.f_550.f_582 = 75;
	Var26.f_550.f_733 = 75;
	Var26.f_550.f_884 = 32;
	Var26.f_550.f_949.f_17 = 623901053;
	Var26.f_550.f_949.f_18 = 6;
	Var26.f_550.f_949.f_32 = 1048576000;
	Var26.f_550.f_949.f_33 = 1092616192;
	Var26.f_550.f_949.f_34 = -1082130432;
	Var26.f_550.f_949.f_35 = -1082130432;
	MISC::_COPY_MEMORY(iParam0, &Var26, 1546);
	MISC::_COPY_MEMORY(&(iParam0->f_524), &uVar0, 26);
}

void func_87(int iParam0)
{
	struct<30> Var0;
	int iVar34;

	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = 255;
	Var0.f_29 = -1;
	iVar34 = 0;
	while (iVar34 < 4)
	{
		MISC::_COPY_MEMORY(iParam0->f_1546[iVar34 /*34*/], &Var0, 34);
		iVar34++;
	}
}

void func_88(int iParam0)
{
	struct<30> Var0;
	int iVar34;

	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = 255;
	Var0.f_29 = -1;
	iVar34 = 0;
	while (iVar34 < 20)
	{
		MISC::_COPY_MEMORY(iParam0->f_1683[iVar34 /*34*/], &Var0, 34);
		iVar34++;
	}
}

bool func_89(int iParam0)
{
	if (!aggregate_func_9682(iParam0->f_4, 1))
	{
		return false;
	}
	if (iParam0->f_2 != 3)
	{
		return false;
	}
	aggregate_func_1330(&(iParam0->f_29), 0, 1);
	return true;
}

bool func_90(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = true;
	bVar1 = NETWORK::_0x31DAD2CD6D49546E(SCRIPTS::GET_ID_OF_THIS_THREAD());
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (bVar1)
		{
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
			{
			}
			else
			{
				Jump @62; //curOff = 50
				if (iVar2 != 0)
				{
				}
				else
				{
					if (!func_120(uParam3[iVar2], iParam1, uParam4))
					{
					}
					else if (func_121(iParam0, iParam1, (*iParam2)[iVar2 /*12*/]) && ((*iParam2)[iVar2 /*12*/])->f_4 > 1)
					{
					}
					else
					{
						bVar0 = false;
					}
					else
					{
						iVar2++;
					}
				}
				if (!bVar0)
				{
					return false;
				}
				return true;
			}
		}
	}
}

bool func_91(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (*iParam2 != *uParam3)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_122(iParam0->f_7[iVar0 /*5*/]);
		iVar0++;
	}
	if (!NETWORK::_0x31DAD2CD6D49546E(SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		iParam0->f_7[0 /*5*/] = PLAYER::PLAYER_ID();
		(iParam0->f_7[0 /*5*/])->f_2 = uParam3[0];
		if (func_123(&(iParam0->f_7[0 /*5*/]), (*iParam2)[0 /*12*/], uParam4))
		{
			aggregate_func_4241(&((iParam0->f_7[0 /*5*/])->f_1), 1);
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar1 >= 4)
		{
		}
		else
		{
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
			}
			else if (!func_120(uParam3[iVar0], iParam1, uParam4))
			{
			}
			else if (((*iParam2)[iVar0 /*12*/])->f_4 <= 1 || ((*iParam2)[iVar0 /*12*/])->f_4 > 2)
			{
			}
			else
			{
				iParam0->f_7[iVar1 /*5*/] = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				if (func_123(&(iParam0->f_7[iVar1 /*5*/]), (*iParam2)[iVar0 /*12*/], uParam4))
				{
					aggregate_func_4241(&((iParam0->f_7[iVar1 /*5*/])->f_1), 1);
				}
				iVar1++;
			}
			iVar0++;
		}
	}
	iVar2 = func_124(iParam0->f_4.f_2);
	if (iVar1 > 1)
	{
		func_125(&(iParam0->f_7), *(uParam4->f_1621[iVar2 /*3*/]));
	}
	return true;
}

bool func_92(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (&iParam0->f_7[iVar0 /*5*/] == 255)
		{
		}
		else
		{
			(iParam0->f_7[iVar0 /*5*/])->f_3 = func_126(PLAYER::GET_PLAYER_PED(&(iParam0->f_7[iVar0 /*5*/])), uParam1, &iParam2);
		}
		iVar0++;
	}
	return true;
}

bool func_93(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;
	var uVar1[4];
	int iVar6;

	if (!aggregate_func_4240(uParam2->f_18, 256))
	{
		func_127(iParam0, uParam2, iParam4, &uVar1);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar6 = &uVar1[iVar0];
			if (iVar6 < 0 || iVar6 >= 4)
			{
			}
			else
			{
				(iParam0->f_7[iVar6 /*5*/])->f_4 = iVar0;
			}
			iVar0++;
		}
	}
	if (func_128(uParam2))
	{
		if (!func_130(uParam3, func_129(iParam1)))
		{
			func_131(uParam3, func_129(iParam1), 1, 0, 0);
		}
	}
	return true;
}

bool func_94(int iParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = aggregate_func_4240(uParam3->f_18, 1024);
	iVar1 = 0;
	while (iVar1 < *iParam2)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
		{
		}
		else if (!func_121(iParam0, iParam1, (*iParam2)[iVar1 /*12*/]))
		{
		}
		else if (!bVar0)
		{
			if (aggregate_func_4240(((*iParam2)[iVar1 /*12*/])->f_5, 2))
			{
			}
			else if (((*iParam2)[iVar1 /*12*/])->f_4 < 8)
			{
				return false;
			}
			iVar1++;
			iVar3 = aggregate_func_646(&(iParam0->f_29), 0, 1);
			iVar4 = aggregate_func_4937((uParam3->f_20 - iVar3), 350);
			aggregate_func_1181(&(iParam0->f_31), 0, 1);
			func_133(&(iParam0->f_31), iVar4);
			return true;
		}
	}
}

bool func_95(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	func_134(iParam0, uParam3, iParam1, iParam2, uParam4, &iVar0, &iVar1, &iVar3, &iVar2, &iVar5, &iVar4, &iVar6, &iVar7);
	iVar8 = ((iVar7 + iVar6) + iVar4);
	if (func_130(uParam3, func_129(iParam1)))
	{
		if (!aggregate_func_2923(iParam0->f_1, 1))
		{
			if (iVar3 == (iVar0 - iVar8))
			{
				if (iVar3 > 0)
				{
					func_135(uParam3, func_129(iParam1));
				}
				aggregate_func_2882(&(iParam0->f_1), 1);
			}
		}
		else if (!aggregate_func_2923(iParam0->f_1, 2))
		{
			if (iVar1 == 0)
			{
				iVar9 = func_129(iParam1);
				if (func_130(uParam3, iVar9))
				{
					iVar10 = func_136(uParam3, iVar9);
					if (!aggregate_func_4226((*uParam3)[iVar10 /*36*/]))
					{
						func_138(uParam3, iVar9, -1);
					}
				}
				aggregate_func_2882(&(iParam0->f_1), 2);
			}
		}
	}
	if (!aggregate_func_2923(iParam0->f_1, 4) && aggregate_func_2923(iParam0->f_1, 0))
	{
		aggregate_func_2882(&(iParam0->f_1), 4);
		func_139(iParam5, iParam0, iParam1, 1);
	}
	if (!aggregate_func_2923(iParam0->f_1, 5) && (iVar8 + iVar5) >= iVar0)
	{
		aggregate_func_2882(&(iParam0->f_1), 5);
		func_139(iParam5, iParam0, iParam1, 2);
	}
	if (!aggregate_func_2923(iParam0->f_1, 6) && (iVar8 > 0 || iVar5 >= iVar0))
	{
		aggregate_func_2882(&(iParam0->f_1), 6);
		func_139(iParam5, iParam0, iParam1, 3);
	}
	if (!aggregate_func_2923(iParam0->f_1, 0))
	{
		if (((iVar2 == iVar0 || aggregate_func_2923(iParam0->f_1, 6)) || iVar8 > 0) || iVar5 >= iVar0)
		{
			aggregate_func_2882(&(iParam0->f_1), 0);
			func_139(iParam5, iParam0, iParam1, 0);
		}
	}
	if (iVar0 <= 0)
	{
		return true;
	}
	else if (iVar7 == iVar0)
	{
		return true;
	}
	return false;
}

bool func_96(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
		}
		else if (func_121(iParam0, iParam1, (*iParam2)[iVar0 /*12*/]))
		{
			return false;
		}
		iVar0++;
	}
	func_32(iParam0);
	return true;
}

bool func_97(int iParam0, var uParam1, int iParam2, var uParam3)
{
	vector3 vVar0;
	float fVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<8> Var8;

	if (uParam3->f_2)
	{
		return true;
	}
	if (!MISC::IS_BIT_SET(iParam2, iParam0))
	{
		uParam3->f_2 = 1;
		return true;
	}
	vVar0 = { *(uParam1->f_1621[iParam0 /*3*/]) };
	if (aggregate_func_4268(vVar0))
	{
		uParam3->f_2 = 1;
		return true;
	}
	fVar3 = 25f;
	if (!VOLUME::_0xA4A4359320345B34(uParam3->f_1))
	{
		if (VOLUME::_0x397769175A7DBB30(vVar0, fVar3, 0, 0, 0))
		{
			uParam3->f_2 = 1;
			return true;
		}
		uVar4 = aggregate_func_130(vVar0, 0f, 0f, 0f, fVar3, fVar3, fVar3, -432403087, 0, 8);
		iVar5 = SCRIPTS::COUNT_PLAYER_BITS(&uVar4);
		if (iVar5 > 0)
		{
			iVar7 = 0;
			iVar7 = 0;
			while (iVar7 <= 31)
			{
				if (SCRIPTS::_0x72B2E00C9BAC6789(&uVar4, iVar7))
				{
					iVar6 = PLAYER::INT_TO_PLAYERINDEX(iVar7);
					if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar6) && iVar6 != PLAYER::PLAYER_ID()) && !_NAMESPACE26::_0x81FB74C83C2ED69F(iVar6))
					{
						uParam3->f_2 = 1;
						return true;
					}
				}
				iVar7++;
			}
		}
		Var8 = { vVar0 };
		Var8.f_4 = fVar3;
		Var8.f_6 = MISC::GET_HASH_KEY("net_ugc_end_flow_transition_online");
		Var8.f_7 = iParam0;
		Var8.f_5 = 0;
		uParam3->f_1 = VOLUME::_0x183C0B6CFEFFCAE4(&Var8);
	}
	switch (VOLUME::_0xB33A604345F58202(uParam3->f_1))
	{
		case 3:
			*uParam3 = VOLUME::_0x351D71B8B72B858B(uParam3->f_1);
			return true;
		case 4:
			uParam3->f_1 = 0;
			uParam3->f_2 = 1;
			return true;
		case 0:
			uParam3->f_1 = 0;
			uParam3->f_2 = 1;
			return true;
		default:
			break;
	}
	return false;
}

bool func_100(var uParam0)
{
	if (!aggregate_func_9682(uParam0->f_4, 1))
	{
		return false;
	}
	if (uParam0->f_2 == 3)
	{
		return true;
	}
	if (*uParam0 > 0)
	{
		return true;
	}
	return false;
}

bool func_101(vector3 vParam0, vector3 vParam3)
{
	if (vParam0.x != vParam3.x)
	{
		return false;
	}
	if (vParam0.y != vParam3.y)
	{
		return false;
	}
	if (vParam0.z != vParam3.z)
	{
		return false;
	}
	return true;
}

void func_106()
{
	if (Global_3407872->f_226 != 2)
	{
		return;
	}
	func_143(*((Global_3407872->f_227[0 /*2270*/])->f_2056[0 /*26*/]));
	aggregate_func_3483(1024);
}

void func_107()
{
	if (!func_25())
	{
		return;
	}
	aggregate_func_3483(64);
}

void func_108(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (iParam1 < 0 || iParam1 >= 8)
	{
		return;
	}
	if (iParam3 < 0 || iParam3 >= iParam1)
	{
		return;
	}
	if (func_144(uParam2))
	{
		return;
	}
	if (!func_145(uParam0, uParam2, iParam3, uParam4, uParam5))
	{
		return;
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < iParam1)
	{
		vVar2 = { ((*uParam0)[iVar1 /*33*/])->f_4 };
		if (!aggregate_func_9682(vVar2, 1))
		{
		}
		else if (uParam0[iVar1 /*33*/] > 4)
		{
		}
		else
		{
			switch (vVar2.x)
			{
				case 0:
					if (!func_120(iParam3, iVar1, &(((*uParam4)[vVar2.y /*2338*/])->f_8)))
					{
					}
					else
					{
						Jump @212; //curOff = 182
						if (!func_120(iParam3, iVar1, (*uParam5)[vVar2.y /*2270*/]))
						{
						}
						else if (iVar0 == -1)
						{
							iVar0 = iVar1;
						}
						else if (iVar1 == iParam3 && iVar0 != iParam3)
						{
							iVar0 = iVar1;
						}
					}
					iVar1++;
					if (iVar0 == -1)
					{
					}
					else if (iVar0 >= 0 && iVar0 < *uParam0)
					{
						if (!func_101(uParam2->f_1, ((*uParam0)[iVar0 /*33*/])->f_4))
						{
							uParam2->f_1 = { ((*uParam0)[iVar0 /*33*/])->f_4 };
						}
						if (*uParam2 != iVar0)
						{
							*uParam2 = iVar0;
						}
					}
					default:
						break;
			}
		}
	}
}

void func_109(int* iParam0)
{
	int iVar0;

	iVar0 = aggregate_func_864();
	if (NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		iParam0->f_8 = iVar0;
	}
}

void func_110(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar0 = uParam2->f_8;
	vVar2 = { uParam2->f_1 };
	while (iVar5 < 5)
	{
		switch (uParam2->f_8)
		{
			case 0:
				if (func_147(iParam1, uParam2, uParam3))
				{
					iVar0 = 1;
				}
				break;
			case 1:
				iVar1 = func_148((*uParam0)[*uParam2 /*33*/], uParam2, (*uParam3)[vVar2.y /*2270*/]);
				if (iVar1 == 1)
				{
					iVar0 = 2;
				}
				else if (iVar1 == 2)
				{
					iVar0 = 0;
				}
				break;
			case 2:
				iVar1 = func_149((*uParam0)[*uParam2 /*33*/], iParam1, uParam2, (*uParam3)[vVar2.y /*2270*/]);
				if (iVar1 == 1)
				{
					iVar0 = 3;
				}
				else if (iVar1 == 2)
				{
					iVar0 = 4;
				}
				break;
			case 3:
				if (!func_150((*uParam0)[*uParam2 /*33*/], iParam1, uParam2, (*uParam3)[vVar2.y /*2270*/]))
				{
					iVar0 = 4;
				}
				break;
			case 4:
				func_151(iParam1, uParam2);
				iVar0 = 0;
				break;
		}
		if (iVar0 != uParam2->f_8)
		{
			uParam2->f_8 = iVar0;
			iVar5++;
		}
	else
	{
		}
	else
	{
		}
	}
}

int func_111(var uParam0, int* iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;

	if (iParam3 < 0 || iParam3 >= *iParam2)
	{
		return 0;
	}
	if (iParam4 < 0 || iParam4 >= *iParam2)
	{
		return 0;
	}
	iVar0 = ((*iParam2)[iParam3 /*12*/])->f_4;
	while (iVar1 < 17)
	{
		vVar2 = { ((*iParam2)[iParam3 /*12*/])->f_1 };
		iVar5 = iParam2[iParam3 /*12*/];
		if (aggregate_func_9682(vVar2, 1))
		{
			func_152((*uParam0)[iVar5 /*33*/], iParam1, (*iParam2)[iParam3 /*12*/], (*uParam7)[vVar2.y /*2270*/], iParam9);
		}
		switch (((*iParam2)[iParam3 /*12*/])->f_4)
		{
			case 0:
				if (func_153(uParam0, (*iParam2)[iParam3 /*12*/], iParam1))
				{
					iVar0 = 1;
				}
				break;
			case 1:
				if (func_154((*iParam2)[iParam3 /*12*/], (*uParam7)[vVar2.y /*2270*/], iParam8))
				{
					iVar0 = 16;
				}
				else
				{
					iVar0 = 2;
				}
				break;
			case 2:
				if (func_155((*uParam0)[iVar5 /*33*/], iParam1, (*uParam7)[vVar2.y /*2270*/], iParam8, iParam9))
				{
					iVar0 = 3;
				}
				break;
			case 3:
				if (func_156())
				{
					iVar0 = 4;
				}
				break;
			case 4:
				if (func_157(iParam1, (*iParam2)[iParam3 /*12*/], (*uParam7)[vVar2.y /*2270*/]))
				{
					iVar0 = 6;
				}
				break;
			case 6:
				if (func_158(iParam1, (*iParam2)[iParam3 /*12*/]))
				{
					iVar0 = 5;
				}
				break;
			case 5:
				if (func_159(iParam1, (*iParam2)[iParam3 /*12*/], (*uParam7)[vVar2.y /*2270*/]))
				{
					iVar0 = 7;
				}
				break;
			case 7:
				iVar6 = func_160(iParam1, (*iParam2)[iParam3 /*12*/], (*uParam7)[vVar2.y /*2270*/]);
				if (iVar6 == 1)
				{
					iVar0 = 8;
				}
				else if (iVar6 == 2)
				{
					iVar0 = 11;
				}
				break;
			case 8:
				if (func_161((*uParam0)[iVar5 /*33*/]))
				{
					iVar0 = 9;
				}
				break;
			case 9:
				if (func_162((*uParam0)[iVar5 /*33*/], iParam1, iParam2, iParam3, (*uParam7)[vVar2.y /*2270*/], iParam8, iParam9))
				{
					iVar0 = 10;
				}
				break;
			case 10:
				if (func_163((*uParam0)[iVar5 /*33*/], iParam1, (*iParam2)[iParam3 /*12*/], uParam5, uParam6, (*uParam7)[vVar2.y /*2270*/], iParam8))
				{
					iVar0 = 11;
				}
				break;
			case 11:
				iVar6 = func_164((*uParam0)[iVar5 /*33*/], iParam1, (*iParam2)[iParam3 /*12*/]);
				if (iVar6 == 1)
				{
					iVar0 = 13;
				}
				else if (iVar6 == 2)
				{
					iVar0 = 12;
				}
				break;
			case 12:
				if (func_165((*uParam0)[iVar5 /*33*/], (*uParam7)[vVar2.y /*2270*/]))
				{
					iVar0 = 13;
				}
				break;
			case 13:
				if (func_166(iParam1))
				{
					iVar0 = 14;
				}
				break;
			case 14:
				func_167((*uParam0)[iVar5 /*33*/], iParam1, (*uParam7)[vVar2.y /*2270*/], iParam8, iParam9);
				iVar0 = 15;
				break;
			case 15:
				if (func_168(iParam1, (*iParam2)[iParam3 /*12*/], (*uParam7)[vVar2.y /*2270*/], 0, bParam10))
				{
					iVar0 = 16;
				}
				break;
			case 16:
				if (func_169((*uParam0)[iVar5 /*33*/], iParam1, (*iParam2)[iParam3 /*12*/], (*uParam7)[vVar2.y /*2270*/]))
				{
					return 1;
				}
				break;
		}
		if (iVar0 != ((*iParam2)[iParam3 /*12*/])->f_4)
		{
			((*iParam2)[iParam3 /*12*/])->f_4 = iVar0;
			iVar1++;
		}
	else
	{
		}
	else
	{
		}
	}
	return 0;
}

bool func_116(var uParam0)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (!aggregate_func_9682(uParam0->f_1, 1))
	{
		return false;
	}
	return true;
}

bool func_120(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 < 0 || iParam0 >= 8)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 8)
	{
		return false;
	}
	if (iParam1 == iParam0)
	{
		return true;
	}
	if (MISC::IS_BIT_SET(uParam2->f_19, iParam0))
	{
		return true;
	}
	return false;
}

bool func_121(int iParam0, int iParam1, var uParam2)
{
	if (!func_179(iParam0))
	{
		return false;
	}
	if (!func_116(uParam2))
	{
		return false;
	}
	if (*uParam2 != iParam1)
	{
		return false;
	}
	if (!func_101(iParam0->f_4, uParam2->f_1))
	{
		return false;
	}
	return true;
}

void func_122(int iParam0)
{
	struct<5> Var0;

	Var0 = 255;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	MISC::_COPY_MEMORY(iParam0, &Var0, 5);
	*iParam0 = 255;
}

bool func_123(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_124(uParam1->f_1.f_2);
	if (!func_180(PLAYER::GET_PLAYER_PED(iParam0), *(uParam2->f_1621[iVar0 /*3*/]), BUILTIN::TO_FLOAT(uParam2->f_1)))
	{
		return false;
	}
	return true;
}

int func_124(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 8)
	{
		iParam0 = 0;
	}
	return iParam0;
}

void func_125(var uParam0, vector3 vParam1)
{
	struct<6> Var0;
	int iVar25;
	vector3 vVar26;

	Var0 = 4;
	Var0.f_1.f_1 = 255;
	Var0.f_1.f_1.f_2 = -1;
	Var0.f_1.f_1.f_3 = -1;
	Var0.f_1.f_1.f_4 = -1;
	Var0.f_1.f_6.f_1 = 255;
	Var0.f_1.f_6.f_1.f_2 = -1;
	Var0.f_1.f_6.f_1.f_3 = -1;
	Var0.f_1.f_6.f_1.f_4 = -1;
	Var0.f_1.f_6.f_6.f_1 = 255;
	Var0.f_1.f_6.f_6.f_1.f_2 = -1;
	Var0.f_1.f_6.f_6.f_1.f_3 = -1;
	Var0.f_1.f_6.f_6.f_1.f_4 = -1;
	Var0.f_1.f_6.f_6.f_6.f_1 = 255;
	Var0.f_1.f_6.f_6.f_6.f_1.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_1.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_1.f_4 = -1;
	iVar25 = 0;
	while (iVar25 < *uParam0)
	{
		(Var0[iVar25 /*6*/])->f_1 = { *((*uParam0)[iVar25 /*5*/]) };
		Var0[iVar25 /*6*/] = 99999.9f;
		if (uParam0[iVar25 /*5*/] == 255)
		{
		}
		else
		{
			vVar26 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0[iVar25 /*5*/]), false, false) };
			Var0[iVar25 /*6*/] = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar26, vParam1, true);
		}
		iVar25++;
	}
	NETWORK::_0x7E300B5B86AB1D1A(&Var0, Var0, 6, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	iVar25 = 0;
	while (iVar25 < *uParam0)
	{
		MISC::_COPY_MEMORY((*uParam0)[iVar25 /*5*/], &((Var0[iVar25 /*6*/])->f_1), 5);
		iVar25++;
	}
}

int func_126(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	fVar1 = -1f;
	iVar4 = 0;
	switch (uParam1->f_1646)
	{
		case 1:
			iVar5 = 0;
			while (iVar5 < 2)
			{
				fVar6 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), *((uParam1->f_24[0 /*80*/])->f_11[iVar5 /*34*/]));
				if (fVar6 < fVar1 || fVar1 == -1f)
				{
					fVar6 = fVar1;
					iVar0 = iVar5;
				}
				iVar5++;
			}
			return iVar0;
		case 2:
			iVar5 = 0;
			while (iVar5 < 2)
			{
				if (func_181(*iParam2, &(uParam1->f_1647[iVar5]), -1566524474, &iVar2, &uVar3, &iVar4) != 1)
				{
				}
				else
				{
					iVar7 = MISC::_0xF18AF483DF70BBDE(iVar2);
					if (!VOLUME::_DOES_VOLUME_EXIST(iVar7))
					{
					}
					else if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iVar7, false, 0))
					{
						aggregate_func_2017(iVar7);
						return iVar5;
					}
					else
					{
						aggregate_func_2017(iVar7);
					}
				}
				iVar5++;
			}
			break;
	}
	return 0;
}

void func_127(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	iVar1 = 0;
	while (iVar1 < 4)
	{
		(*uParam3)[iVar1] = -1;
		if (&iParam0->f_7[iVar1 /*5*/] != 255)
		{
			iVar0++;
		}
		iVar1++;
	}
	if (uParam1->f_16 > iVar0)
	{
	}
	iVar2 = uParam1->f_17;
	if (iVar2 <= 0)
	{
		iVar2 = 3;
	}
	iVar2 = aggregate_func_5045(iVar2, 0, iVar0);
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 < iVar2)
	{
		bVar6 = iVar4 >= uParam1->f_16;
		iVar7 = &uParam1->f_24[iVar4 /*80*/];
		iVar8 = -1;
		while (iVar8 == -1)
		{
			switch (iVar7)
			{
				case 0:
					iVar8 = func_183(&(iParam0->f_7), iVar3, bVar6);
					break;
				case 1:
					iVar8 = func_184(&(iParam0->f_7), iVar3, bVar6, iParam0->f_28);
					break;
				case 3:
					iVar8 = func_185(&(iParam0->f_7), iVar3, bVar6);
					break;
				case 2:
					iVar8 = func_186(&(iParam0->f_7), iVar3, bVar6, uParam1->f_24[iVar4 /*80*/]);
					break;
				case 4:
					iVar8 = func_187(&(iParam0->f_7), iVar3, bVar6, uParam1->f_24[iVar4 /*80*/], iParam2);
					break;
				case 5:
					iVar8 = func_188(&(iParam0->f_7), iVar3, bVar6);
					break;
				case 6:
					iVar8 = func_189(&(iParam0->f_7), iVar3, bVar6, uParam1->f_24[iVar4 /*80*/]);
					break;
			}
			if (iVar8 != -1 && &iParam0->f_7[iVar8 /*5*/] != 255)
			{
				(*uParam3)[iVar4] = iVar8;
				iVar5++;
				MISC::SET_BIT(&iVar3, iVar8);
				Jump @393; //curOff = 369
			}
			else if (iVar7 != 0)
			{
				iVar7 = 0;
			}
		else
		{
			}
		else
		{
			}
		}
		iVar4++;
	}
	if (iVar5 < uParam1->f_16)
	{
	}
}

bool func_128(var uParam0)
{
	if (aggregate_func_4240(uParam0->f_18, 65536))
	{
		return true;
	}
	return false;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 4;
		case 2:
			return 5;
		case 3:
			return 6;
		case 4:
			return 7;
		case 5:
			return 8;
		case 6:
			return 9;
		case 7:
			return 10;
		default:
			break;
	}
	return 0;
}

bool func_130(var uParam0, int iParam1)
{
	return func_136(uParam0, iParam1) > -1;
}

void func_131(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_190(uParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	(*uParam0)[iVar0 /*36*/] = iParam1;
	if (bParam2)
	{
		MISC::SET_BIT(&(((*uParam0)[iVar0 /*36*/])->f_1), 6);
	}
	if (bParam3)
	{
		MISC::SET_BIT(&(((*uParam0)[iVar0 /*36*/])->f_1), 7);
	}
	if (bParam4)
	{
		MISC::SET_BIT(&(((*uParam0)[iVar0 /*36*/])->f_1), 8);
	}
}

void func_133(var uParam0, int iParam1)
{
	*uParam0 = NETWORK::GET_TIME_OFFSET(*uParam0, iParam1);
}

void func_134(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar0 = func_130(uParam1, func_129(iParam2));
	bVar1 = NETWORK::_0x31DAD2CD6D49546E(SCRIPTS::GET_ID_OF_THIS_THREAD());
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (bVar1)
		{
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
			{
			}
			else
			{
				Jump @73; //curOff = 61
				if (iVar2 != 0)
				{
				}
				else
				{
					if (!func_121(iParam0, iParam2, (*iParam3)[iVar2 /*12*/]))
					{
					}
					else
					{
						*iParam5++;
						bVar3 = false;
						if (aggregate_func_4240(((*iParam3)[iVar2 /*12*/])->f_5, 2))
						{
							bVar3 = true;
						}
						if (func_82((*iParam3)[iVar2 /*12*/]))
						{
							*iParam6++;
							bVar3 = true;
							if (bVar0 && func_191((*uParam4)[iVar2 /*38*/], func_129(iParam2)))
							{
								*iParam7++;
							}
							if (aggregate_func_4240(((*iParam3)[iVar2 /*12*/])->f_5, 1))
							{
								*iParam10++;
							}
						}
						else if (((*iParam3)[iVar2 /*12*/])->f_4 == 12)
						{
							*iParam9++;
							bVar3 = true;
						}
						else if (func_192((*iParam3)[iVar2 /*12*/]))
						{
							*iParam12++;
							bVar3 = true;
						}
						else if (func_193((*iParam3)[iVar2 /*12*/]))
						{
							*iParam11++;
							bVar3 = true;
						}
						if (bVar3)
						{
							*iParam8++;
						}
					}
					iVar2++;
				}
			}
		}
	}
}

void func_135(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_136(uParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	MISC::SET_BIT(&(((*uParam0)[iVar0 /*36*/])->f_1), 0);
}

int func_136(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam0[iVar0 /*36*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_138(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_136(uParam0, iParam1);
	}
	if (iParam2 == -1)
	{
		return;
	}
	MISC::SET_BIT(&(((*uParam0)[iParam2 /*36*/])->f_1), 4);
}

void func_139(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Stack.Push(iParam1);
	Stack.Push(iParam2);
	Stack.Push(iParam3);
	Call_Loc(iParam0);
}

void func_143(struct<16> Param0)
{
	Global_1275329->f_128 = { Param0 };
}

bool func_144(var uParam0)
{
	if (!func_116(uParam0))
	{
		return false;
	}
	if (uParam0->f_4 == 0)
	{
		return false;
	}
	return true;
}

bool func_145(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	vector3 vVar0;

	if (!aggregate_func_9682(uParam1->f_1, 1))
	{
		return true;
	}
	else if (*uParam1 < 0 || *uParam1 >= *uParam0)
	{
		return true;
	}
	else if (((iParam2 >= 0 && iParam2 < *uParam0) && iParam2 != *uParam1) && aggregate_func_9682(((*uParam0)[iParam2 /*33*/])->f_4, 1))
	{
		return true;
	}
	else if (!func_101(uParam1->f_1, ((*uParam0)[*uParam1 /*33*/])->f_4))
	{
		return true;
	}
	else
	{
		vVar0 = { uParam1->f_1 };
		switch (vVar0.x)
		{
			case 0:
				if (vVar0.y >= *uParam3 || !func_120(iParam2, *uParam1, &(((*uParam3)[vVar0.y /*2338*/])->f_8)))
				{
					return true;
				}
				break;
			case 1:
				if (vVar0.y >= *uParam4 || !func_120(iParam2, *uParam1, (*uParam4)[vVar0.y /*2270*/]))
				{
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_147(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	char cVar7[32];
	int iVar11;
	char cVar12[32];

	if (!func_202(uParam1))
	{
		return false;
	}
	iVar0 = uParam1->f_1.f_1;
	iVar1 = func_124(uParam1->f_1.f_2);
	if (!func_203((*uParam2)[iVar0 /*2270*/], 0))
	{
		return false;
	}
	iParam0->f_1483.f_192 = { *(((*uParam2)[iVar0 /*2270*/])->f_2056[iVar1 /*26*/]) };
	aggregate_func_4254(&(iParam0->f_1483), 8192);
	aggregate_func_4254(&(iParam0->f_1483), 2);
	aggregate_func_4241(&(iParam0->f_1483.f_264), 1);
	aggregate_func_4254(&(iParam0->f_1483), 2);
	aggregate_func_4241(&(iParam0->f_1483.f_263), 4);
	aggregate_func_4241(&(iParam0->f_1483.f_263), 8388608);
	aggregate_func_4241(&(iParam0->f_1483.f_264), 2048);
	aggregate_func_4241(&(iParam0->f_1483.f_264), 1024);
	if (aggregate_func_4595(136))
	{
		aggregate_func_4241(&(iParam0->f_1483.f_263), 2097152);
	}
	if (((*uParam2)[iVar0 /*2270*/])->f_2267 > -1)
	{
		iParam0->f_1483.f_292 = ((*uParam2)[iVar0 /*2270*/])->f_2267;
	}
	if (aggregate_func_4240(((*uParam2)[iVar0 /*2270*/])->f_1650, 64))
	{
		aggregate_func_2882(iParam0, 12);
	}
	if (aggregate_func_4240(((*uParam2)[iVar0 /*2270*/])->f_1650, 2))
	{
		vVar2 = { *(((*uParam2)[iVar0 /*2270*/])->f_1621[iVar1 /*3*/]) };
		fVar5 = (((*uParam2)[iVar0 /*2270*/])->f_2056[iVar1 /*26*/])->f_16;
		func_209(&(iParam0->f_1483), vVar2, 0f, 0f, fVar5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&((((*uParam2)[iVar0 /*2270*/])->f_2056[iVar1 /*26*/])->f_17)))
	{
		func_210(&(iParam0->f_1483), &((((*uParam2)[iVar0 /*2270*/])->f_2056[iVar1 /*26*/])->f_17));
	}
	else
	{
		aggregate_func_4254(&(iParam0->f_1483), 1);
	}
	if (((*uParam2)[iVar0 /*2270*/])->f_2265 >= 0 && ((*uParam2)[iVar0 /*2270*/])->f_2265 < 8)
	{
		iVar6 = ((*uParam2)[iVar0 /*2270*/])->f_2265;
		cVar7 = { (((*uParam2)[iVar0 /*2270*/])->f_2056[iVar6 /*26*/])->f_17 };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar7))
		{
			func_211(&(iParam0->f_1483), &cVar7, 1);
		}
	}
	if (((*uParam2)[iVar0 /*2270*/])->f_2266 >= 0 && ((*uParam2)[iVar0 /*2270*/])->f_2266 < 8)
	{
		iVar11 = ((*uParam2)[iVar0 /*2270*/])->f_2266;
		cVar12 = { (((*uParam2)[iVar0 /*2270*/])->f_2056[iVar11 /*26*/])->f_17 };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar12))
		{
			func_211(&(iParam0->f_1483), &cVar12, 1);
		}
	}
	return true;
}

int func_148(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_212(uParam1))
	{
		return 2;
	}
	if (aggregate_func_4995() != 0 && aggregate_func_7869() != aggregate_func_8714())
	{
		return 2;
	}
	if (uParam0->f_2 == 3 || uParam0->f_2 == 2)
	{
		return 1;
	}
	iVar0 = func_124(uParam1->f_9.f_2);
	if (aggregate_func_1279(PLAYER::PLAYER_PED_ID(), *(uParam2->f_1621[iVar0 /*3*/]), 200f, 1, 1))
	{
		return 1;
	}
	return 0;
}

int func_149(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_216(uParam0, iParam1, uParam2, uParam3);
	if (iVar0 == 2)
	{
		return 2;
	}
	iVar1 = func_124(uParam2->f_9.f_2);
	if (!func_217(&(iParam1->f_1483), uParam3->f_2056[iVar1 /*26*/], 1, 1))
	{
		iVar0 = 0;
	}
	else if (aggregate_func_4240(uParam3->f_1650, 2))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam1->f_1483.f_208, *(uParam3->f_1621[iVar1 /*3*/]), 0f, 0f, (uParam3->f_2056[iVar1 /*26*/])->f_16, 2);
	}
	if (!ANIMSCENE::_0x25557E324489393C(iParam1->f_1483.f_208) || !ANIMSCENE::_0x95531A4A20CCE7BC(iParam1->f_1483.f_208, 0))
	{
		iVar0 = 0;
	}
	else if (ANIMSCENE::_0x6F1F0B17109309DA(iParam1->f_1483.f_208, "P_BINOCULARS01x"))
	{
		STREAMING::REQUEST_MODEL(iLocal_31, false);
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_31))
		{
			iVar0 = 0;
		}
	}
	if (iVar0 == 1)
	{
	}
	return iVar0;
}

bool func_150(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (!func_218(uParam0, uParam2, uParam3))
	{
		return false;
	}
	iVar0 = func_124(uParam2->f_9.f_2);
	if (uParam2->f_4 < 10)
	{
		if (!func_217(&(iParam1->f_1483), uParam3->f_2056[iVar0 /*26*/], 1, 1))
		{
			return false;
		}
	}
	return true;
}

void func_151(int* iParam0, var uParam1)
{
	func_219(iParam0, uParam1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_31);
	func_49(&(iParam0->f_1483));
	func_50(&(iParam0->f_1483));
}

void func_152(var uParam0, int* iParam1, var uParam2, var uParam3, int iParam4)
{
	func_220(iParam1, uParam2, uParam3);
	if (uParam2->f_4 >= 3 && uParam2->f_4 <= 11)
	{
		iParam1->f_1466 = func_221(uParam0, iParam1, uParam2, uParam3, iParam4);
	}
}

bool func_153(var uParam0, var uParam1, int* iParam2)
{
	if (!aggregate_func_9682(uParam1->f_1, 1))
	{
		return false;
	}
	if (*uParam1 == -1)
	{
		return false;
	}
	if (!func_101(((*uParam0)[*uParam1 /*33*/])->f_4, uParam1->f_1))
	{
		return false;
	}
	if (((*uParam0)[*uParam1 /*33*/])->f_2 != 3)
	{
		return false;
	}
	if (func_47(iParam2))
	{
		NETWORK::_0x007FF852DCF49DA4(7);
	}
	aggregate_func_2408();
	if (SCRIPTS::_IS_LOADING_SCREEN_ACTIVE())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	return true;
}

bool func_154(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_124(uParam0->f_1.f_2);
	if (!func_180(PLAYER::PLAYER_PED_ID(), *(uParam1->f_1621[iVar0 /*3*/]), BUILTIN::TO_FLOAT(*uParam1)))
	{
		uParam0->f_6 = 1;
		func_223(iParam2, 4);
		return true;
	}
	return false;
}

bool func_155(int iParam0, int* iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (*iParam0 <= 4)
	{
		return false;
	}
	if (aggregate_func_4240(uParam2->f_18, 256))
	{
		func_127(iParam0, uParam2, iParam4, &(iParam1->f_1));
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar1 = (iParam0->f_7[iVar0 /*5*/])->f_4;
			if (iVar1 < 0 || iVar1 >= 4)
			{
			}
			else
			{
				iParam1->f_1[iVar1] = iVar0;
			}
			iVar0++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar3 = &iParam1->f_1[iVar2];
		if (iVar3 < 0 || iVar3 >= 4)
		{
		}
		else if (&iParam0->f_7[iVar3 /*5*/] == 255)
		{
		}
		else if (&iParam0->f_7[iVar3 /*5*/] != PLAYER::PLAYER_ID())
		{
		}
		else
		{
			iParam1->f_6 = iVar2;
		}
		else
		{
			iVar2++;
		}
	}
	func_223(iParam3, 0);
	return true;
}

bool func_156()
{
	if (!aggregate_func_7867(255))
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
		PLAYER::_0x64FF4BF9AF59E139(PLAYER::PLAYER_ID(), 1);
		aggregate_func_8715(0);
	}
	MISC::SET_BIT(&(Global_1956121->f_1), 5);
	Global_1048584 = 1;
	return true;
}

bool func_157(int* iParam0, var uParam1, var uParam2)
{
	bool bVar0;

	if (aggregate_func_8126() == 0)
	{
		return true;
	}
	if (!aggregate_func_2923(*iParam0, 9))
	{
		bVar0 = true;
		if (aggregate_func_7867(255))
		{
			aggregate_func_2882(iParam0, 8);
		}
		else if (!aggregate_func_9529())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
			{
				func_228(uParam1, 250);
			}
			else if (CAM::IS_SCREEN_FADED_OUT())
			{
				aggregate_func_2882(iParam0, 9);
				if (aggregate_func_2923(*iParam0, 8))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), *(uParam2->f_1621[func_124(iParam0->f_7) /*3*/]), false, false, true, true);
				}
				aggregate_func_4596(128);
				aggregate_func_4596(64);
				aggregate_func_2015(0, 0, 0, 1);
			}
		}
	}
	return false;
}

bool func_158(int* iParam0, var uParam1)
{
	if (aggregate_func_2923(*iParam0, 8))
	{
		return true;
	}
	if (aggregate_func_4367(255) && func_231())
	{
		return true;
	}
	if (aggregate_func_4296(10, 255))
	{
		return false;
	}
	if (func_231())
	{
		return false;
	}
	if (CAM::IS_SCREEN_FADED_OUT() || (aggregate_func_4287(&(iParam0->f_1473)) && aggregate_func_646(&(iParam0->f_1473), 1, 0) > 5000))
	{
		if (func_232())
		{
			aggregate_func_1862();
			aggregate_func_7065(1);
			aggregate_func_5070(1);
			aggregate_func_7242(1);
			aggregate_func_7873(1);
			aggregate_func_4241(&(uParam1->f_5), 16);
		}
		if (aggregate_func_4337(0))
		{
			aggregate_func_5626();
		}
	}
	else if (CAM::IS_SCREEN_FADED_IN())
	{
		if (!aggregate_func_4287(&(iParam0->f_1473)))
		{
			aggregate_func_1181(&(iParam0->f_1473), 1, 0);
		}
		func_228(uParam1, 500);
		if (func_232())
		{
			aggregate_func_7065(1);
			aggregate_func_5070(1);
			aggregate_func_7242(1);
		}
	}
	return false;
}

bool func_159(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (SCRIPTS::_IS_LOADING_SCREEN_ACTIVE())
	{
		return false;
	}
	if (!func_236(uParam1, uParam2))
	{
		return false;
	}
	iVar0 = func_124(uParam1->f_1.f_2);
	if (func_237(iParam0, uParam1, *(uParam2->f_1621[iVar0 /*3*/])))
	{
		aggregate_func_2925(iParam0, 7);
		return true;
	}
	return false;
}

int func_160(int* iParam0, var uParam1, var uParam2)
{
	if (aggregate_func_4240(uParam1->f_5, 4))
	{
		return 2;
	}
	if (SCRIPTS::_IS_LOADING_SCREEN_ACTIVE() || aggregate_func_7889())
	{
		return 0;
	}
	if (aggregate_func_4240(uParam2->f_18, 2) && !aggregate_func_2923(*iParam0, 6))
	{
		return 0;
	}
	if (!func_101(uParam1->f_9, uParam1->f_1))
	{
		return 0;
	}
	if (uParam1->f_8 != 3)
	{
		return 0;
	}
	if (!iParam0->f_1466)
	{
		return 0;
	}
	return 1;
}

bool func_161(var uParam0)
{
	int iVar0;

	if (*uParam0 < 6)
	{
		return false;
	}
	if (!aggregate_func_4287(&(uParam0->f_31)))
	{
		return false;
	}
	iVar0 = aggregate_func_646(&(uParam0->f_31), 0, 1);
	if (iVar0 < 0)
	{
		return false;
	}
	return true;
}

bool func_162(var uParam0, int* iParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar10;
	int iVar11;
	struct<4> Var12;
	char cVar16[32];
	int iVar20;
	int iVar21;
	int iVar22;
	vector3 vVar23[24];
	int iVar26;

	if (!aggregate_func_2923(*iParam1, 2))
	{
		iParam1->f_7 = func_124(((*iParam2)[iParam3 /*12*/])->f_1.f_2);
		iVar0 = 0;
		iVar1 = func_240(iParam1, 0);
		if (iVar1 >= 0 && iVar1 < 4)
		{
			iVar0 = PLAYER::GET_PLAYER_PED(&(uParam0->f_7[iVar1 /*5*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (PED::IS_PED_MALE(iVar0))
			{
				if ((uParam4->f_2265 >= 0 && uParam4->f_2265 < 8) && !MISC::IS_STRING_NULL_OR_EMPTY(&((uParam4->f_2056[uParam4->f_2265 /*26*/])->f_17)))
				{
					iParam1->f_7 = uParam4->f_2265;
				}
			}
			else if ((uParam4->f_2266 >= 0 && uParam4->f_2266 < 8) && !MISC::IS_STRING_NULL_OR_EMPTY(&((uParam4->f_2056[uParam4->f_2266 /*26*/])->f_17)))
			{
				iParam1->f_7 = uParam4->f_2266;
			}
		}
		Var2 = { aggregate_func_8131(&(iParam1->f_1483)) };
		if (((iParam1->f_7 >= 0 && iParam1->f_7 < 8) && !MISC::IS_STRING_NULL_OR_EMPTY(&((uParam4->f_2056[iParam1->f_7 /*26*/])->f_17))) && !MISC::ARE_STRINGS_EQUAL(&Var2, &((uParam4->f_2056[iParam1->f_7 /*26*/])->f_17)))
		{
			func_242(&(iParam1->f_1483), &((uParam4->f_2056[iParam1->f_7 /*26*/])->f_17));
		}
		func_243(&(iParam1->f_1483));
		iVar10 = 0;
		while (iVar10 < 4)
		{
			iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((iParam1->f_14[iVar10 /*21*/])->f_1.f_2);
			Var12 = { func_244(uParam4->f_1651[iVar10 /*4*/], iVar11, iVar10, 0) };
			if (func_245(iParam1, &Var12, (iParam1->f_14[iVar10 /*21*/])->f_1.f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 20)
		{
			if (func_245(iParam1, uParam4->f_1668[iVar10 /*8*/], (iParam1->f_99[iVar10 /*20*/])->f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 20)
		{
			if (func_245(iParam1, uParam4->f_1829[iVar10 /*4*/], (iParam1->f_500[iVar10 /*13*/])->f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 10)
		{
			if (func_245(iParam1, uParam4->f_1910[iVar10 /*4*/], (iParam1->f_761[iVar10 /*13*/])->f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 1)
		{
			if (func_245(iParam1, uParam4->f_1951[iVar10 /*4*/], (iParam1->f_1089[iVar10 /*14*/])->f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 10)
		{
			if (func_245(iParam1, uParam4->f_1956[iVar10 /*4*/], (iParam1->f_892[iVar10 /*13*/])->f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 5)
		{
			if (func_245(iParam1, uParam4->f_1997[iVar10 /*4*/], (iParam1->f_1023[iVar10 /*13*/])->f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 24)
		{
			StringCopy(&cVar16, "", 32);
			if (!func_246(iParam1, uParam4, iVar10, 0, &cVar16, 0, 0))
			{
			}
			if (func_245(iParam1, &cVar16, (iParam1->f_1104[iVar10 /*15*/])->f_2))
			{
			}
			iVar10++;
		}
		func_247(&(iParam1->f_1483));
		func_248(&(iParam1->f_1483), 1);
		if (aggregate_func_4240(uParam0->f_3, 2))
		{
			aggregate_func_4254(&(iParam1->f_1483), 524288);
			aggregate_func_4254(&(iParam1->f_1483), 4);
		}
		if (aggregate_func_4240(uParam4->f_1650, 8) && !aggregate_func_2923(*iParam1, 3))
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam4->f_2056[iParam1->f_7 /*26*/], "cutscene@mpgvo1_int"))
			{
				aggregate_func_2882(iParam1, 3);
			}
		}
		aggregate_func_2882(iParam1, 2);
		iVar20 = 0;
		while (iVar20 < 4)
		{
			iVar21 = func_240(iParam1, iVar20);
			if (iVar21 < 0 || iVar21 >= 4)
			{
			}
			else if (&uParam0->f_7[iVar21 /*5*/] == 255)
			{
			}
			else
			{
				iVar22 = (uParam0->f_7[iVar21 /*5*/])->f_3;
				if (&uParam0->f_7[iVar21 /*5*/] == PLAYER::PLAYER_ID())
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(iParam1->f_1483.f_208, "local_player_variation"))
					{
						ANIMSCENE::SET_ANIM_SCENE_INT(iParam1->f_1483.f_208, "local_player_variation", iVar22 + 1, false);
					}
				}
				StringCopy(&cVar23, "mp_player_", 24);
				StringIntConCat(&cVar23, iVar20 + 1, 24);
				StringConCat(&cVar23, "_variation", 24);
				if (ANIMSCENE::_0x6F1F0B17109309DA(iParam1->f_1483.f_208, &cVar23))
				{
					ANIMSCENE::SET_ANIM_SCENE_INT(iParam1->f_1483.f_208, &cVar23, iVar22 + 1, false);
				}
			}
			iVar20++;
		}
	}
	func_249(*(uParam4->f_2056[iParam1->f_7 /*26*/]), &(iParam1->f_1483));
	if (ANIMSCENE::_0x25557E324489393C(iParam1->f_1483.f_208) && ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam1->f_1483.f_208, 0))
	{
		func_250(iParam1, uParam0, (*iParam2)[iParam3 /*12*/], uParam4, iParam5);
		if (aggregate_func_4240(uParam4->f_1650, 4))
		{
			func_251(0, iParam6);
			aggregate_func_2882(iParam1, 4);
		}
		iVar26 = 0;
		while (iVar26 < 3)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&((uParam4->f_2043[iVar26 /*4*/])->f_1)))
			{
			}
			else if (!ANIMSCENE::_0x6F1F0B17109309DA(iParam1->f_1483.f_208, &((uParam4->f_2043[iVar26 /*4*/])->f_1)))
			{
			}
			else if (!MISC::IS_BIT_SET((uParam4->f_2056[iParam1->f_7 /*26*/])->f_25, iVar26))
			{
			}
			else
			{
				func_252(iParam1, &(uParam4->f_2043[iVar26 /*4*/]), (uParam4->f_2043[iVar26 /*4*/])->f_1, &((uParam4->f_2056[iParam1->f_7 /*26*/])->f_21[iVar26]));
			}
			iVar26++;
		}
		return true;
	}
	return false;
}

bool func_163(var uParam0, int* iParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;
	int iVar17;

	func_253(uParam2, iParam1, uParam5);
	if (func_254(uParam0, iParam1, uParam2, uParam3, uParam4, uParam5, iParam6))
	{
		aggregate_func_4254(&(iParam1->f_1483), 524288);
		aggregate_func_4254(&(iParam1->f_1483), 4);
		if (!aggregate_func_2923(*iParam1, 1))
		{
			aggregate_func_4254(&(iParam1->f_1483), 67108864);
			aggregate_func_2882(iParam1, 1);
		}
	}
	if (func_249(*(uParam5->f_2056[iParam1->f_7 /*26*/]), &(iParam1->f_1483)))
	{
		if (func_47(iParam1))
		{
			func_255(uParam0, 0);
		}
		return true;
	}
	else if (ANIMSCENE::_0x25557E324489393C(iParam1->f_1483.f_208))
	{
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam1->f_1483.f_208, 0))
		{
			iVar0 = BUILTIN::ROUND((ANIMSCENE::_0x49F1D143ADE32656(iParam1->f_1483.f_208) * 1000f));
			iVar1 = BUILTIN::ROUND((ANIMSCENE::_GET_ANIM_SCENE_TIME(iParam1->f_1483.f_208) * 1000f));
			bVar2 = !ENTITY::HAS_ANIM_EVENT_FIRED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((iParam1->f_14[0 /*21*/])->f_1.f_2), MISC::GET_HASH_KEY("NotFinalPlaylist"));
			if (!aggregate_func_4240(uParam2->f_5, 1))
			{
				if (bVar2 && func_256(uParam5, iVar0, iVar1))
				{
					aggregate_func_4241(&(uParam2->f_5), 1);
				}
			}
			iVar3 = 0;
			while (iVar3 < 3)
			{
				if (MISC::IS_BIT_SET(uParam2->f_7, iVar3))
				{
				}
				else if (MISC::_0x375F5870A7B8BEC1(&((uParam5->f_2018[iVar3 /*8*/])->f_1)))
				{
				}
				else if (MISC::_0x375F5870A7B8BEC1(&((uParam5->f_2018[iVar3 /*8*/])->f_4)))
				{
				}
				else if (!ANIMSCENE::_0x6F1F0B17109309DA(iParam1->f_1483.f_208, &((uParam5->f_2018[iVar3 /*8*/])->f_1)))
				{
				}
				else
				{
					iVar4 = func_257(iParam1->f_1483.f_208, &((uParam5->f_2018[iVar3 /*8*/])->f_1), 0);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
					}
					else if (!ENTITY::HAS_ANIM_EVENT_FIRED(iVar4, MISC::GET_HASH_KEY(&((uParam5->f_2018[iVar3 /*8*/])->f_4))))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam2->f_7), iVar3);
					}
				}
				iVar3++;
			}
			if (!aggregate_func_4240(uParam2->f_5, 8))
			{
				if (aggregate_func_2923(uParam0->f_1, 0))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1->f_1483.f_208, "ExportCamera", &Var5, false, 0, 2) && !aggregate_func_4268(Var5.f_6))
					{
						iParam1->f_9 = { Var5.f_6 };
						STREAMING::SET_FOCUS_POS_AND_VEL(iParam1->f_9, 0f, 0f, 0f);
					}
					aggregate_func_4241(&(uParam2->f_5), 8);
				}
			}
			if ((bVar2 && uParam5->f_2269 > -2) && !aggregate_func_2923(*iParam1, 11))
			{
				iVar17 = 1000;
				if (uParam5->f_2269 > -1)
				{
					iVar17 = uParam5->f_2269;
				}
				if (func_258(uParam5, iVar0, iVar1, iVar17 + 100))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_OUT(iVar17);
					}
					aggregate_func_4254(&(iParam1->f_1483), 524288);
					aggregate_func_4254(&(iParam1->f_1483), 4);
					func_223(iParam6, 7);
					aggregate_func_2882(iParam1, 11);
				}
			}
		}
	}
	return false;
}

int func_164(var uParam0, int* iParam1, var uParam2)
{
	bool bVar0;

	bVar0 = true;
	if (!iParam1->f_1466)
	{
		if (!aggregate_func_4287(&(iParam1->f_1469)))
		{
			if (aggregate_func_2923(uParam0->f_1, 0))
			{
				aggregate_func_1181(&(iParam1->f_1469), 0, 0);
			}
		}
		if (CAM::IS_SCREEN_FADED_IN())
		{
		}
		else if (aggregate_func_4287(&(iParam1->f_1469)) && aggregate_func_707(&(iParam1->f_1469), 5000, 0))
		{
		}
		else
		{
			bVar0 = false;
		}
	}
	if (!func_237(iParam1, uParam2, 0f, 0f, 0f))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		aggregate_func_4285(&(iParam1->f_1469));
		aggregate_func_2925(iParam1, 7);
		if (aggregate_func_4240(uParam2->f_5, 4))
		{
			return 2;
		}
		return 1;
	}
	return 0;
}

bool func_165(var uParam0, var uParam1)
{
	if (!aggregate_func_2923(uParam0->f_1, 0))
	{
		return false;
	}
	if (aggregate_func_4240(uParam1->f_18, 1) && !aggregate_func_2923(uParam0->f_1, 6))
	{
		return false;
	}
	return true;
}

bool func_166(int* iParam0)
{
	int iVar0;

	if (!aggregate_func_2923(*iParam0, 8))
	{
		return true;
	}
	aggregate_func_4596(64);
	aggregate_func_4596(128);
	if (aggregate_func_7867(255))
	{
		return true;
	}
	if (!aggregate_func_2923(*iParam0, 10))
	{
		if (iParam0->f_8 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0->f_8))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0->f_8);
		}
		aggregate_func_2882(iParam0, 10);
		aggregate_func_4596(128);
		aggregate_func_4596(64);
		aggregate_func_3914(7, iVar0, 1, 0);
	}
	return false;
}

void func_167(var uParam0, int* iParam1, var uParam2, int iParam3, int iParam4)
{
	func_262(uParam0, iParam1, uParam2, iParam3);
	if (aggregate_func_4240(uParam2->f_1650, 4) && aggregate_func_2923(*iParam1, 4))
	{
		func_251(1, iParam4);
		aggregate_func_2925(iParam1, 4);
	}
}

bool func_168(int* iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 1;
	if (aggregate_func_4240(uParam1->f_5, 16))
	{
		if ((bParam4 || !bParam3) || !CAM::_0x251241CAEC707106())
		{
			aggregate_func_4243(&(uParam1->f_5), 16);
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && func_264(iParam0, uParam2))
			{
				aggregate_func_6950(1, 2);
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (!aggregate_func_2923(*iParam0, 8))
	{
		if (!aggregate_func_4240(uParam2->f_18, 512))
		{
			if (!bParam4 && aggregate_func_646(&(iParam0->f_1471), 0, 0) <= 4000)
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 25, true);
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_169(var uParam0, int* iParam1, int iParam2, var uParam3)
{
	if (*uParam0 < 7)
	{
		return false;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && func_264(iParam1, uParam3))
	{
		aggregate_func_6950(1, 2);
	}
	func_27(iParam1, iParam2);
	return true;
}

bool func_179(int iParam0)
{
	if (!aggregate_func_9682(iParam0->f_4, 1))
	{
		return false;
	}
	return true;
}

bool func_180(int iParam0, vector3 vParam1, float fParam4)
{
	float fVar0;

	if (fParam4 == -1f)
	{
		return true;
	}
	if (fParam4 == 0f)
	{
		fVar0 = 100f;
	}
	else
	{
		fVar0 = fParam4;
	}
	return aggregate_func_1279(iParam0, vParam1, fVar0, 1, 1);
}

int func_181(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Stack.Push(iParam1);
	Stack.Push(iParam2);
	Stack.Push(iParam3);
	Stack.Push(iParam4);
	Stack.Push(iParam5);
	Call_Loc(iParam0);
	return StackVal;
}

int func_183(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_270(iVar0, (*uParam0)[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_184(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_270(iVar0, (*uParam0)[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else if (uParam0[iVar0 /*5*/] != iParam3)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_185(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_270(iVar0, (*uParam0)[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else
		{
			iVar1 = uParam0[iVar0 /*5*/];
			iVar2 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar1);
			if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar2))
			{
			}
			else if (!_NAMESPACE26::_0x0F99F6436528A089(iVar2))
			{
			}
			else if (!_NAMESPACE26::_0x424B17A7DC5C90BC(iVar1))
			{
			}
			else
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_186(var uParam0, int iParam1, bool bParam2, var uParam3)
{
	int iVar0;

	if (uParam3->f_1 < 0 || uParam3->f_1 >= 8)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_270(iVar0, (*uParam0)[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else if (((*uParam0)[iVar0 /*5*/])->f_2 < 0 || ((*uParam0)[iVar0 /*5*/])->f_2 >= 8)
		{
		}
		else if (((*uParam0)[iVar0 /*5*/])->f_2 != uParam3->f_1)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_187(var uParam0, int iParam1, bool bParam2, var uParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_270(iVar0, (*uParam0)[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else
		{
			iVar1 = 0;
			iVar2 = 0;
			iVar3 = 0;
			Stack.Push(uParam3->f_1);
			Stack.Push(1135537454);
			Stack.Push(&iVar1);
			Stack.Push(&iVar2);
			Stack.Push(&iVar3);
			Call_Loc(iParam4);
			if (StackVal != 1)
			{
			}
			else
			{
				iVar4 = uParam0[iVar0 /*5*/];
				iVar5 = PLAYER::GET_PLAYER_PED(iVar4);
				iVar6 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(MISC::_0xEE04C0AFD4EFAF0E(iVar1));
				if (PED::IS_PED_IN_VEHICLE(iVar5, iVar6, true) && func_271(iVar5, iVar6) == uParam3->f_2)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_188(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_270(iVar0, (*uParam0)[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else if (uParam0[iVar0 /*5*/] != PLAYER::PLAYER_ID())
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_189(var uParam0, int iParam1, bool bParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_270(iVar0, (*uParam0)[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else if (((*uParam0)[iVar0 /*5*/])->f_3 != uParam3->f_1)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_190(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam0[iVar0 /*36*/] == iParam1)
		{
		}
		if (uParam0[iVar0 /*36*/] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_191(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		return false;
	}
	return MISC::IS_BIT_SET(*uParam0, 0);
}

bool func_192(var uParam0)
{
	if (!func_116(uParam0))
	{
		return true;
	}
	if (uParam0->f_4 < 15)
	{
		return false;
	}
	else if (uParam0->f_4 == 15)
	{
		return !aggregate_func_4240(uParam0->f_5, 16);
	}
	return true;
}

bool func_193(var uParam0)
{
	if (!func_116(uParam0))
	{
		return false;
	}
	if (uParam0->f_4 <= 14)
	{
		return false;
	}
	return true;
}

bool func_202(var uParam0)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (!aggregate_func_9682(uParam0->f_1, 1))
	{
		return false;
	}
	uParam0->f_9 = { uParam0->f_1 };
	return true;
}

bool func_203(var uParam0, int iParam1)
{
	if (func_274(uParam0))
	{
		return true;
	}
	if (!func_275(uParam0, iParam1))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2056[iParam1 /*26*/]))
	{
		return false;
	}
	return true;
}

void func_209(var uParam0, vector3 vParam1, vector3 vParam4)
{
	if (aggregate_func_4268(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
	uParam0->f_8 = { vParam4 };
	aggregate_func_4241(&(uParam0->f_263), 4194304);
}

void func_210(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_209), sParam1, 64);
}

void func_211(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (func_276(uParam0, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_225[iVar0 /*9*/]))
		{
			if (!func_277(uParam0, sParam1) || aggregate_func_4250(uParam0, 8388608))
			{
				StringCopy(uParam0->f_225[iVar0 /*9*/], sParam1, 64);
				if (!bParam2)
				{
					if (ANIMSCENE::_0x25557E324489393C(uParam0->f_208) && ANIMSCENE::_0x477122B8D05E7968(uParam0->f_208, 1, 0))
					{
						if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_208, sParam1))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_208, sParam1);
						}
					}
					else
					{
						aggregate_func_4254(uParam0, 4194304);
					}
				}
				else
				{
					aggregate_func_4254(uParam0, 4194304);
				}
				return;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
}

bool func_212(var uParam0)
{
	if (!func_144(uParam0))
	{
		return false;
	}
	return !func_101(uParam0->f_1, uParam0->f_9);
}

int func_216(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (func_280(uParam0, uParam2, uParam3))
	{
		return 2;
	}
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (!func_281(iVar1, 966820754, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((iParam1->f_14[iVar1 /*21*/])->f_1.f_1), (uParam3->f_24[iVar1 /*80*/])->f_11[iVar2 /*34*/], &((iParam1->f_14[iVar1 /*21*/])->f_1.f_18), 1))
			{
				iVar0 = 0;
			}
			if (!func_281(iVar1, 966820754, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((iParam1->f_14[iVar1 /*21*/])->f_1.f_1), &(((uParam3->f_24[iVar1 /*80*/])->f_11[iVar2 /*34*/])->f_13), &((iParam1->f_14[iVar1 /*21*/])->f_1.f_19), 0))
			{
				iVar0 = 0;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (!func_281(iVar1, 1627542854, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((iParam1->f_99[iVar1 /*20*/])->f_1), &((uParam3->f_345[iVar1 /*29*/])->f_3), &((iParam1->f_99[iVar1 /*20*/])->f_18), 0))
		{
			iVar0 = 0;
		}
		bVar3 = (iVar0 == 1 && aggregate_func_1533((uParam3->f_345[iVar1 /*29*/])->f_3, (uParam3->f_345[iVar1 /*29*/])->f_16, 0.5f, 1));
		if (!func_281(iVar1, 1627542854, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((iParam1->f_99[iVar1 /*20*/])->f_1), &((uParam3->f_345[iVar1 /*29*/])->f_16), &((iParam1->f_99[iVar1 /*20*/])->f_19), bVar3))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_217(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	struct<8> Var7;
	int iVar15;
	bool bVar16;
	int iVar17;
	struct<8> Var18;

	if (bParam3)
	{
		uParam0->f_274++;
		if (uParam0->f_274 < 10)
		{
			return (aggregate_func_4250(uParam0, 256) && !aggregate_func_4250(uParam0, 4194304));
		}
		uParam0->f_274 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	func_283(uParam0, sParam1);
	if (!aggregate_func_4250(uParam0, 64))
	{
		if (!aggregate_func_4268(aggregate_func_7120(uParam0)))
		{
			aggregate_func_4254(uParam0, 64);
		}
		else if (func_285(uParam0, &vVar0, &vVar3))
		{
			uParam0->f_5 = { vVar0 };
			uParam0->f_8 = { vVar3 };
		}
		return false;
	}
	fVar6 = aggregate_func_1501(Global_35, aggregate_func_7120(uParam0), 1);
	if (aggregate_func_4250(uParam0, 128) || aggregate_func_4250(uParam0, 256))
	{
		if ((fVar6 >= aggregate_func_4360(uParam0) && !bParam2) || !ANIMSCENE::_0x25557E324489393C(uParam0->f_208))
		{
			func_288(uParam0);
			if (ANIMSCENE::_0x25557E324489393C(uParam0->f_208))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_208);
			}
			func_289(uParam0);
			func_69(uParam0, 128, 1);
			func_69(uParam0, 256, 1);
			func_69(uParam0, 4096, 1);
			func_69(uParam0, 32768, 1);
			func_69(uParam0, 16777216, 1);
		}
	}
	else if (fVar6 <= aggregate_func_4360(uParam0) || bParam2)
	{
		if (!aggregate_func_4250(uParam0, 128))
		{
			if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_208))
			{
				if (aggregate_func_4360(uParam0) >= aggregate_func_4360(uParam0))
				{
				}
				Var7 = { aggregate_func_8131(uParam0) };
				if (!aggregate_func_4250(uParam0, 1) && MISC::IS_STRING_NULL_OR_EMPTY(&Var7))
				{
					func_292(uParam0);
					Var7 = { aggregate_func_8131(uParam0) };
				}
				iVar15 = 256;
				if (!aggregate_func_4250(uParam0, 1))
				{
					iVar15 |= 2048;
				}
				if (aggregate_func_4250(uParam0, 2))
				{
					iVar15 |= 16384;
				}
				uParam0->f_208 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_192), iVar15, &Var7, false, true);
				func_293(uParam0, 0, 0, 0, 0);
				aggregate_func_4254(uParam0, 128);
			}
		}
	}
	if (aggregate_func_4250(uParam0, 128))
	{
		if (aggregate_func_4250(uParam0, 256) && !aggregate_func_4250(uParam0, 4194304))
		{
			return true;
		}
		func_294(uParam0);
		if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_208, 1, 0))
		{
			bVar16 = true;
			Var18 = { func_295(uParam0) };
			iVar17 = 0;
			while (iVar17 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_225[iVar17 /*9*/]))
				{
					if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_225[iVar17 /*9*/], &Var18))
					{
						if (!(uParam0->f_225[iVar17 /*9*/])->f_8)
						{
							(uParam0->f_225[iVar17 /*9*/])->f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_208, uParam0->f_225[iVar17 /*9*/]);
							bVar16 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_208, uParam0->f_225[iVar17 /*9*/]))
						{
							bVar16 = false;
						}
					}
				}
				iVar17++;
			}
			if (!aggregate_func_4250(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_208, &Var18))
				{
					if (!aggregate_func_4250(uParam0, 16777216))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_208, &Var18);
						aggregate_func_4254(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_208, &Var18))
					{
						bVar16 = false;
					}
				}
			}
			if (!bVar16)
			{
				return false;
			}
			aggregate_func_4254(uParam0, 256);
			func_69(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

bool func_218(var uParam0, var uParam1, var uParam2)
{
	if (func_280(uParam0, uParam1, uParam2))
	{
		return false;
	}
	return true;
}

void func_219(int* iParam0, var uParam1)
{
	int iVar0;

	TASK::_0x4F57397388E1DFF8();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_296(iVar0, 966820754, &((iParam0->f_14[iVar0 /*21*/])->f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_296(iVar0, 1627542854, iParam0->f_99[iVar0 /*20*/]);
		iVar0++;
	}
	uParam1->f_9 = { aggregate_func_9680() };
}

void func_220(int* iParam0, var uParam1, var uParam2)
{
	func_297(iParam0, uParam1, uParam2);
	func_298(iParam0, uParam1, uParam2);
	POPULATION::_0xF45E46DEECF7DF6E(4224, 0, 0, -1, -1);
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && CAM::IS_SCREEN_FADED_OUT())
	{
		aggregate_func_4996(0);
	}
	if (func_300(uParam1) || func_82(uParam1))
	{
		if (UIAPPS::_IS_APP_RUNNING(1433015236) || UIAPPS::_IS_APP_ACTIVE(1433015236))
		{
			UIAPPS::_CLOSE_APP_BY_HASH(1433015236);
		}
		if (UIAPPS::_IS_APP_RUNNING(29649618) || UIAPPS::_IS_APP_ACTIVE(29649618))
		{
			UIAPPS::_CLOSE_APP_BY_HASH(29649618);
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MAP_POI"), false);
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_PAUSE"), false);
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), false);
	}
	if (uParam1->f_4 != 0)
	{
		_NAMESPACE79::_0xB3E8841F6BDAF83E();
	}
}

bool func_221(var uParam0, int* iParam1, var uParam2, var uParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	bVar0 = true;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		iVar4 = func_240(iParam1, iVar3);
		if (iVar4 < 0 || iVar4 >= 4)
		{
		}
		else
		{
			if (!func_301(uParam0, uParam0->f_7[iVar4 /*5*/], iParam1, uParam2, iVar3, iVar3, 966820754, iParam1->f_14[iVar3 /*21*/], uParam3, uParam3->f_24[iVar3 /*80*/], iParam4))
			{
				if (bVar0)
				{
					bVar0 = false;
				}
			}
			func_302(&((iParam1->f_14[iVar3 /*21*/])->f_1), &iVar1, &iVar2);
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 20)
	{
		if (!func_303(uParam0, iParam1, uParam2, iVar3, &(uParam3->f_345[iVar3 /*29*/]), 1627542854, iParam1->f_99[iVar3 /*20*/], uParam3, uParam3->f_345[iVar3 /*29*/], uParam3->f_1668[iVar3 /*8*/], iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_302(iParam1->f_99[iVar3 /*20*/], &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 20)
	{
		iVar5 = 0;
		if (!func_304(iParam1, uParam0, uParam2, iVar3, &(uParam3->f_926[iVar3 /*15*/]), -1821507459, iParam1->f_500[iVar3 /*13*/], &iVar5, uParam3, uParam3->f_926[iVar3 /*15*/], &((uParam3->f_926[iVar3 /*15*/])->f_3), &((uParam3->f_926[iVar3 /*15*/])->f_9), uParam3->f_1829[iVar3 /*4*/], iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_302(iParam1->f_500[iVar3 /*13*/], &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 10)
	{
		iVar6 = 0;
		if (!func_304(iParam1, uParam0, uParam2, iVar3, &(uParam3->f_1227[iVar3 /*15*/]), 1135537454, iParam1->f_761[iVar3 /*13*/], &iVar6, uParam3, uParam3->f_1227[iVar3 /*15*/], &((uParam3->f_1227[iVar3 /*15*/])->f_3), &((uParam3->f_1227[iVar3 /*15*/])->f_9), uParam3->f_1910[iVar3 /*4*/], iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_305(uParam0, iParam1->f_761[iVar3 /*13*/], *(uParam3->f_1227[iVar3 /*15*/]));
		func_302(iParam1->f_761[iVar3 /*13*/], &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 1)
	{
		if (!func_304(iParam1, uParam0, uParam2, iVar3, &(uParam3->f_1529[iVar3 /*15*/]), 465509728, iParam1->f_1089[iVar3 /*14*/], &((iParam1->f_1089[iVar3 /*14*/])->f_13), uParam3, uParam3->f_1529[iVar3 /*15*/], &((uParam3->f_1529[iVar3 /*15*/])->f_3), &((uParam3->f_1529[iVar3 /*15*/])->f_9), uParam3->f_1951[iVar3 /*4*/], iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_302(iParam1->f_1089[iVar3 /*14*/], &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 10)
	{
		iVar7 = 0;
		if (!func_304(iParam1, uParam0, uParam2, iVar3, &(uParam3->f_1378[iVar3 /*15*/]), 422112462, iParam1->f_892[iVar3 /*13*/], &iVar7, uParam3, uParam3->f_1378[iVar3 /*15*/], &((uParam3->f_1378[iVar3 /*15*/])->f_3), &((uParam3->f_1378[iVar3 /*15*/])->f_9), uParam3->f_1956[iVar3 /*4*/], iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_302(iParam1->f_892[iVar3 /*13*/], &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar8 = 0;
		if (!func_304(iParam1, uParam0, uParam2, iVar3, &(uParam3->f_1545[iVar3 /*15*/]), -230450704, iParam1->f_1023[iVar3 /*13*/], &iVar8, uParam3, uParam3->f_1545[iVar3 /*15*/], &((uParam3->f_1545[iVar3 /*15*/])->f_3), &((uParam3->f_1545[iVar3 /*15*/])->f_9), uParam3->f_1997[iVar3 /*4*/], iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_302(iParam1->f_892[iVar3 /*13*/], &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 24)
	{
		if (!func_306(iParam1, uParam0, uParam2, iVar3, 0, iParam1->f_1104[iVar3 /*15*/], uParam3, iVar1, iVar2, iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		iVar3++;
	}
	return bVar0;
}

void func_223(int iParam0, int iParam1)
{
	Stack.Push(iParam1);
	Call_Loc(iParam0);
}

void func_228(var uParam0, int iParam1)
{
	if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_OUT(iParam1);
	}
	if (func_300(uParam0))
	{
		aggregate_func_4241(&(uParam0->f_5), 2);
	}
}

bool func_231()
{
	if (func_232() || aggregate_func_4337(0))
	{
		return false;
	}
	return true;
}

bool func_232()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if ((((((PED::_0xB655DB7582AEC805(iVar0) || PED::IS_PED_INJURED(iVar0)) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || PED::_0x3BDFCF25B58B0415(iVar0)) || PED::_0x3AA24CCC0D451379(iVar0)) || PED::IS_PED_FALLING(iVar0)) || PED::_0x9682F850056C9ADE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_236(var uParam0, var uParam1)
{
	if (uParam1->f_2 != -1)
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			func_228(uParam0, uParam1->f_2);
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			return false;
		}
	}
	return true;
}

bool func_237(int* iParam0, var uParam1, vector3 vParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;

	bVar0 = !aggregate_func_4268(vParam2);
	bVar1 = ((bVar0 && !aggregate_func_4268(iParam0->f_9)) || (!bVar0 && aggregate_func_4268(iParam0->f_9)));
	bVar2 = false;
	if (ANIMSCENE::_0x25557E324489393C(Global_1070355->f_27136.f_8.f_8) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_1070355->f_27136.f_8.f_8, 0))
	{
		bVar2 = true;
	}
	if (!aggregate_func_2923(*iParam0, 7))
	{
		if (!bVar1)
		{
			aggregate_func_4285(&(iParam0->f_12));
			if (bVar0)
			{
				if (CAM::IS_SCREEN_FADED_IN() && !bVar2)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), vParam2, true) < 100f)
					{
						bVar3 = true;
					}
					else
					{
						func_228(uParam1, 500);
					}
				}
				else if (CAM::IS_SCREEN_FADED_OUT() || bVar2)
				{
					if (STREAMING::_0xCF45DF50C7775F2A())
					{
						STREAMING::_0x5A8B01199C3E79C3();
					}
					if (STREAMING::_0x513F8AA5BF2F17CF(vParam2, 100f, 5))
					{
						bVar3 = true;
					}
				}
				if (bVar3)
				{
					STREAMING::SET_FOCUS_POS_AND_VEL(vParam2, 0f, 0f, 0f);
					iParam0->f_9 = { vParam2 };
					bVar1 = true;
				}
			}
			else
			{
				if (CAM::IS_SCREEN_FADED_IN() && !bVar2)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), iParam0->f_9, true) < 100f)
					{
						bVar4 = true;
					}
					else
					{
						func_228(uParam1, 500);
					}
				}
				else if (CAM::IS_SCREEN_FADED_OUT() || bVar2)
				{
					if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
					{
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					}
					if (CAM::DOES_CAM_EXIST(iParam0->f_1478))
					{
						CAM::DESTROY_CAM(iParam0->f_1478, false);
					}
					if (STREAMING::_0xCF45DF50C7775F2A())
					{
						STREAMING::_0x5A8B01199C3E79C3();
					}
					vVar5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false) };
					if (STREAMING::_0x513F8AA5BF2F17CF(vVar5, 100f, 5))
					{
						bVar4 = true;
					}
				}
				if (bVar4)
				{
					STREAMING::CLEAR_FOCUS();
					iParam0->f_9 = { 0f, 0f, 0f };
					bVar1 = true;
				}
			}
		}
		if (bVar1)
		{
			if (STREAMING::_0xCF45DF50C7775F2A())
			{
				if (!aggregate_func_4287(&(iParam0->f_12)))
				{
					aggregate_func_1330(&(iParam0->f_12), 0, 0);
				}
				if (STREAMING::_0x0909F71B5C070797() || aggregate_func_707(&(iParam0->f_12), 5000, 0))
				{
					STREAMING::_0x5A8B01199C3E79C3();
					aggregate_func_2882(iParam0, 7);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						return false;
					}
				}
			}
			else
			{
				aggregate_func_2882(iParam0, 7);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					return false;
				}
			}
		}
	}
	return aggregate_func_2923(*iParam0, 7);
}

int func_240(int* iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return -1;
	}
	return &(iParam0->f_1[iParam1]);
}

void func_242(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_208))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_208, 1, 0))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_208, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_225[iVar0 /*9*/]) && MISC::ARE_STRINGS_EQUAL(sParam1, uParam0->f_225[iVar0 /*9*/]))
		{
			Var1 = { uParam0->f_209 };
			*(uParam0->f_225[iVar0 /*9*/]) = { Var1 };
		}
		iVar0++;
	}
	func_210(uParam0, sParam1);
	func_69(uParam0, 2097152, 1);
	aggregate_func_4254(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_208, sParam1, true);
}

void func_243(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		(uParam0->f_17[iVar0 /*12*/])->f_11 = 0;
		iVar0++;
	}
}

struct<4> func_244(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return *sParam0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return Var0;
	}
	StringCopy(&Var0, "mp_player_", 32);
	if (!bParam3)
	{
		if (PED::IS_PED_MALE(iParam1))
		{
			StringConCat(&Var0, "m_", 32);
		}
		else
		{
			StringConCat(&Var0, "f_", 32);
		}
	}
	if (iParam2 >= 0 && iParam2 < 4)
	{
		StringIntConCat(&Var0, iParam2 + 1, 32);
	}
	return Var0;
}

bool func_245(int* iParam0, char* sParam1, int iParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(iParam0->f_1483.f_208, sParam1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (func_313(&(iParam0->f_1483), iParam2, sParam1, 0, ENTITY::GET_ENTITY_MODEL(iParam2), 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	return false;
}

bool func_246(int* iParam0, var uParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	if (iParam2 < 0)
	{
		return false;
	}
	switch (iParam3)
	{
		case 966820754:
			if (!bParam5)
			{
				*sParam4 = { func_244(uParam1->f_1651[iParam2 /*4*/], ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((iParam0->f_14[iParam2 /*21*/])->f_1.f_1), iParam2, bParam6) };
				return true;
			}
			break;
		case 1627542854:
			if (bParam5)
			{
				*sParam4 = { (uParam1->f_1668[iParam2 /*8*/])->f_4 };
				return true;
			}
			else
			{
				*sParam4 = { *(uParam1->f_1668[iParam2 /*8*/]) };
				return true;
			}
			break;
		case 1135537454:
			if (!bParam5)
			{
				*sParam4 = { *(uParam1->f_1910[iParam2 /*4*/]) };
				return true;
			}
			break;
		case 465509728:
			if (!bParam5)
			{
				*sParam4 = { *(uParam1->f_1951[iParam2 /*4*/]) };
				return true;
			}
			break;
		case 422112462:
			if (!bParam5)
			{
				*sParam4 = { *(uParam1->f_1956[iParam2 /*4*/]) };
				return true;
			}
			break;
		case 0:
			if (bParam5)
			{
				return false;
			}
			if ((iParam0->f_1104[iParam2 /*15*/])->f_13 == -1)
			{
				return false;
			}
			if ((iParam0->f_1104[iParam2 /*15*/])->f_14 == 0)
			{
				return false;
			}
			if (func_246(iParam0, uParam1, (iParam0->f_1104[iParam2 /*15*/])->f_13, (iParam0->f_1104[iParam2 /*15*/])->f_14, sParam4, 1, 1))
			{
				return true;
			}
			else if (func_246(iParam0, uParam1, (iParam0->f_1104[iParam2 /*15*/])->f_13, (iParam0->f_1104[iParam2 /*15*/])->f_14, sParam4, 0, 1))
			{
				iVar0 = (iParam0->f_1104[iParam2 /*15*/])->f_1;
				if (aggregate_func_1156(iVar0))
				{
					StringConCat(sParam4, "_horse", 32);
					return true;
				}
			}
			break;
	}
	return false;
}

void func_247(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_208))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_208, 1, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_17[iVar0 /*12*/])) || aggregate_func_4250(uParam0->f_17[iVar0 /*12*/], 2))
		{
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_208, &((uParam0->f_17[iVar0 /*12*/])->f_1)))
			{
				aggregate_func_4254(uParam0->f_17[iVar0 /*12*/], 1);
			}
		}
		iVar0++;
	}
}

void func_248(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_17[iVar0 /*12*/])) || aggregate_func_4250(uParam0->f_17[iVar0 /*12*/], 2))
		{
			if (aggregate_func_4250(uParam0->f_17[iVar0 /*12*/], 1) || ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_208, &((uParam0->f_17[iVar0 /*12*/])->f_1)))
			{
				func_317(uParam0, &((uParam0->f_17[iVar0 /*12*/])->f_1), &(uParam0->f_17[iVar0 /*12*/]), (uParam0->f_17[iVar0 /*12*/])->f_9);
				if (bParam1 && ENTITY::IS_ENTITY_A_PED(&(uParam0->f_17[iVar0 /*12*/])))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_17[iVar0 /*12*/]));
					if (iVar1 != Global_35 && !aggregate_func_4250(uParam0->f_17[iVar0 /*12*/], 16))
					{
						aggregate_func_1825(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_249(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	int iVar0;

	func_283(uParam16, &uParam0);
	if (aggregate_func_4641(uParam16) != 1)
	{
		func_320(uParam16);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (aggregate_func_4641(uParam16))
	{
		case 1:
			if (ANIMSCENE::_0x25557E324489393C(uParam16->f_208) && ANIMSCENE::_0x477122B8D05E7968(uParam16->f_208, 1, 0))
			{
				if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam16->f_208, 0))
				{
					func_321(uParam16, &uParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam16->f_208))
				{
					func_322(uParam16, 4);
					return false;
				}
				else if (aggregate_func_4250(uParam16, 2))
				{
					Stack.Push(uParam16);
					Call_Loc(uParam16->f_189);
				}
				func_322(uParam16, 3);
			}
			else if (!ANIMSCENE::_0x25557E324489393C(uParam16->f_208))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam16->f_209)) && aggregate_func_4250(uParam16, 134217728))
				{
				}
				else
				{
					func_324(uParam16);
				}
				aggregate_func_4283(&(uParam16->f_1));
				func_322(uParam16, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_294(uParam16);
				if (!aggregate_func_4260(&(uParam16->f_1)))
				{
					aggregate_func_4293(&(uParam16->f_1), 0);
				}
				else if (aggregate_func_4298(&(uParam16->f_1)) >= 60f)
				{
					if (ANIMSCENE::_0x25557E324489393C(uParam16->f_208))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam16->f_208);
					}
					func_322(uParam16, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_0x25557E324489393C(uParam16->f_208) || !ANIMSCENE::_0x477122B8D05E7968(uParam16->f_208, 1, 0))
			{
				if (func_217(uParam16, &uParam0, 1, 1))
				{
					if (!ANIMSCENE::_0x477122B8D05E7968(uParam16->f_208, 1, 0))
					{
						func_322(uParam16, 4);
					}
					else if (!aggregate_func_4268(aggregate_func_7120(uParam16)) && !aggregate_func_1279(Global_35, aggregate_func_7120(uParam16), 100f, 1, 1))
					{
						if (!aggregate_func_4240(uParam16->f_263, 8388608))
						{
							func_330(1);
						}
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), aggregate_func_7120(uParam16), 0f, 1, 1, 1, 0);
					}
				}
				else if (aggregate_func_4298(&(uParam16->f_1)) >= 60f)
				{
					if (ANIMSCENE::_0x25557E324489393C(uParam16->f_208))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam16->f_208);
					}
					func_322(uParam16, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				func_331(1, 0);
				func_321(uParam16, &uParam0);
				func_322(uParam16, 3);
			}
			else if (aggregate_func_4298(&(uParam16->f_1)) >= 60f)
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam16->f_208))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam16->f_208);
				}
				func_322(uParam16, 4);
			}
			break;
		case 3:
			func_332(uParam16);
			if (aggregate_func_4250(uParam16, 2))
			{
				Stack.Push(uParam16);
				Call_Loc(uParam16->f_189);
			}
			if ((ANIMSCENE::_0x25557E324489393C(uParam16->f_208) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam16->f_208, 0)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam16->f_208) || aggregate_func_4250(uParam16, 512)))
			{
				if (!aggregate_func_4250(uParam16, 1024) && func_333(uParam16, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216 /* Float: 1f */);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!aggregate_func_4250(uParam16, 512))
				{
					aggregate_func_4283(&(uParam16->f_1));
					aggregate_func_4254(uParam16, 512);
					func_322(uParam16, 4);
				}
				else if (aggregate_func_4250(uParam16, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			else
			{
				func_320(uParam16);
			}
			if (aggregate_func_4250(uParam16, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_334(uParam16) - func_335(uParam16)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_0x25557E324489393C(uParam16->f_208))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam16->f_208))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (func_336(uParam16, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (!aggregate_func_4250(uParam16, 4))
				{
					if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_335(uParam16) > 5000)
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
			}
			if (func_337(uParam16))
			{
				if (!ANIMSCENE::_0x25557E324489393C(uParam16->f_208))
				{
				}
				func_338(uParam16);
				func_339(uParam16);
				return true;
			}
			else
			{
				if (aggregate_func_4250(uParam16, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_0x4B4038796F0D6566(uParam16->f_208) && !ANIMSCENE::_0xEF324E9550A394D5(uParam16->f_208))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam16->f_208);
						}
						aggregate_func_4283(&(uParam16->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						aggregate_func_4254(uParam16, 512);
						func_69(uParam16, 67108864, 1);
						func_322(uParam16, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!aggregate_func_4250(uParam16, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam16->f_208)) && CAM::IS_SCREEN_FADED_OUT()) && func_335(uParam16) <= 5000) && func_335(uParam16) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(uParam16->f_292);
				}
				if (!aggregate_func_4250(uParam16, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_340(&(uParam16->f_264), 0);
					aggregate_func_4254(uParam16, 536870912);
				}
				if (func_335(uParam16) >= 5000 && func_335(uParam16) <= (func_334(uParam16) - 5000))
				{
					func_341();
				}
			}
			break;
		case 6:
			if (func_337(uParam16))
			{
				func_338(uParam16);
				func_339(uParam16);
				return true;
			}
			break;
		case 4:
			if (aggregate_func_4250(uParam16, 524288))
			{
				ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_0x4B4038796F0D6566(uParam16->f_208))
					{
						aggregate_func_4254(uParam16, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam16->f_208))
				{
					if (!ANIMSCENE::_0x4B4038796F0D6566(uParam16->f_208))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam16->f_208, 1);
						if (_NAMESPACE71::_0xC17F69E1418CD11F(9) != 0)
						{
							_NAMESPACE71::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return false;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam16->f_208))
					{
						return false;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!aggregate_func_4250(uParam16, 4));
					Stack.Push(uParam16);
					Call_Loc(uParam16->f_190);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::_0x25557E324489393C(uParam16->f_208) && ANIMSCENE::_0x4B4038796F0D6566(uParam16->f_208))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam16->f_208, 0);
						}
						func_322(uParam16, 3);
					}
					else if (aggregate_func_4298(&(uParam16->f_1)) >= 30f)
					{
						if (ANIMSCENE::_0x25557E324489393C(uParam16->f_208) && ANIMSCENE::_0x4B4038796F0D6566(uParam16->f_208))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam16->f_208, 0);
						}
						func_322(uParam16, 3);
					}
				}
				if (aggregate_func_4641(uParam16) == 3)
				{
					if (aggregate_func_4250(uParam16, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			func_322(uParam16, 4);
			break;
	}
	return false;
}

void func_250(int* iParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!aggregate_func_2923(*iParam0, 8))
	{
		iVar0 = 8;
		if (aggregate_func_7871(57))
		{
			iVar0 |= 128;
		}
		if (!func_47(iParam0))
		{
			iVar0 |= 4;
			iVar0 |= 16;
		}
		aggregate_func_6950(0, iVar0);
		aggregate_func_4241(&(uParam2->f_5), 16);
		aggregate_func_4895(0);
		aggregate_func_7891();
		MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), 10f, 1);
	}
	aggregate_func_2408();
	if (func_47(iParam0))
	{
		func_255(uParam1, 1);
	}
	aggregate_func_8135(1);
	aggregate_func_1817(0);
	if (!aggregate_func_4240(uParam3->f_18, 128))
	{
		AUDIO::SET_AUDIO_FLAG("EnableCutsceneMusic", true);
	}
	iVar1 = func_124(uParam2->f_1.f_2);
	func_346(*(uParam3->f_1621[iVar1 /*3*/]), 20f, 1);
	func_347(0);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	func_223(iParam4, 1);
}

void func_251(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 150)
	{
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		func_181(iParam1, iVar0, -230450704, &iVar1, &iVar2, &iVar3);
		if (!MISC::_0xBDC6E364C9C78178(iVar1))
		{
		}
		else
		{
			iVar4 = MISC::_0xEE04C0AFD4EFAF0E(iVar1);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar4, bParam0);
			}
		}
		iVar0++;
	}
}

void func_252(int* iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5)
{
	bool bVar0;
	int iVar1;

	switch (iParam1)
	{
		case 0:
			if (fParam5 != 0f)
			{
				bVar0 = true;
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_1483.f_208, &uParam2, bVar0, false);
			break;
		case 1:
			iVar1 = BUILTIN::ROUND(fParam5);
			ANIMSCENE::SET_ANIM_SCENE_INT(iParam0->f_1483.f_208, &uParam2, iVar1, false);
			break;
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_FLOAT(iParam0->f_1483.f_208, &uParam2, fParam5, false, false);
			break;
	}
}

void func_253(var uParam0, int* iParam1, var uParam2)
{
	int iVar0;

	if ((aggregate_func_2923(*iParam1, 3) && ANIMSCENE::_0x25557E324489393C(iParam1->f_1483.f_208)) && ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam1->f_1483.f_208, 0))
	{
		STREAMING::_0xD346248C1DCE0D76(6, 6, 10, 10);
		if (!aggregate_func_2923(*iParam1, 4))
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!MISC::IS_BIT_SET(uParam0->f_7, iVar0))
				{
				}
				else if (!MISC::ARE_STRINGS_EQUAL(&((uParam2->f_2018[iVar0 /*8*/])->f_4), "TriggerMusic"))
				{
				}
				else
				{
					aggregate_func_2882(iParam1, 4);
				}
				iVar0++;
			}
		}
		else
		{
			GRAPHICS::_0x98A7CD5EA379A854();
		}
	}
}

bool func_254(var uParam0, int* iParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;

	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	aggregate_func_4580();
	NETWORK::_0x236905C700FDB54D();
	aggregate_func_292(0, 0, 1);
	CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
	if (func_128(uParam5))
	{
		iVar0 = func_129(*uParam2);
		if (func_130(uParam3, iVar0))
		{
			iVar1 = 0;
			if (NETWORK::_0x31DAD2CD6D49546E(SCRIPTS::GET_ID_OF_THIS_THREAD()))
			{
				iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
			}
			iVar2 = func_136(uParam3, iVar0);
			func_350(uParam4, (*uParam3)[iVar2 /*36*/], 0, &iVar3, &uVar4);
			if (iVar3 < 1)
			{
				if (!MISC::IS_BIT_SET(uParam4[iVar1 /*38*/], 6))
				{
					MISC::SET_BIT((*uParam4)[iVar1 /*38*/], 6);
				}
			}
			else if (MISC::IS_BIT_SET(uParam4[iVar1 /*38*/], 6))
			{
				MISC::CLEAR_BIT((*uParam4)[iVar1 /*38*/], 6);
			}
			if (!func_191((*uParam4)[iVar1 /*38*/], iVar0))
			{
				func_352((*uParam4)[iVar1 /*38*/], aggregate_func_6661("VOTE_SKIP_CONTEXT"), 0, joaat("INPUT_SKIP_CUTSCENE"), 6);
				func_353((*uParam4)[iVar1 /*38*/], iVar0, !aggregate_func_2923(*iParam1, 8));
				MISC::SET_BIT((*uParam4)[iVar1 /*38*/], 7);
			}
			if (aggregate_func_4240(uParam2->f_5, 1) || aggregate_func_2923(*iParam1, 0))
			{
				if (!func_354((*uParam4)[iVar1 /*38*/]))
				{
					func_355((*uParam4)[iVar1 /*38*/]);
				}
				func_356((*uParam4)[iVar1 /*38*/]);
			}
			else if (func_357((*uParam4)[iVar1 /*38*/]) && aggregate_func_2923(uParam0->f_1, 0))
			{
				if (aggregate_func_4226((*uParam3)[iVar2 /*36*/]) && func_358(uParam4, (*uParam3)[iVar2 /*36*/]) == 0)
				{
					aggregate_func_2882(iParam1, 0);
					func_356((*uParam4)[iVar1 /*38*/]);
				}
			}
		}
	}
	if (aggregate_func_2923(*iParam1, 0))
	{
		bVar5 = true;
	}
	else if (aggregate_func_4240(uParam2->f_5, 1) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), iParam1->f_9, true) >= 100f)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
		}
		else if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (aggregate_func_2923(*iParam1, 0))
			{
				uParam2->f_6 = 2;
				func_223(iParam6, 5);
			}
			return true;
		}
	}
	return false;
}

void func_255(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
		}
		NETWORK::_0x4B05B97BA46F419D(0);
		NETWORK::_0x89D803CD48622150(1);
		NETWORK::_0x34BC1E79546BA543(1);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 7, false);
		NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(0, false, 7);
		NETWORK::_0xDC6AD5C046F33AB4(1, 1);
	}
	else if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(uParam0->f_7[iVar0 /*5*/])))
			{
			}
			else
			{
				iVar1 = PLAYER::GET_PLAYER_PED(&(uParam0->f_7[iVar0 /*5*/]));
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, 1, 1, 256);
			}
			iVar0++;
		}
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
		NETWORK::_0x89D803CD48622150(0);
	}
}

bool func_256(var uParam0, int iParam1, int iParam2)
{
	return func_258(uParam0, iParam1, iParam2, 600);
}

int func_257(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	iVar0 = ANIMSCENE::_GET_ANIM_SCENE_PED(iParam0, sParam1, bParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return iVar0;
	}
	iVar0 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iParam0, sParam1, bParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return iVar0;
	}
	iVar0 = ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(iParam0, sParam1, bParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return iVar0;
	}
	return 0;
}

bool func_258(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = aggregate_func_4937(uParam0->f_22, iParam3);
	if ((iParam1 - iParam2) <= iVar0)
	{
		return true;
	}
	return false;
}

void func_262(var uParam0, int* iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_223(iParam3, 2);
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_INJURED(iVar0) && !aggregate_func_2923(*iParam1, 8))
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
		if (aggregate_func_927(iVar0, -1959848946))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, 0, 1);
		}
		iVar1 = iParam1->f_6;
		if (iVar1 >= 0 && iVar1 < 4)
		{
			iVar2 = func_240(iParam1, iVar1);
			if (iVar2 >= 0 && iVar2 < 4)
			{
				iVar3 = (uParam0->f_7[iVar2 /*5*/])->f_3;
				if (iVar3 < 0 || iVar3 > 2)
				{
					iVar3 = 0;
				}
				if (aggregate_func_2923(((uParam2->f_24[iVar1 /*80*/])->f_11[iVar3 /*34*/])->f_13.f_13, 3))
				{
					func_362(((uParam2->f_24[iVar1 /*80*/])->f_11[iVar3 /*34*/])->f_13.f_16);
				}
				else
				{
					if (!aggregate_func_2923(((uParam2->f_24[iVar1 /*80*/])->f_11[iVar3 /*34*/])->f_13.f_13, 1))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(((uParam2->f_24[iVar1 /*80*/])->f_11[iVar3 /*34*/])->f_13.f_14, 1065353216 /* Float: 1f */);
					}
					if (!aggregate_func_2923(((uParam2->f_24[iVar1 /*80*/])->f_11[iVar3 /*34*/])->f_13.f_13, 2))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(((uParam2->f_24[iVar1 /*80*/])->f_11[iVar3 /*34*/])->f_13.f_15, 1f);
					}
				}
				if (aggregate_func_2923(((uParam2->f_24[iVar1 /*80*/])->f_11[iVar3 /*34*/])->f_13.f_13, 0))
				{
					func_363(((uParam2->f_24[iVar1 /*80*/])->f_11[iVar3 /*34*/])->f_13.f_19, ((uParam2->f_24[iVar1 /*80*/])->f_11[iVar3 /*34*/])->f_13.f_20, 1, 1);
				}
			}
		}
	}
	func_364(iParam1);
	aggregate_func_1181(&(iParam1->f_1471), 0, 0);
	aggregate_func_1816(0, 0);
	func_347(1);
	if (!aggregate_func_4240(uParam2->f_18, 128))
	{
		AUDIO::SET_AUDIO_FLAG("EnableCutsceneMusic", false);
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	STREAMING::CLEAR_FOCUS();
	iParam1->f_9 = { 0f, 0f, 0f };
	Global_1048584 = 0;
	aggregate_func_8135(0);
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		if (aggregate_func_4240(uParam0->f_3, 2))
		{
			if (aggregate_func_2923(*iParam1, 8))
			{
				aggregate_func_6144(64);
				aggregate_func_6144(128);
			}
		}
		else if (aggregate_func_4240(uParam2->f_18, 2048))
		{
			func_223(iParam3, 6);
			if (aggregate_func_2923(*iParam1, 8))
			{
				aggregate_func_6144(64);
				aggregate_func_6144(128);
			}
		}
		else
		{
			CAM::DO_SCREEN_FADE_IN(500);
			if (aggregate_func_2923(*iParam1, 8))
			{
				aggregate_func_6144(64);
				aggregate_func_6144(128);
			}
		}
	}
	func_367();
}

bool func_264(int* iParam0, var uParam1)
{
	if (aggregate_func_2923(*iParam0, 8))
	{
		return false;
	}
	if (aggregate_func_4240(uParam1->f_18, 2048))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return false;
		}
	}
	return true;
}

bool func_270(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (*uParam1 == 255)
	{
		return false;
	}
	if (aggregate_func_9426(*uParam1))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(iParam2, iParam0))
	{
		return false;
	}
	if (bParam3)
	{
		if (!aggregate_func_4240(uParam1->f_1, 1))
		{
			return false;
		}
	}
	return true;
}

int func_271(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_274(var uParam0)
{
	if (aggregate_func_4240(uParam0->f_1650, 32))
	{
		return true;
	}
	return false;
}

bool func_275(var uParam0, int iParam1)
{
	if (aggregate_func_4268(*(uParam0->f_1621[iParam1 /*3*/])))
	{
		return false;
	}
	return true;
}

bool func_276(var uParam0, char* sParam1)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_225[iVar0 /*9*/]) && MISC::ARE_STRINGS_EQUAL(uParam0->f_225[iVar0 /*9*/], sParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_277(var uParam0, char* sParam1)
{
	struct<8> Var0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	Var0 = { func_295(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(sParam1, &Var0);
}

bool func_280(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_212(uParam1))
	{
		return true;
	}
	if (uParam0->f_2 == 3 || uParam0->f_2 == 2)
	{
		return false;
	}
	if (uParam1->f_4 > 10)
	{
		return true;
	}
	iVar0 = func_124(uParam1->f_9.f_2);
	if (!aggregate_func_1279(PLAYER::PLAYER_PED_ID(), *(uParam2->f_1621[iVar0 /*3*/]), 300f, 1, 1))
	{
		return true;
	}
	if (aggregate_func_4995() != 0 && aggregate_func_7869() != aggregate_func_8714())
	{
		return true;
	}
	return false;
}

bool func_281(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	char cVar7[64];

	if (uParam3->f_7 != 3)
	{
		return true;
	}
	iVar0 = 1;
	if (!bParam5 && !VOLUME::_DOES_VOLUME_EXIST(*uParam4))
	{
		vVar1 = { 2f, 2f, 2f };
		vVar4 = { *uParam3 };
		StringCopy(&cVar7, "[MC][CS] CoverLoadArea - ", 64);
		StringConCat(&cVar7, " iCSIdx: ", 64);
		StringIntConCat(&cVar7, iParam0, 64);
		*uParam4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar4, 0f, 0f, uParam3->f_3, vVar1, &cVar7);
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam4))
		{
			TASK::_0x2A10538D0A005E81(*uParam4, 1);
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_283(var uParam0, char* sParam1)
{
	int iVar0;

	if (aggregate_func_4250(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_192), {aggregate_func_586("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 16);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_192), {aggregate_func_586("cutscene@", sParam1, 1, 63)}, 16);
	}
	aggregate_func_4254(uParam0, 8192);
}

bool func_285(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	int iVar8;
	struct<4> Var9;

	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = { 0f, 0f, 0f };
	MemCopy(&uVar0, {func_374(uParam0)}, 8);
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_208))
	{
		iVar8 = 0;
		if (aggregate_func_4250(uParam0, 2) && !aggregate_func_4250(uParam0, 67108864))
		{
			iVar8 |= 256;
		}
		uParam0->f_208 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_192), iVar8, &(uParam0->f_209), false, true);
	}
	else if (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_208, 0))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_208, func_375(Global_35), &Var9, false, 0, 2))
		{
			*uParam1 = { Var9 };
			*uParam2 = { Var9.f_3 };
		}
		else
		{
			ANIMSCENE::_0xADF1D53F3B1FE0A7(uParam0->f_208, uParam1, uParam2, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_208);
		return true;
	}
	return false;
}

void func_288(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_208))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_208, 1, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_225[iVar0 /*9*/]) && (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_208, uParam0->f_225[iVar0 /*9*/]) || ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_208, uParam0->f_225[iVar0 /*9*/])))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_208, uParam0->f_225[iVar0 /*9*/]);
		}
		(uParam0->f_225[iVar0 /*9*/])->f_8 = 0;
		iVar0++;
	}
}

void func_289(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (aggregate_func_4250(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			func_376(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
		}
	}
	if (aggregate_func_4250(uParam0, 8))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_4);
		func_69(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_69(uParam0, 16, 1);
}

void func_292(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_377() };
	func_210(uParam0, &Var0);
}

void func_293(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (aggregate_func_4250(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4) && !aggregate_func_4745(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, aggregate_func_4473());
		aggregate_func_4254(uParam0, 8);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_379(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::_0xC1799FAFD2FDF52B(uParam0->f_4, 0, 0, iParam2);
		aggregate_func_4254(uParam0, 16);
	}
}

void func_294(var uParam0)
{
	if ((!aggregate_func_4250(uParam0, 32768) && ANIMSCENE::_0x25557E324489393C(uParam0->f_208)) && ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_208, 0))
	{
		func_247(uParam0);
		func_248(uParam0, 0);
		if (!ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_208, 1))
		{
			if (aggregate_func_4240(uParam0->f_263, 4194304))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_208, uParam0->f_5, uParam0->f_8, 2);
			}
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_208);
		}
		aggregate_func_4254(uParam0, 32768);
	}
}

struct<8> func_295(var uParam0)
{
	struct<8> Var0;

	Var0 = { aggregate_func_8131(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_381() };
	}
	return Var0;
}

void func_296(int iParam0, int iParam1, var uParam2)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam2->f_18))
	{
		VOLUME::_DELETE_VOLUME(uParam2->f_18);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_2))
	{
		AICOVERPOINT::_0x1A7A802B2301EDC0(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam2->f_2));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam2->f_19))
	{
		VOLUME::_DELETE_VOLUME(uParam2->f_19);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_1))
	{
		AICOVERPOINT::_0x1A7A802B2301EDC0(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam2->f_1));
	}
}

void func_297(int* iParam0, var uParam1, var uParam2)
{
	if (aggregate_func_4240(uParam1->f_5, 4))
	{
		return;
	}
	if (!aggregate_func_4240(uParam1->f_5, 2))
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (!func_300(uParam1))
	{
		return;
	}
	if (uParam2->f_3 < 0)
	{
		return;
	}
	if (!aggregate_func_4287(&(iParam0->f_1467)))
	{
		aggregate_func_1330(&(iParam0->f_1467), 1, 0);
	}
	if (uParam2->f_3 == 0 || aggregate_func_646(&(iParam0->f_1467), 1, 0) >= uParam2->f_3)
	{
		aggregate_func_4241(&(uParam1->f_5), 4);
	}
}

void func_298(int* iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;

	if (!func_300(uParam1))
	{
		return;
	}
	if (!aggregate_func_4240(uParam2->f_18, 2))
	{
		return;
	}
	bVar0 = true;
	iVar1 = PLAYER::PLAYER_PED_ID();
	bVar2 = !aggregate_func_4240(uParam2->f_18, 64);
	iVar3 = func_124(uParam1->f_1.f_2);
	if (!aggregate_func_4240(uParam2->f_18, 4))
	{
		aggregate_func_23(iVar1, *(uParam2->f_1621[iVar3 /*3*/]), 0, uParam2->f_4, uParam2->f_5, uParam2->f_6, uParam2->f_7, 1, 0, bVar2, 0);
	}
	if (!aggregate_func_4240(uParam2->f_18, 16))
	{
		fVar4 = (BUILTIN::TO_FLOAT(uParam2->f_8) / 1000f);
		if (func_383(iVar1, *(uParam2->f_1621[iVar3 /*3*/]), &(iParam0->f_1475), uParam2->f_7, fVar4, 0, 0, 0, bVar2))
		{
		}
	}
	if (!aggregate_func_4240(uParam2->f_18, 32))
	{
		if (!aggregate_func_2923(*iParam0, 5))
		{
			WEAPON::_0xFCCC886EDE3C63EC(iVar1, 2, 0);
			TASK::TASK_SWAP_WEAPON(iVar1, 1, 1, 0, 0);
			aggregate_func_2882(iParam0, 5);
		}
	}
	if (!aggregate_func_4240(uParam2->f_18, 8))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		if (CAM::_0xA2B1C7EF759A63CE() < 1f)
		{
			bVar0 = false;
		}
	}
	if (bVar0 && !aggregate_func_2923(*iParam0, 6))
	{
		aggregate_func_2882(iParam0, 6);
	}
}

bool func_300(var uParam0)
{
	if (!func_116(uParam0))
	{
		return false;
	}
	if (uParam0->f_4 <= 1 || uParam0->f_4 >= 10)
	{
		return false;
	}
	return true;
}

bool func_301(var uParam0, var uParam1, int* iParam2, var uParam3, int iParam4, int iParam5, int iParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	struct<5> Var0;
	struct<5> Var5;
	char[] cVar10[8];
	var uVar14;
	var uVar15;
	int iVar18;
	int iVar19;
	int iVar20;

	Var0.f_4 = -1082130432;
	Var5.f_2 = -1;
	Var5.f_4 = -2;
	uParam7->f_1.f_3 = func_384(uParam0, uParam7->f_1.f_1, iParam6, iParam5, iParam4);
	func_385(uParam0, &(uParam7->f_1), uParam9);
	uVar15 = -1;
	while (iVar18 < 15)
	{
		iVar19 = uParam7->f_1.f_10;
		switch (uParam7->f_1.f_10)
		{
			case 0:
				iVar20 = func_386(uParam0, iParam2, iParam4, iParam5, iParam6, &(uParam7->f_1), &uVar14, iParam10);
				if (iVar20 == 1)
				{
					iVar19 = 1;
				}
				else if (iVar20 == 2)
				{
					iVar19 = 14;
				}
				break;
			case 1:
				iVar20 = func_387(iParam2, uParam7, uParam8->f_1651[iParam4 /*4*/]);
				if (iVar20 != 0)
				{
					if (iVar20 == 1)
					{
						aggregate_func_2882(&(uParam7->f_1.f_4), 0);
					}
					iVar19 = 2;
				}
				break;
			case 2:
				func_246(iParam2, uParam8, iParam4, iParam6, &cVar10, 0, 0);
				if (aggregate_func_1861(*uParam1))
				{
					if (func_389(uParam3, iParam2, &(uParam7->f_1), iParam4, iParam6, uParam8, uParam9->f_11[uParam1->f_3 /*34*/], &cVar10, 1) != 0)
					{
						iVar19 = 4;
					}
				}
				break;
			case 4:
				if (uParam3->f_4 >= 7)
				{
					if (!func_390(&(uParam7->f_1)) || func_391(&(uParam7->f_1)))
					{
						iVar19 = 5;
					}
				}
				break;
			case 5:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam7->f_1.f_2) || func_392(&(uParam7->f_1), iParam4, iParam6, 1, &uVar15))
				{
					iVar19 = 6;
				}
				break;
			case 6:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam7->f_1.f_2) || func_393(iParam2, iParam4, iParam6, &(uParam7->f_1), uParam9->f_11[uParam1->f_3 /*34*/], 1))
				{
					iVar19 = 7;
				}
				break;
			case 7:
				if (uParam3->f_4 > 9)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam7->f_1.f_2))
					{
						func_394(uParam7->f_1.f_2, 0);
					}
					iVar19 = 8;
				}
				else
				{
					return true;
				}
				break;
			case 8:
				if ((aggregate_func_2923(uParam0->f_1, 0) || aggregate_func_4240(uParam3->f_5, 1)) && func_392(&(uParam7->f_1), iParam4, iParam6, 0, &uVar15))
				{
					iVar19 = 9;
				}
				break;
			case 9:
				if (func_393(iParam2, iParam4, iParam6, &(uParam7->f_1), uParam9->f_11[uParam1->f_3 /*34*/], 0))
				{
					MISC::_COPY_MEMORY(&(uParam7->f_1.f_5), &Var0, 5);
					MISC::_COPY_MEMORY(&(uParam7->f_1.f_13), &Var5, 5);
					iVar19 = 10;
				}
				break;
			case 10:
				func_246(iParam2, uParam8, iParam4, iParam6, &cVar10, 0, 0);
				if (func_389(uParam3, iParam2, &(uParam7->f_1), iParam4, iParam6, uParam8, &((uParam9->f_11[uParam1->f_3 /*34*/])->f_13), &cVar10, 0) != 0)
				{
					iVar19 = 12;
				}
				break;
			case 12:
				if (func_392(&(uParam7->f_1), iParam4, iParam6, 0, &uVar15))
				{
					iVar19 = 13;
				}
				break;
			case 13:
				if (func_393(iParam2, iParam4, iParam6, &(uParam7->f_1), &((uParam9->f_11[uParam1->f_3 /*34*/])->f_13), 0))
				{
					iVar19 = 14;
				}
				break;
			case 14:
				return true;
		}
		if (iVar19 != uParam7->f_1.f_10)
		{
			uParam7->f_1.f_10 = iVar19;
			iVar18++;
		}
	else
	{
		}
	else
	{
		}
	}
	return false;
}

void func_302(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_10 > 0 && uParam0->f_10 <= 2)
	{
		*iParam1++;
		*iParam2++;
	}
	else if (uParam0->f_10 > 2 && uParam0->f_10 <= 10)
	{
		*iParam2++;
	}
}

bool func_303(var uParam0, int* iParam1, var uParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10)
{
	struct<5> Var0;
	struct<5> Var5;
	int iVar10;
	char[] cVar11[8];
	int iVar15;
	int iVar16;
	int iVar17;

	Var0.f_4 = -1082130432;
	Var5.f_2 = -1;
	Var5.f_4 = -2;
	iVar10 = 0;
	uParam6->f_3 = func_384(uParam0, uParam6->f_1, iParam5, iParam4, iParam3);
	while (iVar15 < 15)
	{
		iVar16 = uParam6->f_10;
		switch (uParam6->f_10)
		{
			case 0:
				iVar17 = func_386(uParam0, iParam1, iParam3, iParam4, iParam5, uParam6, &iVar10, iParam10);
				if (iVar17 == 1)
				{
					iVar16 = 1;
				}
				else if (iVar17 == 2)
				{
					iVar16 = 14;
				}
				break;
			case 1:
				iVar17 = func_395(iParam1, uParam6, uParam8, sParam9);
				if (iVar17 != 0)
				{
					if (iVar17 == 1)
					{
						aggregate_func_2882(&(uParam6->f_4), 0);
					}
					iVar16 = 2;
				}
				break;
			case 2:
				func_246(iParam1, uParam7, iParam3, iParam5, &cVar11, 0, 0);
				if (func_389(uParam2, iParam1, uParam6, iParam3, iParam5, uParam7, &(uParam8->f_3), &cVar11, 1) != 0)
				{
					iVar16 = 4;
				}
				break;
			case 4:
				if (uParam2->f_4 >= 7)
				{
					if (!func_390(uParam6) || func_391(uParam6))
					{
						iVar16 = 5;
					}
				}
				break;
			case 5:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam6->f_2) || func_392(uParam6, iParam3, iParam5, 1, uParam8))
				{
					iVar16 = 6;
				}
				break;
			case 6:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam6->f_2) || func_393(iParam1, iParam3, iParam5, uParam6, &(uParam8->f_3), 1))
				{
					iVar16 = 7;
				}
				break;
			case 7:
				if (uParam2->f_4 > 9)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam6->f_2))
					{
						func_394(uParam6->f_2, 0);
					}
					else if (aggregate_func_2923(uParam6->f_4, 1))
					{
						NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uParam6->f_1, 1, 1, 7);
					}
					iVar16 = 8;
				}
				else
				{
					return true;
				}
				break;
			case 8:
				if ((aggregate_func_2923(uParam0->f_1, 0) || aggregate_func_4240(uParam2->f_5, 1)) && func_392(uParam6, iParam3, iParam5, 0, uParam8))
				{
					iVar16 = 9;
				}
				break;
			case 9:
				if (func_393(iParam1, iParam3, iParam5, uParam6, &(uParam8->f_3), 0))
				{
					MISC::_COPY_MEMORY(&(uParam6->f_5), &Var0, 5);
					MISC::_COPY_MEMORY(&(uParam6->f_13), &Var5, 5);
					iVar16 = 10;
				}
				break;
			case 10:
				func_246(iParam1, uParam7, iParam3, iParam5, &cVar11, 0, 0);
				if (func_389(uParam2, iParam1, uParam6, iParam3, iParam5, uParam7, &(uParam8->f_16), &cVar11, 0) != 0)
				{
					iVar16 = 12;
				}
				break;
			case 12:
				if (func_392(uParam6, iParam3, iParam5, 0, uParam8))
				{
					iVar16 = 13;
				}
				break;
			case 13:
				if (func_393(iParam1, iParam3, iParam5, uParam6, &(uParam8->f_16), 0))
				{
					iVar16 = 14;
				}
				break;
			case 14:
				return true;
		}
		if (iVar16 != uParam6->f_10)
		{
			uParam6->f_10 = iVar16;
			iVar15++;
		}
	else
	{
		}
	else
	{
		}
	}
	return false;
}

bool func_304(int* iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, var uParam6, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11, char* sParam12, int iParam13)
{
	struct<5> Var0;
	var uVar5;
	int iVar9;
	int iVar10;
	int iVar11;

	Var0.f_4 = -1082130432;
	func_396(uParam6);
	uParam6->f_3 = func_384(uParam1, uParam6->f_1, iParam5, iParam4, iParam3);
	while (iVar9 < 15)
	{
		iVar10 = uParam6->f_10;
		switch (uParam6->f_10)
		{
			case 0:
				iVar11 = func_386(uParam1, iParam0, iParam3, iParam4, iParam5, uParam6, iParam7, iParam13);
				if (iVar11 == 1)
				{
					iVar10 = 1;
				}
				else if (iVar11 == 2)
				{
					iVar10 = 14;
				}
				break;
			case 1:
				iVar11 = func_395(iParam0, uParam6, uParam9, sParam12);
				if (iVar11 != 0)
				{
					if (iVar11 == 1)
					{
						aggregate_func_2882(&(uParam6->f_4), 0);
					}
					iVar10 = 2;
				}
				break;
			case 2:
				func_246(iParam0, uParam8, iParam3, iParam5, &uVar5, 0, 0);
				func_397(uParam2, iParam0, uParam6, iParam3, iParam5, uParam8, uParam10, &uVar5, 1, 0, 1);
				iVar10 = 4;
				break;
			case 4:
				if (uParam2->f_4 >= 7)
				{
					if (!func_390(uParam6) || func_398(uParam6, *iParam7, iParam13))
					{
						iVar10 = 5;
					}
				}
				break;
			case 5:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam6->f_2) || func_399(uParam6, iParam3, iParam5, 1, uParam9))
				{
					iVar10 = 6;
				}
				break;
			case 6:
				if (func_400(uParam10, uParam6, iParam3, iParam5, 1))
				{
					iVar10 = 7;
				}
				break;
			case 7:
				if (uParam2->f_4 > 9)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam6->f_2))
					{
						func_394(uParam6->f_2, 0);
					}
					else if (aggregate_func_2923(uParam9->f_1, 1))
					{
						NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uParam6->f_1, 1, 1, 7);
					}
					iVar10 = 8;
				}
				else
				{
					return true;
				}
				break;
			case 8:
				if ((aggregate_func_2923(uParam1->f_1, 0) || aggregate_func_4240(uParam2->f_5, 1)) && func_399(uParam6, iParam3, iParam5, 0, uParam9))
				{
					MISC::_COPY_MEMORY(&(uParam6->f_5), &Var0, 5);
					iVar10 = 10;
				}
				break;
			case 10:
				func_246(iParam0, uParam8, iParam3, iParam5, &uVar5, 0, 0);
				func_397(uParam2, iParam0, uParam6, iParam3, iParam5, uParam8, uParam11, &uVar5, 0, 0, 1);
				iVar10 = 12;
				break;
			case 12:
				if (func_399(uParam6, iParam3, iParam5, 0, uParam9))
				{
					iVar10 = 13;
				}
				break;
			case 13:
				if (func_400(uParam11, uParam6, iParam3, iParam5, 0))
				{
					iVar10 = 14;
				}
				break;
			case 14:
				return true;
		}
		if (iVar10 != uParam6->f_10)
		{
			uParam6->f_10 = iVar10;
			iVar9++;
		}
	else
	{
		}
	else
	{
		}
	}
	return false;
}

void func_305(var uParam0, var uParam1, struct<2> Param2, var uParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
	{
		return;
	}
	func_401(uParam0, uParam1, 6, 10, MISC::GET_HASH_KEY("Breaking_Front_Left_Wheel"), 0);
	func_401(uParam0, uParam1, 7, 11, MISC::GET_HASH_KEY("Breaking_Front_Right_Wheel"), 1);
	func_401(uParam0, uParam1, 8, 12, MISC::GET_HASH_KEY("Breaking_Rear_Left_Wheel"), 2);
	func_401(uParam0, uParam1, 9, 13, MISC::GET_HASH_KEY("Breaking_Rear_Right_Wheel"), 3);
	if (aggregate_func_2923(Param2.f_1, 3))
	{
		VEHICLE::_0x201B8ED4FF7FE9F5(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_2));
	}
	else if (aggregate_func_2923(Param2.f_1, 4))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_2, -913345033))
		{
			VEHICLE::_0x201B8ED4FF7FE9F5(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_2));
		}
		else
		{
			VEHICLE::_0x41CDA90EE3450921(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_2));
		}
	}
}

bool func_306(int* iParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9)
{
	char[] cVar0[8];
	struct<5> Var4;
	struct<6> Var9;
	int iVar15;
	var uVar16;
	int iVar19;
	int iVar20;
	int iVar21;

	Var4.f_4 = -1082130432;
	Var9.f_5 = -1082130432;
	uVar16 = -1;
	uParam5->f_3 = func_384(uParam1, uParam5->f_1, iParam4, -1, iParam3);
	while (iVar19 < 15)
	{
		iVar20 = uParam5->f_10;
		switch (uParam5->f_10)
		{
			case 0:
				if (ENTITY::DOES_ENTITY_EXIST(uParam5->f_1))
				{
					iVar20 = 1;
				}
				else
				{
					return true;
				}
				break;
			case 1:
				iVar21 = func_402(iParam0, uParam5, iParam3, uParam6);
				if (iVar21 != 0)
				{
					if (iVar21 == 1)
					{
						aggregate_func_2882(&(uParam5->f_4), 0);
					}
					iVar20 = 2;
				}
				break;
			case 2:
				func_246(iParam0, uParam6, iParam3, 0, &cVar0, 0, 0);
				if (func_397(uParam2, iParam0, uParam5, iParam3, iParam4, uParam6, &Var9, &cVar0, 1, 1, 1))
				{
					iVar20 = 3;
				}
				break;
			case 3:
				if (iParam7 == 0 || aggregate_func_2923(uParam5->f_5, 0))
				{
					iVar20 = 4;
				}
				break;
			case 4:
				if (uParam2->f_4 >= 7)
				{
					if (!func_390(uParam5) || func_398(uParam5, iVar15, iParam9))
					{
						iVar20 = 5;
					}
				}
				break;
			case 5:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam5->f_2) || func_399(uParam5, iParam3, iParam4, 1, &uVar16))
				{
					iVar20 = 7;
				}
				break;
			case 7:
				if (uParam2->f_4 > 9)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam5->f_2))
					{
						func_394(uParam5->f_2, 0);
					}
					iVar20 = 8;
				}
				else
				{
					return true;
				}
				break;
			case 8:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam5->f_1) || ((aggregate_func_2923(uParam1->f_1, 0) || aggregate_func_4240(uParam2->f_5, 1)) && func_399(uParam5, iParam3, iParam4, 0, &uVar16)))
				{
					MISC::_COPY_MEMORY(&(uParam5->f_5), &Var4, 5);
					iVar20 = 10;
				}
				break;
			case 10:
				func_246(iParam0, uParam6, iParam3, 0, &cVar0, 0, 0);
				if (func_397(uParam2, iParam0, uParam5, iParam3, 0, uParam6, &Var9, &cVar0, 0, 1, 1))
				{
					iVar20 = 11;
				}
				break;
			case 11:
				if (iParam8 == 0 || aggregate_func_2923(uParam5->f_5, 0))
				{
					iVar20 = 12;
				}
				break;
			case 12:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam5->f_1) || func_399(uParam5, iParam3, iParam4, 0, &uVar16))
				{
					iVar20 = 14;
				}
				break;
			case 14:
				return true;
		}
		if (iVar20 != uParam5->f_10)
		{
			uParam5->f_10 = iVar20;
			iVar19++;
		}
	else
	{
		}
	else
	{
		}
	}
	return false;
}

bool func_313(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(iParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_409(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return false;
	}
	iVar0 = func_410(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&((uParam0->f_17[iVar0 /*12*/])->f_1), sParam2))
		{
		}
		else if ((uParam0->f_17[iVar0 /*12*/])->f_9 != iParam3)
		{
		}
		else if ((uParam0->f_17[iVar0 /*12*/])->f_10 != iParam4)
		{
		}
		else
		{
			return true;
		}
	}
	else
	{
		iVar1 = func_411(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			func_412(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_413(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_17[iVar0 /*12*/] = iParam1;
		StringCopy(&((uParam0->f_17[iVar0 /*12*/])->f_1), sParam2, 64);
		(uParam0->f_17[iVar0 /*12*/])->f_9 = iParam3;
		(uParam0->f_17[iVar0 /*12*/])->f_10 = iParam4;
		if (bParam5)
		{
			aggregate_func_4254(uParam0->f_17[iVar0 /*12*/], 2);
		}
		else
		{
			aggregate_func_6662(uParam0->f_17[iVar0 /*12*/], 2);
		}
		return true;
	}
	return false;
}

void func_317(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_208, sParam1))
		{
			iParam3 = 0;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_208, sParam1, iParam2, iParam3);
}

void func_320(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (((!ANIMSCENE::_0x25557E324489393C(uParam0->f_208) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_208, 0)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_208)) || aggregate_func_4250(uParam0, 512))
	{
		if (!aggregate_func_4240(uParam0->f_264, 128))
		{
			aggregate_func_8139();
		}
		return;
	}
	if ((func_336(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_208, func_375(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_208, func_375(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_208))
	{
		if (!aggregate_func_4240(uParam0->f_264, 128))
		{
			aggregate_func_8139();
		}
		return;
	}
	bVar0 = true;
	iVar1 = _NAMESPACE71::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (aggregate_func_2997(iVar1))
		{
			if (aggregate_func_4637(Global_26287, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (aggregate_func_4240(uParam0->f_264, 512))
	{
		bVar2 = true;
	}
	if (!aggregate_func_4250(uParam0, 2) && aggregate_func_8140(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_208);
		aggregate_func_8139();
	}
}

void func_321(var uParam0, char* sParam1)
{
	struct<8> Var0;
	char cVar8[32];

	if (aggregate_func_4641(uParam0) == 2 && (aggregate_func_4240(uParam0->f_263, 16384) || aggregate_func_4250(uParam0, 268435456)))
	{
		Var0 = { func_295(uParam0) };
		func_242(uParam0, &Var0);
	}
	func_420(uParam0, sParam1);
	if (aggregate_func_4250(uParam0, 131072))
	{
		func_421(uParam0, 0);
	}
	if (aggregate_func_3115())
	{
		aggregate_func_3307(1);
	}
	func_293(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_424(uParam0, cVar8);
	func_331(1, 0);
	func_288(uParam0);
	if (aggregate_func_4250(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_188);
	}
	func_425(uParam0);
	func_248(uParam0, 1);
	if (aggregate_func_4240(uParam0->f_263, 4194304))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_208, uParam0->f_5, uParam0->f_8, 2);
	}
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_208);
	Global_26286 = uParam0->f_208;
	StringCopy(&Global_26288, sParam1, 24);
}

void func_322(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	aggregate_func_4283(&(uParam0->f_1));
}

void func_324(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_295(uParam0) };
	func_210(uParam0, &Var0);
}

void func_330(int iParam0)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), iParam0, 0, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
}

void func_331(bool bParam0, bool bParam1)
{
	if (aggregate_func_3728())
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	}
	if (bParam0)
	{
		if (aggregate_func_2056())
		{
			aggregate_func_2985(1);
		}
	}
	AUDIO::_0x36559148B78853B3(0, bParam1, 0);
}

void func_332(var uParam0)
{
	vector3 vVar0;

	if (!aggregate_func_4250(uParam0, 4))
	{
		if (aggregate_func_4240(uParam0->f_263, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { aggregate_func_7120(uParam0) };
		if (!aggregate_func_4240(uParam0->f_263, 524288))
		{
			func_434(&(uParam0->f_275));
		}
		func_435(&(uParam0->f_263), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		aggregate_func_7588(uParam0, 0f, 0f, 0f);
		func_437(uParam0);
		func_438(uParam0);
		func_439(uParam0, 0f, 0f, 0f, 0, 0);
		func_440(uParam0);
		aggregate_func_4254(uParam0, 4);
		func_441(uParam0, 0);
		aggregate_func_3108(Global_35, 65601, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_276)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_276));
		}
	}
}

bool func_333(var uParam0, bool bParam1)
{
	if (aggregate_func_4250(uParam0, 262144))
	{
		return false;
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_208))
	{
		return false;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_208, "ExportCamera"))
	{
		return false;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_208, "ExportCamera") || (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_208, "ExportCamera") && bParam1)) || ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_208))
	{
		aggregate_func_4254(uParam0, 262144);
		func_441(uParam0, 1);
		return true;
	}
	return false;
}

int func_334(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_208) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_208, 0))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_0x49F1D143ADE32656(uParam0->f_208) * 1000f));
}

int func_335(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_208) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_208, 0))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_208) * 1000f));
}

bool func_336(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_17[iVar0 /*12*/])) && &uParam0->f_17[iVar0 /*12*/] == iParam1) && aggregate_func_4250(uParam0->f_17[iVar0 /*12*/], iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_337(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_208))
	{
		return true;
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_208, 0))
	{
		if (aggregate_func_4250(uParam0, 524288))
		{
			ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
		}
		return true;
	}
	if (aggregate_func_4250(uParam0, 1048576) && ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_208))
	{
		return true;
	}
	if ((aggregate_func_4240(uParam0->f_264, 1024) && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_208, "ExportCamera")) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_208, "ExportCamera"))
	{
		return true;
	}
	return false;
}

void func_338(var uParam0)
{
	if (((aggregate_func_4250(uParam0, 1073741824 /* Float: 2f */) && !aggregate_func_4250(uParam0, 524288)) && aggregate_func_4250(uParam0, 512)) && CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(uParam0->f_292);
	}
}

void func_339(var uParam0)
{
	if (!aggregate_func_4250(uParam0, 536870912))
	{
		func_441(uParam0, 1);
		func_340(&(uParam0->f_264), uParam0->f_275);
		aggregate_func_4254(uParam0, 536870912);
	}
	if (aggregate_func_4250(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_443(uParam0);
	func_322(uParam0, 1);
	func_289(uParam0);
	func_243(uParam0);
	aggregate_func_4285(uParam0);
	func_445(uParam0, 4);
	func_292(uParam0);
	func_421(uParam0, 1);
	func_288(uParam0);
	aggregate_func_4313(&(uParam0->f_1));
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_208) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_208))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_208);
	}
	func_447(!aggregate_func_4240(uParam0->f_264, 128));
	if (!aggregate_func_4240(uParam0->f_264, 128))
	{
		aggregate_func_8139();
	}
}

void func_340(var uParam0, bool bParam1)
{
	if (Global_1939168->f_6)
	{
		return;
	}
	func_448(2000);
	Global_13 = 0;
	if (!aggregate_func_4240(*uParam0, 2048))
	{
		func_449();
	}
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, aggregate_func_4240(*uParam0, 8));
	if (!aggregate_func_4240(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, 0);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (aggregate_func_4240(*uParam0, 2) || aggregate_func_4240(*uParam0, 4))
	{
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(-1679307491);
	}
	if (!aggregate_func_4240(*uParam0, 16))
	{
		aggregate_func_6539(1);
	}
	if ((bParam1 != 0 && aggregate_func_2827(bParam1) != -525676072) && !aggregate_func_4240(*uParam0, 32))
	{
		aggregate_func_5462(Global_35, -1144282354, 0, 0, 0);
	}
	else if (aggregate_func_4871(-1406972469) != -1)
	{
		aggregate_func_5462(Global_35, -1406972469, 0, 0, 0);
	}
	aggregate_func_3109(Global_35, 98369, 1, 1, 0);
	*uParam0 = 0;
}

void func_341()
{
	Global_1939168->f_46 = 1;
}

void func_346(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 1;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_347(bool bParam0)
{
	Global_1903928->f_485[45] = !bParam0;
}

void func_350(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	*iParam3 = 0;
	*uParam4 = 0;
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	iVar2 = 0;
	while (iVar2 <= (*uParam0 - 1))
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
		}
		else if (MISC::IS_BIT_SET(uParam0[iVar2 /*38*/], 0) && !MISC::IS_BIT_SET(uParam0[iVar2 /*38*/], 8))
		{
			*uParam4++;
			if (SCRIPTS::_0x0A79C81C418F5D38(uParam1->f_29[iParam2], iVar2))
			{
				if (iVar0 == NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1))
				{
					uParam1->f_6 = iParam2;
				}
				*iParam3++;
			}
		}
		iVar2++;
	}
	if (&uParam1->f_14[iParam2] > 0)
	{
		*uParam4 = &uParam1->f_14[iParam2];
	}
}

void func_352(int* iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	*(iParam0->f_9[iParam4 /*3*/]) = { vParam1 };
	iParam0->f_27[iParam4] = iParam5;
	iParam0->f_32[iParam4] = iParam6;
	MISC::SET_BIT(iParam0, 5);
}

void func_353(int* iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 0);
	}
	iParam0->f_2 = iParam1;
}

bool func_354(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 8);
}

void func_355(int* iParam0)
{
	MISC::SET_BIT(iParam0, 8);
}

void func_356(int* iParam0)
{
	int iVar0;

	if (MISC::IS_BIT_SET(*iParam0, 3) && !MISC::IS_BIT_SET(*iParam0, 4))
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (aggregate_func_2875(&(uLocal_14[iVar0])))
			{
				aggregate_func_4583(&(uLocal_14[iVar0]), 0, 1, 1);
				aggregate_func_4823(&(uLocal_14[iVar0]), 0, 1);
				aggregate_func_2878(uLocal_14[iVar0], 1, 1);
			}
			iVar0++;
		}
		MISC::SET_BIT(iParam0, 4);
	}
}

bool func_357(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

int func_358(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (MISC::IS_BIT_SET(uParam1->f_1, 8))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (SCRIPTS::_0x0A79C81C418F5D38(uParam1->f_29[iVar1], iVar0))
			{
				return iVar1;
			}
			iVar1++;
		}
		return uParam1->f_5;
	}
	if (((*uParam0)[iVar0 /*38*/])->f_1 != -1)
	{
		if (&uParam1->f_19[((*uParam0)[iVar0 /*38*/])->f_1])
		{
			return ((*uParam0)[iVar0 /*38*/])->f_1;
		}
	}
	return uParam1->f_4;
}

void func_362(vector3 vParam0)
{
	if (!Global_1939168->f_6)
	{
		func_467(vParam0);
		func_468(vParam0);
	}
}

void func_363(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar1 = PLAYER::PLAYER_ID();
	iVar2 = PLAYER::PLAYER_PED_ID();
	if (PED::IS_PED_ON_MOUNT(iVar2))
	{
		iVar3 = PED::GET_MOUNT(iVar2);
		if (!PED::IS_PED_INJURED(iVar3))
		{
			iVar0 = iVar3;
		}
		else
		{
			iVar0 = iVar2;
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(iVar2, false))
	{
		iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar2, false);
		if (ENTITY::_0x083D497D57B7400F(iVar4))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar4, false);
		}
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar4, (fParam0 * 3f));
		return;
	}
	else
	{
		iVar0 = iVar2;
	}
	if (ENTITY::_0x083D497D57B7400F(iVar0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
	}
	PED::FORCE_PED_MOTION_STATE(iVar0, func_469(fParam0), false, iParam2, bParam3);
	PLAYER::SIMULATE_PLAYER_INPUT_GAIT(iVar1, fParam0, iParam1, ENTITY::GET_ENTITY_HEADING(iVar0), false, false);
}

void func_364(int* iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST((iParam0->f_14[iVar0 /*21*/])->f_1.f_2))
		{
			ENTITY::DELETE_ENTITY(&((iParam0->f_14[iVar0 /*21*/])->f_1.f_2));
		}
		(iParam0->f_14[iVar0 /*21*/])->f_1.f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST((iParam0->f_99[iVar0 /*20*/])->f_2))
		{
			ENTITY::DELETE_ENTITY(&((iParam0->f_99[iVar0 /*20*/])->f_2));
		}
		(iParam0->f_99[iVar0 /*20*/])->f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST((iParam0->f_500[iVar0 /*13*/])->f_2))
		{
			ENTITY::DELETE_ENTITY(&((iParam0->f_500[iVar0 /*13*/])->f_2));
		}
		(iParam0->f_500[iVar0 /*13*/])->f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST((iParam0->f_761[iVar0 /*13*/])->f_2))
		{
			ENTITY::DELETE_ENTITY(&((iParam0->f_761[iVar0 /*13*/])->f_2));
		}
		(iParam0->f_761[iVar0 /*13*/])->f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST((iParam0->f_892[iVar0 /*13*/])->f_2))
		{
			ENTITY::DELETE_ENTITY(&((iParam0->f_892[iVar0 /*13*/])->f_2));
		}
		(iParam0->f_892[iVar0 /*13*/])->f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST((iParam0->f_1023[iVar0 /*13*/])->f_2))
		{
			ENTITY::DELETE_ENTITY(&((iParam0->f_1023[iVar0 /*13*/])->f_2));
		}
		(iParam0->f_1023[iVar0 /*13*/])->f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST((iParam0->f_1089[iVar0 /*14*/])->f_2))
		{
			iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX((iParam0->f_1089[iVar0 /*14*/])->f_2);
			VEHICLE::DELETE_MISSION_TRAIN(&iVar1);
		}
		(iParam0->f_1089[iVar0 /*14*/])->f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (ENTITY::DOES_ENTITY_EXIST((iParam0->f_1104[iVar0 /*15*/])->f_2))
		{
			ENTITY::DELETE_ENTITY(&((iParam0->f_1104[iVar0 /*15*/])->f_2));
		}
		(iParam0->f_1104[iVar0 /*15*/])->f_2 = 0;
		iVar0++;
	}
}

void func_367()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1951131->f_2795)
	{
		if (!&Global_1951131->f_2795.f_1[iVar0 /*2*/])
		{
		}
		else if (PED::_0x93FFD92F05EC32FD((Global_1951131->f_2795.f_1[iVar0 /*2*/])->f_1))
		{
			PED::_0x13E7320C762F0477((Global_1951131->f_2795.f_1[iVar0 /*2*/])->f_1);
		}
		iVar0++;
	}
}

struct<16> func_374(var uParam0)
{
	return uParam0->f_192;
}

char* func_375(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_35)
	{
		if (ENTITY::GET_ENTITY_MODEL(Global_35) == 11966224)
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_471(iVar0);
}

void func_376(var uParam0)
{
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_13))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_13, false);
	}
}

struct<8> func_377()
{
	char cVar0[64];

	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

void func_379(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_13))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_13, false);
	}
	uParam0->f_4 = iParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_13 = PED::_0x4C39C95AE5DB1329(iParam1, bParam2, iVar0);
}

struct<8> func_381()
{
	char cVar0[64];

	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

bool func_383(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	fVar4 = aggregate_func_1501(iParam0, vParam1, 1);
	if (!aggregate_func_4260(fParam4))
	{
		if (fVar4 <= fParam5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				aggregate_func_4293(fParam4, 0);
			}
		}
	}
	else if (bParam7 && fVar4 > fParam5)
	{
		aggregate_func_4313(fParam4);
	}
	if (aggregate_func_4260(fParam4))
	{
		if (bParam10)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && VEHICLE::_IS_DRAFT_VEHICLE(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, 1f);
					VEHICLE::_0x0C3F0F7F92CA847C(iVar2, PED::_0x46BF2A810679D6E6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (aggregate_func_4298(fParam4) >= fParam6)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !aggregate_func_2905(iParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !aggregate_func_2905(iParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
					return true;
				}
			}
		}
		if (iParam0 == Global_35 && bParam8 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(iParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			}
			PED::SET_PED_RESET_FLAG(iParam0, 175, true);
		}
	}
	return false;
}

int func_384(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 2;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
	{
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
		return 2;
	}
	iVar0 = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iParam1);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return 1;
	}
	iVar1 = NETWORK::_0xA6C0787443C9583E(iVar0);
	if (iVar1 == 255)
	{
		return 0;
	}
	if (iVar1 == PLAYER::PLAYER_ID())
	{
		NETWORK::_0x7182EDDA1EE7DB5A(iVar0);
		return 1;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (&uParam0->f_7[iVar2 /*5*/] == 255)
		{
		}
		else if (&uParam0->f_7[iVar2 /*5*/] == iVar1)
		{
			return 2;
		}
		iVar2++;
	}
	if (&uParam0->f_7[0 /*5*/] != 255 && &uParam0->f_7[0 /*5*/] == PLAYER::PLAYER_ID())
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iVar0);
	}
	return 0;
}

void func_385(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_3)))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_1);
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2);
	bVar2 = aggregate_func_1345(uParam1->f_1) == PLAYER::PLAYER_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (PED::IS_PED_MALE(iVar1))
	{
		bVar3 = MISC::GET_HASH_KEY(&(uParam2->f_3));
	}
	else
	{
		bVar3 = MISC::GET_HASH_KEY(&(uParam2->f_7));
	}
	if (PED::_0xA0BC8FAED8CFEB3C(iVar1))
	{
		if (!aggregate_func_2923(uParam1->f_4, 14) && aggregate_func_2923(uParam1->f_4, 15))
		{
			func_474(iVar1, bVar3);
			aggregate_func_2882(&(uParam1->f_4), 14);
		}
		if (!aggregate_func_2923(uParam1->f_4, 15))
		{
			PED::_0x59BD177A1A48600A(iVar1, 1);
			aggregate_func_2882(&(uParam1->f_4), 15);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_2, MISC::GET_HASH_KEY("ChangeOutfit")))
	{
		if (!aggregate_func_2923(uParam1->f_4, 17) && PED::_0xA0BC8FAED8CFEB3C(iVar1))
		{
			func_475(iVar1, bVar3);
			aggregate_func_2882(&(uParam1->f_4), 17);
		}
		if (!aggregate_func_2923(uParam1->f_4, 16))
		{
			if (!bVar2)
			{
				aggregate_func_2882(&(uParam1->f_4), 16);
			}
			else if (PED::_0xA0BC8FAED8CFEB3C(iVar0) && func_476())
			{
				func_475(iVar0, bVar3);
				bVar4 = bVar3;
				aggregate_func_1265(&bVar4);
				aggregate_func_2882(&(uParam1->f_4), 16);
			}
		}
	}
}

int func_386(var uParam0, int* iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	if (iParam3 <= -1)
	{
		return 2;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam5->f_1))
	{
		return 1;
	}
	else if (iParam4 == 966820754)
	{
		if (iParam3 >= 4)
		{
			return 2;
		}
		iVar0 = func_240(iParam1, iParam3);
		if (iVar0 < 0 || iVar0 >= 4)
		{
			return 2;
		}
		iVar1 = &uParam0->f_7[iVar0 /*5*/];
		if (iVar1 == 255)
		{
			return 2;
		}
		uParam5->f_1 = PLAYER::GET_PLAYER_PED(iVar1);
		*uParam5 = iParam3;
		*iParam6 = 0;
		return 1;
	}
	else
	{
		iVar4 = func_181(iParam7, iParam3, iParam4, &iVar2, iParam6, &uVar3);
		uParam5->f_1 = MISC::_0xEE04C0AFD4EFAF0E(iVar2);
		if (iVar4 == 0)
		{
			if (!aggregate_func_4287(&(uParam5->f_11)))
			{
				aggregate_func_1181(&(uParam5->f_11), 0, 0);
			}
			if (aggregate_func_646(&(uParam5->f_11), 0, 0) >= 15000)
			{
				aggregate_func_4285(&(uParam5->f_11));
				return 2;
			}
			return 0;
		}
		else if (iVar4 == 2 || !ENTITY::DOES_ENTITY_EXIST(uParam5->f_1))
		{
			aggregate_func_4285(&(uParam5->f_11));
			return 2;
		}
		else if (iVar4 == 1)
		{
			aggregate_func_4285(&(uParam5->f_11));
			*uParam5 = iParam3;
			return 1;
		}
	}
	return 0;
}

int func_387(int* iParam0, var uParam1, char* sParam2)
{
	struct<4> Var0;

	Var0 = { func_244(sParam2, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_1.f_1), uParam1->f_1, 0) };
	return func_478(iParam0, &Var0);
}

int func_389(var uParam0, int* iParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, char* sParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam2->f_1);
	uParam2->f_13 = uParam6->f_7;
	switch (uParam6->f_7)
	{
		case 0:
			aggregate_func_2882(&(uParam2->f_5), 1);
			if (PED::IS_PED_DEAD_OR_DYING(iVar0, true) && !PED::IS_PED_A_PLAYER(iVar0))
			{
				uParam2->f_13 = 5;
			}
			else if (AITRANSPORT::_0xDC44F405A6B98D03(iVar0, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false) && TASK::IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(iVar0))
				{
					uParam2->f_13 = 1;
				}
				else
				{
					iVar1 = PED::_0x849BD6C6314793D0(iVar0);
					uParam2->f_13.f_4 = PED::_0x4E76CB57222A00E5(iVar0);
					uParam2->f_13 = 6;
				}
			}
			else if (PED::_0x3AA24CCC0D451379(iVar0))
			{
				iVar2 = ENTITY::_0x61914209C36EFDDB(iVar0);
				if (iVar2 == 7 || iVar2 == 5)
				{
					iVar1 = PED::_0x09B83E68DE004CD4(iVar0);
				}
				uParam2->f_13 = 4;
			}
			else if (PED::IS_PED_IN_COVER(iVar0, 0, 0))
			{
				uParam2->f_13 = 3;
			}
			else if (PED::_0xD5FE956C70FF370B(iVar0))
			{
				uParam2->f_13 = 2;
			}
			else
			{
				uParam2->f_13 = 1;
			}
			break;
		case 4:
			break;
		case 6:
			iVar1 = PED::_0x4C8B59171957BCF7(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				uParam2->f_13 = 1;
			}
			else
			{
				uParam2->f_13.f_4 = uParam6->f_10;
			}
			break;
		case 7:
			uParam2->f_13.f_2 = uParam6->f_8;
			uParam2->f_13.f_1 = uParam6->f_9;
			uParam2->f_13.f_4 = uParam6->f_10;
			break;
		case 8:
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				iVar4 = PLAYER::_0xF49F14462F0AE27C(iVar3);
				iVar5 = PLAYER::_0xB9050A97594C8832(iVar3);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					iVar1 = iVar4;
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iVar5))
				{
					iVar1 = iVar5;
				}
				else
				{
					uParam2->f_13 = 1;
				}
			}
			else
			{
				uParam2->f_13 = 1;
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		iVar6 = -1;
		if (func_479(iParam1, iVar1, 0, &iVar6, &uVar7))
		{
			uParam2->f_13.f_2 = iVar6;
			uParam2->f_13.f_1 = uVar7;
		}
		else if (!aggregate_func_2923(uParam2->f_13.f_3, 0))
		{
			aggregate_func_2882(&(uParam2->f_13.f_3), 0);
			return 0;
		}
		else
		{
			iVar8 = func_480(iVar1, iParam1, iParam3, iParam4);
			if (iVar8 != -1)
			{
				uParam2->f_13.f_2 = iVar8;
				uParam2->f_13.f_1 = 0;
			}
		}
	}
	if (aggregate_func_2923(uParam6->f_6, 0) && AITRANSPORT::_0xDC44F405A6B98D03(iVar0, 0))
	{
		bVar9 = true;
	}
	if (func_397(uParam0, iParam1, uParam2, iParam3, iParam4, uParam5, uParam6, sParam7, bParam8, bVar9, aggregate_func_2923(uParam2->f_5, 1)))
	{
		bVar9 = true;
	}
	if (uParam2->f_13.f_2 != -1 && uParam2->f_13.f_1 == 0)
	{
		iVar10 = uParam2->f_13.f_2;
		if (uParam2->f_10 == 2)
		{
			iVar11 = 3;
		}
		else
		{
			iVar11 = 11;
		}
		if ((iParam1->f_1104[iVar10 /*15*/])->f_10 < iVar11)
		{
			return 0;
		}
		else if (!aggregate_func_2923((iParam1->f_1104[iVar10 /*15*/])->f_5, 0))
		{
			if (uParam2->f_13 != 6 || uParam2->f_13.f_4 == -1)
			{
				(iParam1->f_1104[iVar10 /*15*/])->f_5.f_1 = { uParam2->f_5.f_1 };
				(iParam1->f_1104[iVar10 /*15*/])->f_5.f_4 = uParam2->f_5.f_4;
				aggregate_func_2882(&((iParam1->f_1104[iVar10 /*15*/])->f_5), 0);
			}
		}
	}
	if (bVar9)
	{
		return 1;
	}
	return 2;
}

bool func_390(var uParam0)
{
	if (!aggregate_func_2923(uParam0->f_4, 0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	return true;
}

bool func_391(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return true;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_1);
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
	{
		return false;
	}
	vVar1 = { func_481(iVar0) };
	vVar1.f_1 = (vVar1.y + 100f);
	fVar4 = ENTITY::GET_ENTITY_HEADING(iVar0);
	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		iVar5 = PED::CLONE_PED(iVar0, 0f, false, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
		{
			return true;
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iVar5, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar5, true);
		aggregate_func_1826(iVar0, iVar5);
		ENTITY::SET_ENTITY_COORDS(iVar5, vVar1, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iVar5, fVar4);
		func_394(iVar5, 1);
		uParam0->f_2 = iVar5;
	}
	if (!func_483(iVar0, iVar5, &(uParam0->f_4)))
	{
		return false;
	}
	return true;
}

bool func_392(var uParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;

	if (bParam3)
	{
		iVar0 = uParam0->f_2;
	}
	else
	{
		iVar0 = uParam0->f_1;
		if (uParam0->f_3 != 1)
		{
			return uParam0->f_3 != 0;
		}
	}
	if (uParam0->f_13.f_2 == -1)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
		if (func_484(iVar1))
		{
			AITRANSPORT::_0x8886D83A430537FD(iVar1, 4194336);
		}
		return func_399(uParam0, iParam1, iParam2, bParam3, uParam4);
	}
	return true;
}

bool func_393(int* iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar14;
	bool bVar15;
	bool bVar16;
	struct<4> Var17;
	bool bVar21;
	bool bVar22;
	int iVar23;
	bool bVar24;

	if (bParam5)
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam3->f_2);
	}
	else
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam3->f_1);
		if (uParam3->f_3 != 1)
		{
			return uParam3->f_3 != 0;
		}
	}
	Var1 = -1;
	Var1.f_5.f_4 = -1082130432;
	if (func_485(iParam0, uParam3->f_13.f_2, uParam3->f_13.f_1, &Var1))
	{
		if (Var1.f_10 <= 1)
		{
			return false;
		}
		else if (aggregate_func_2923(Var1.f_4, 0))
		{
			if (func_486(iParam0, uParam3->f_13.f_2, uParam3->f_13.f_1, bParam5, &iVar14))
			{
			}
			else
			{
				return false;
			}
		}
	}
	bVar15 = false;
	bVar16 = aggregate_func_1534(iVar0, 1, 0, 0);
	Var17 = { aggregate_func_4289() };
	bVar21 = false;
	bVar22 = aggregate_func_2923(uParam4->f_6, 5);
	switch (uParam4->f_11)
	{
		case 0:
			break;
		case 1:
			WEAPON::_0xFCCC886EDE3C63EC(iVar0, 2, 1);
			break;
		case 2:
			bVar15 = WEAPON::GET_BEST_PED_WEAPON(iVar0, bVar22, true);
			break;
		case 4:
			bVar15 = WEAPON::_0xDA37A053C1522F5D(iVar0, bVar22, 0, 0);
			break;
		case 5:
			bVar15 = uParam4->f_12;
			break;
		case 3:
			bVar15 = WEAPON::GET_BEST_PED_WEAPON(iVar0, bVar22, false);
			break;
		case 6:
			if (aggregate_func_2923(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(bVar16) == -1241684019)
			{
				bVar15 = bVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, -1241684019, bVar22, 0);
			}
			break;
		case 7:
			if (aggregate_func_2923(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(bVar16) == 1622482340)
			{
				bVar15 = bVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, 1622482340, bVar22, 0);
			}
			break;
		case 8:
			if (aggregate_func_2923(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(bVar16) == joaat("group_heavy"))
			{
				bVar15 = bVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("group_heavy"), bVar22, 0);
			}
			break;
		case 9:
			if (aggregate_func_2923(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(bVar16) == -954861255)
			{
				bVar15 = bVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, -954861255, bVar22, 0);
			}
			break;
		case 10:
			if (aggregate_func_2923(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(bVar16) == 308416707)
			{
				bVar15 = bVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, 308416707, bVar22, 0);
			}
			break;
		case 11:
			if (aggregate_func_2923(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(bVar16) == joaat("group_melee"))
			{
				bVar15 = bVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("group_melee"), bVar22, 0);
			}
			break;
		case 12:
			if (aggregate_func_2923(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(bVar16) == joaat("group_petrolcan"))
			{
				bVar15 = bVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("group_petrolcan"), bVar22, 0);
			}
			break;
		case 13:
			if (aggregate_func_2923(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(bVar16) == joaat("group_pistol"))
			{
				bVar15 = bVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("group_pistol"), bVar22, 0);
			}
			break;
		case 14:
			if (aggregate_func_2923(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(bVar16) == -594562071)
			{
				bVar15 = bVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, -594562071, bVar22, 0);
			}
			break;
		case 15:
			if (aggregate_func_2923(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(bVar16) == -1101297303)
			{
				bVar15 = bVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, -1101297303, bVar22, 0);
			}
			break;
		case 16:
			if (aggregate_func_2923(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(bVar16) == joaat("group_rifle"))
			{
				bVar15 = bVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("group_rifle"), bVar22, 0);
			}
			break;
		case 17:
			if (aggregate_func_2923(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(bVar16) == joaat("group_shotgun"))
			{
				bVar15 = bVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("group_shotgun"), bVar22, 0);
			}
			break;
		case 18:
			if (aggregate_func_2923(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(bVar16) == joaat("group_sniper"))
			{
				bVar15 = bVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("group_sniper"), bVar22, 0);
			}
			break;
		case 19:
			if (aggregate_func_2923(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(bVar16) == joaat("group_thrown"))
			{
				bVar15 = bVar16;
			}
			else
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("group_thrown"), bVar22, 0);
			}
			break;
		case 20:
			if (aggregate_func_2923(uParam4->f_6, 4) && WEAPON::_0xD955FEE4B87AFA07(bVar16))
			{
				bVar15 = bVar16;
			}
			else
			{
				WEAPON::_0xF52BD94B47CCF736(iVar0, &Var17, bVar22, 0);
				bVar21 = true;
			}
			break;
		case 21:
			WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, true, true);
			break;
	}
	if (bVar21)
	{
		WEAPON::_0x12FB95FE3D579238(iVar0, &Var17, 1, 0, 0, 0);
	}
	else
	{
		iVar23 = uParam4->f_11;
		if ((iVar23 >= 6 && iVar23 <= 19) && bVar15 == 0)
		{
			bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, -1101297303, bVar22, 0);
			if (bVar15 == 0)
			{
				bVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("group_pistol"), bVar22, 0);
				if (bVar15 == 0)
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(iVar0, joaat("weapon_shotgun_sawedoff"), 0, 0))
					{
						bVar15 = joaat("weapon_shotgun_sawedoff");
					}
				}
			}
		}
		if (bVar15 != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(iVar0, bVar15, 0, 0))
			{
				WEAPON::_GIVE_WEAPON_TO_PED_2(iVar0, bVar15, 0, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				WEAPON::_0xB190BCA3F4042F95(iVar0, bVar15, 10, 752097756);
				WEAPON::SET_PED_INFINITE_AMMO(iVar0, true, bVar15);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(iVar0, bVar15, true, 0, false, false);
		}
	}
	if (!func_489(iVar0, uParam4))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return true;
	}
	switch (uParam3->f_13)
	{
		case 0:
			break;
		case 1:
			if (PED::IS_PED_ON_FOOT(iVar0))
			{
				if (PED::_0xD5FE956C70FF370B(iVar0))
				{
					PED::_0x7DE9692C6F64CFE8(iVar0, false, 0, 1);
				}
			}
			else if (AITRANSPORT::_0xDC44F405A6B98D03(iVar0, 0))
			{
				AITRANSPORT::_0x8886D83A430537FD(iVar0, 4194336);
			}
			break;
		case 2:
			if (!PED::_0xD5FE956C70FF370B(iVar0))
			{
				PED::_0x7DE9692C6F64CFE8(iVar0, true, 0, 1);
			}
			break;
		case 3:
			if (!aggregate_func_927(iVar0, -1959848946))
			{
				if (ENTITY::_0x083D497D57B7400F(iVar0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
					bVar24 = true;
				}
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iVar0, uParam3->f_5.f_1, -1, 1, 0, 1, aggregate_func_2923(uParam4->f_6, 1), 0, false, 1, 0);
				PED::_0x2208438012482A1A(iVar0, false, false);
				if (bVar24)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				}
			}
			break;
		case 4:
			if (!aggregate_func_927(iVar0, joaat("SCRIPT_TASK_CARRIABLE")))
			{
				TASK::_0xF0B4F759F35CC7F5(iVar0, -2146271366, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar14), 0, 0);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar14))
				{
					ENTITY::_0x9587913B9E772D29(iVar0, 0);
				}
				PED::_0x2208438012482A1A(iVar0, false, false);
			}
			if (!PED::_0x3AA24CCC0D451379(iVar0))
			{
				return false;
			}
			break;
		case 6:
		case 7:
		case 8:
			if (!ENTITY::DOES_ENTITY_EXIST(iVar14))
			{
				return true;
			}
			if (!AITRANSPORT::_0x159EF5B6EDCE00E8(iVar0, iVar14) || (uParam3->f_13.f_4 != -2 && PED::_0x4E76CB57222A00E5(iVar0) != uParam3->f_13.f_4))
			{
				if (ENTITY::_0x083D497D57B7400F(iVar0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
				}
				AITRANSPORT::_0xE588B5A8A005CB5E(iVar0, iVar14, uParam3->f_13.f_4, 4194336);
				if (!AITRANSPORT::_0x159EF5B6EDCE00E8(iVar0, iVar14))
				{
					return false;
				}
			}
			break;
		case 5:
			if (!PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				func_490(iVar0, 0);
			}
			break;
	}
	return true;
}

void func_394(int iParam0, bool bParam1)
{
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, bParam1);
	ENTITY::SET_ENTITY_COLLISION(iParam0, !bParam1, false);
	ENTITY::SET_ENTITY_VISIBLE(iParam0, !bParam1);
}

int func_395(int* iParam0, var uParam1, var uParam2, char* sParam3)
{
	if (!aggregate_func_2923(uParam2->f_1, 0) && ENTITY::IS_ENTITY_DEAD(uParam1->f_1))
	{
		return 2;
	}
	return func_478(iParam0, sParam3);
}

void func_396(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		ENTITY::_0xC3ABCFBC7D74AFA5(uParam0->f_2, 6, 1);
	}
}

bool func_397(var uParam0, int* iParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, char* sParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	vector3 vVar8;
	vector3 vVar11;
	struct<10> Var14;

	iVar0 = uParam2->f_1;
	if (ENTITY::GET_ENTITY_TYPE(iVar0) == 1 && !bParam10)
	{
		vVar1 = { func_481(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)) };
	}
	else
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	}
	fVar4 = ENTITY::GET_ENTITY_HEADING(iVar0);
	iVar5 = func_124(uParam0->f_1.f_2);
	uParam2->f_5.f_1 = { vVar1 };
	uParam2->f_5.f_4 = fVar4;
	if (bParam9)
	{
		bVar6 = true;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, *(uParam5->f_1621[iVar5 /*3*/]), true) < 100f && aggregate_func_2923(uParam6->f_4, 0))
	{
		bVar6 = true;
	}
	if (aggregate_func_2923(uParam6->f_4, 1))
	{
		bVar7 = true;
	}
	if (!bVar6)
	{
		if (aggregate_func_2923(uParam6->f_4, 2))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1->f_1483.f_208, sParam7, &Var14, false, 0, 2))
			{
				if (bParam8)
				{
					vVar8 = { Var14 };
					vVar11 = { Var14.f_3 };
				}
				else
				{
					vVar8 = { Var14.f_6 };
					vVar11 = { Var14.f_9 };
				}
				if (!bVar7)
				{
					uParam2->f_5.f_1 = { vVar8 };
				}
				uParam2->f_5.f_4 = vVar11.z;
				bVar6 = true;
			}
		}
	}
	if (!bVar6)
	{
		if (!aggregate_func_4268(*uParam6))
		{
			if (!bVar7)
			{
				uParam2->f_5.f_1 = { *uParam6 };
			}
			uParam2->f_5.f_4 = uParam6->f_3;
			bVar6 = true;
		}
	}
	return bVar6;
}

int func_398(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 1;
	}
	iVar0 = ENTITY::GET_ENTITY_TYPE(uParam0->f_1);
	switch (iVar0)
	{
		case 1:
			return func_391(uParam0);
		case 2:
			if (VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(uParam0->f_1)))
			{
				return func_491(uParam0, iParam1);
			}
			else
			{
				return func_492(uParam0, iParam2);
			}
			break;
		case 3:
			return func_493(uParam0);
	}
	return 1;
}

bool func_399(var uParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	float fVar5;

	if (bParam3)
	{
		iVar0 = uParam0->f_2;
	}
	else
	{
		iVar0 = uParam0->f_1;
		if (uParam0->f_3 != 1)
		{
			return uParam0->f_3 != 0;
		}
	}
	bVar1 = ENTITY::_0x083D497D57B7400F(iVar0);
	if (bVar1)
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
	}
	if (aggregate_func_2923(uParam0->f_5, 1))
	{
		aggregate_func_30(iVar0, uParam0->f_5.f_1, uParam0->f_5.f_4, 1, 1073741824 /* Float: 2f */);
	}
	else
	{
		aggregate_func_30(iVar0, uParam0->f_5.f_1, uParam0->f_5.f_4, 2, 1073741824 /* Float: 2f */);
	}
	if (!aggregate_func_2923(uParam4->f_1, 2))
	{
		ENTITY::_0x9587913B9E772D29(iVar0, 1);
	}
	if (bParam3 && ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		PED::_0x2208438012482A1A(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), false, false);
	}
	if (bVar1)
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
	}
	ENTITY::_SET_ENTITY_SOMETHING(iVar0, true);
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar5 = ENTITY::GET_ENTITY_HEADING(iVar0);
	return true;
}

bool func_400(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam4)
	{
		iVar0 = uParam1->f_2;
	}
	else
	{
		iVar0 = uParam1->f_1;
		if (uParam1->f_3 != 1)
		{
			return uParam1->f_3 != 0;
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_4, 3) && ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
	{
		iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
		iVar2 = 9;
		if (VEHICLE::_0xFF5791B7639C2A46(iVar1, &iVar2))
		{
			WEAPON::_0x194D877FC5597B7D(iVar1, iVar2, uParam0->f_5, 1);
		}
	}
	return true;
}

void func_401(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_2, iParam4))
	{
		if (!aggregate_func_2923(uParam1->f_4, iParam2) && aggregate_func_2923(uParam0->f_1, 0))
		{
			aggregate_func_2882(&(uParam1->f_4), iParam2);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam1->f_1))
			{
				iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_1);
				VEHICLE::_0xD4F5EFB55769D272(iVar0, iParam5);
			}
		}
		if (!aggregate_func_2923(uParam1->f_4, iParam3))
		{
			aggregate_func_2882(&(uParam1->f_4), iParam3);
			iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_2);
			VEHICLE::_0xD4F5EFB55769D272(iVar1, iParam5);
		}
	}
}

int func_402(int* iParam0, var uParam1, int iParam2, var uParam3)
{
	var uVar0;

	if (!func_246(iParam0, uParam3, iParam2, 0, &uVar0, 0, 0))
	{
		return 2;
	}
	return func_478(iParam0, &uVar0);
}

char* func_409(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return func_375(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return func_496(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return func_497(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	return "";
}

int func_410(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_17[iVar0 /*12*/])) && &uParam0->f_17[iVar0 /*12*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_411(var uParam0, char* sParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_17[iVar0 /*12*/])) && MISC::ARE_STRINGS_EQUAL(&((uParam0->f_17[iVar0 /*12*/])->f_1), sParam1))
		{
			return &(uParam0->f_17[iVar0 /*12*/]);
		}
		iVar0++;
	}
	return 0;
}

void func_412(var uParam0, int iParam1)
{
	struct<12> Var0;
	int iVar12;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 14)
	{
		if (&uParam0->f_17[iVar12 /*12*/] == iParam1)
		{
			*(uParam0->f_17[iVar12 /*12*/]) = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_413(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_17[iVar0 /*12*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_420(var uParam0, char* sParam1)
{
	if (((!aggregate_func_4250(uParam0, 32) || func_504(uParam0)) || aggregate_func_4250(uParam0, 268435456)) && !aggregate_func_4250(uParam0, 65536))
	{
		aggregate_func_4241(&(uParam0->f_263), 256);
	}
}

void func_421(var uParam0, bool bParam1)
{
	var uVar0;

	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 9, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 9, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 7, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 7, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 8, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 8, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 10, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 10, bParam1);
	}
}

void func_424(var uParam0, char[16] cParam1)
{
	MemCopy(&(uParam0->f_192), {cParam1}, 16);
}

void func_425(var uParam0)
{
	int iVar0;
	struct<8> Var1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_225[iVar0 /*9*/]))
		{
			func_506(uParam0, uParam0->f_225[iVar0 /*9*/]);
		}
		iVar0++;
	}
	Var1 = { func_377() };
	func_506(uParam0, &Var1);
	Var1 = { func_295(uParam0) };
	func_506(uParam0, &Var1);
}

void func_434(var uParam0)
{
	bool bVar0;

	if (aggregate_func_5073(&bVar0))
	{
		if (aggregate_func_2823(bVar0, 0))
		{
			if (aggregate_func_2827(bVar0) == -525676072)
			{
				aggregate_func_5464(-1406972469, Global_35, 0, 0);
			}
			else
			{
				aggregate_func_5464(-1144282354, Global_35, 0, 0);
			}
		}
		if (*uParam0 == 0)
		{
			*uParam0 = bVar0;
		}
	}
}

void func_435(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;

	if (Global_1939168->f_6)
	{
		return;
	}
	Global_13 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		aggregate_func_1508(-1);
		aggregate_func_1509(-1);
	}
	if (!aggregate_func_4240(*uParam0, 8388608))
	{
		func_330(1);
	}
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!aggregate_func_4240(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!aggregate_func_4240(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!aggregate_func_4240(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (aggregate_func_4240(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!aggregate_func_4240(*uParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam1, 1);
	}
	if (!aggregate_func_4240(*uParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!aggregate_func_4240(*uParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!aggregate_func_4240(*uParam0, 4) && !aggregate_func_4240(*uParam0, 2))
	{
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(-1679307491);
	}
	if (!aggregate_func_4240(*uParam0, 2048))
	{
		func_514(0);
	}
	if (aggregate_func_4240(*uParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
	}
	if (aggregate_func_4240(*uParam0, 256))
	{
		WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
	}
	if (aggregate_func_4240(*uParam0, 8192))
	{
		func_515();
	}
	if (!aggregate_func_4240(*uParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!aggregate_func_4240(*uParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!aggregate_func_4240(*uParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_35, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Global_35));
			ENTITY::SET_ENTITY_VELOCITY(Global_35, 0f, 0f, 0f);
		}
		if (!aggregate_func_4240(*uParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_0xEE04C0AFD4EFAF0E(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (aggregate_func_6910() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (aggregate_func_4268(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						aggregate_func_832(&vVar3, 50, 10, 0, 0);
					}
					vVar3.f_2 = (vVar3.z + 10f);
					if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar3, &(vVar3.f_2), 1))
					{
					}
					PED::_0xED00D72F81CF7278(iVar7, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						aggregate_func_5267(2);
						aggregate_func_4748(-1);
						aggregate_func_8701(vVar3);
						aggregate_func_5267(aggregate_func_8727());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
					PED::_0x2208438012482A1A(Global_35, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar9 = PED::GET_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, 1, 0);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!aggregate_func_4240(*uParam0, 4096))
	{
		aggregate_func_1825(Global_35);
	}
	if (!aggregate_func_4240(*uParam0, 1048576))
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!aggregate_func_4240(*uParam0, 2097152) && !aggregate_func_4595(136))
	{
		if (aggregate_func_4934() || PED::_0x50F124E6EF188B22(Global_35))
		{
			aggregate_func_459(1);
		}
	}
	*uParam0 = 0;
}

void func_437(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (aggregate_func_4250(uParam0, 2048) && !aggregate_func_4268(aggregate_func_7120(uParam0)))
	{
		bVar0 = VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4);
		iVar1 = PED::_0x4C8B59171957BCF7(Global_35);
		if ((!ENTITY::IS_ENTITY_DEAD(iVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar1, uParam0->f_4, true, 0)) || aggregate_func_4250(uParam0, -2147483648))) && PED::GET_MOUNT(Global_35) != iVar1)
		{
			aggregate_func_30(iVar1, aggregate_func_7120(uParam0), aggregate_func_4360(uParam0), 2, 1073741824 /* Float: 2f */);
		}
		iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar2) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar2, uParam0->f_4, true, 0)) || aggregate_func_4250(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar2, true))
		{
			aggregate_func_30(iVar2, aggregate_func_7120(uParam0), aggregate_func_4360(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_438(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	if ((aggregate_func_4250(uParam0, 268435456) && !aggregate_func_4268(aggregate_func_7120(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { aggregate_func_7120(uParam0) };
			aggregate_func_30(iVar0, vVar1, aggregate_func_3018(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_439(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_268 = { vParam1 };
	uParam0->f_271 = iParam4;
	if (aggregate_func_4268(vParam1))
	{
		func_69(uParam0, 2048, 1);
	}
	else
	{
		aggregate_func_4254(uParam0, 2048);
		if (bParam5)
		{
			aggregate_func_4254(uParam0, -2147483648);
		}
	}
}

void func_440(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_17[iVar0 /*12*/])) && ENTITY::IS_ENTITY_A_PED(&(uParam0->f_17[iVar0 /*12*/]))) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_17[iVar0 /*12*/])) != Global_35)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_17[iVar0 /*12*/]));
			if (PED::IS_PED_HUMAN(iVar1))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_208, &((uParam0->f_17[iVar0 /*12*/])->f_1)))
				{
					if (!aggregate_func_4250(uParam0->f_17[iVar0 /*12*/], 8))
					{
						if (aggregate_func_2841(aggregate_func_2817(iVar1, 0, 1, 0)))
						{
							if (!func_530(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("weapon_unarmed"), true, 0, false, false);
							}
						}
						if (aggregate_func_2841(aggregate_func_2817(iVar1, 1, 1, 0)))
						{
							if (!func_530(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 1)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("weapon_unarmed"), true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_441(var uParam0, bool bParam1)
{
	WEAPON::_0x67E21ACC5C0C970C(Global_35, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_14)
		{
			PED::_0xD710A5007C2AC539(Global_35, -1229581779, 1);
		}
	}
	else if (!aggregate_func_4240(uParam0->f_264, 256))
	{
		aggregate_func_1559(Global_35, &(Global_1951131->f_1657.f_1[28 /*3*/]), 0, -735900586, 1, 1, 0, 1, 0, 0, 1);
		aggregate_func_4241(&(uParam0->f_264), 256);
	}
	Global_14 = !bParam1;
}

void func_443(var uParam0)
{
	StringCopy(&(uParam0->f_192), "", 128);
	func_535(uParam0);
	func_536(uParam0);
	func_537(uParam0);
}

void func_445(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		aggregate_func_6662(uParam0->f_17[iVar0 /*12*/], iParam1);
		iVar0++;
	}
}

void func_447(bool bParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(Global_26286))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_26286))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Global_26286);
		}
	}
	Global_26286 = -1;
	StringCopy(&Global_26288, "", 24);
	Global_13 = 0;
	if (bParam0)
	{
		aggregate_func_8139();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

void func_448(int iParam0)
{
	aggregate_func_8713();
	Global_1912968->f_1 = MISC::GET_GAME_TIMER();
	Global_1912968->f_2 = iParam0;
}

void func_449()
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
}

void func_467(vector3 vParam0)
{
	float fVar0;
	vector3 vVar1;

	if (!Global_1939168->f_6)
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, vParam0) };
		fVar0 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar0, 1065353216 /* Float: 1f */);
		CAM::_0x05BD5E4088B30A66(-180f, 180f);
	}
}

void func_468(vector3 vParam0)
{
	vector3 vVar0;
	float fVar3;

	if (!Global_1939168->f_6)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, vParam0) };
		fVar3 = MISC::ATAN((vVar0.z / BUILTIN::SQRT(((vVar0.y * vVar0.y) + (vVar0.x * vVar0.x)))));
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar3, 1f);
	}
}

int func_469(float fParam0)
{
	if (fParam0 == 0f)
	{
		return joaat("motionstate_idle");
	}
	if (fParam0 >= 1f && fParam0 < 2f)
	{
		return joaat("motionstate_walk");
	}
	if (fParam0 >= 2f && fParam0 < 3f)
	{
		return joaat("motionstate_run");
	}
	if (fParam0 == 3f)
	{
		return -1115154469;
	}
	return joaat("motionstate_idle");
}

char* func_471(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return "Arthur";
		case joaat("cs_abe"):
			return "Abe";
		case joaat("cs_aberdeenpigfarmer"):
			return "ABERDEENPIGFARMER";
		case joaat("cs_aberdeensister"):
			return "ABERDEENSISTER";
		case joaat("cs_abigailroberts"):
			return "AbigailRoberts";
		case joaat("cs_albertmason"):
			return "AlbertMason";
		case joaat("cs_archiedown"):
			return "ArchieDown";
		case joaat("cs_baptiste"):
			return "Baptiste";
		case joaat("cs_bartholomewbraithwaite"):
			return "BartholomewBraithwaite";
		case joaat("cs_beatenupcaptain"):
			return "CS_BEATENUPCAPTAIN";
		case joaat("cs_beaugray"):
			return "BeauGray";
		case joaat("cs_penelopebraithwaite"):
			return "PenelopeBraithwaite";
		case joaat("cs_billwilliamson"):
			return "BillWilliamson";
		case joaat("cs_braithwaiteservant"):
			return "BraithwaiteServant";
		case joaat("cs_catherinebraithwaite"):
			return "CatherineBraithwaite";
		case joaat("cs_charlessmith"):
			return "CharlesSmith";
		case joaat("cs_cigcardguy"):
			return "CS_CIGCARDGUY";
		case joaat("cs_dinoboneslady"):
			return "CS_DINOBONESLADY";
		case joaat("cs_cleet"):
			return "Cleet";
		case joaat("cs_colmodriscoll"):
			return "ColmODriscoll";
		case joaat("cs_creoleguy"):
			return "CreoleGuy";
		case joaat("cs_sddoctor_01"):
			return "SDDoctor_01";
		case joaat("cs_dalemaroney"):
			return "DaleMaroney";
		case joaat("cs_dutch"):
			return "Dutch";
		case joaat("cs_edithdown"):
			return "EdithDown";
		case joaat("cs_fussar"):
			return "Fussar";
		case joaat("cs_fishcollector"):
			return "cs_fishcollector";
		case joaat("cs_bronte"):
			return "Bronte";
		case joaat("cs_guidomartelli"):
			return "GuidoMartelli";
		case joaat("u_m_m_nbxbrontegoon_01"):
			return "U_M_M_NBXBRONTEGOON_01";
		case joaat("g_m_m_unibrontegoons_01"):
			return "G_M_M_UNIBRONTEGOONS_01";
		case joaat("cs_garethbraithwaite"):
			return "GarethBraithwaite";
		case joaat("cs_genstoryfemale"):
			return "GenStoryFemale";
		case joaat("cs_genstorymale"):
			return "GenStoryMale";
		case joaat("cs_leon"):
			return "Leon";
		case joaat("cs_geraldbraithwaite"):
			return "GeraldBraithwaite";
		case joaat("cs_hoseamatthews"):
			return "HoseaMatthews";
		case joaat("cs_jackmarston"):
			return "JackMarston";
		case joaat("cs_jackmarston_teen"):
			return "JackMarston_Teen";
		case joaat("cs_jamie"):
			return "Jamie";
		case joaat("cs_javierescuella"):
			return "JavierEscuella";
		case joaat("cs_jimcalloway"):
			return "JimCalloway";
		case joaat("cs_joe"):
			return "Joe";
		case joaat("cs_johnmarston"):
			return "JohnMarston";
		case joaat("cs_johnweathers"):
			return "CS_JOHNWEATHERS";
		case joaat("cs_josiahtrelawny"):
			return "JosiahTrelawny";
		case joaat("cs_karen"):
			return "Karen";
		case joaat("cs_mrsadler"):
			return "MrsAdler";
		case joaat("cs_kieran"):
			return "Kieran";
		case joaat("cs_leostrauss"):
			return "LeoStrauss";
		case joaat("cs_londonderryson"):
			return "LondonderrySon";
		case joaat("cs_marybeth"):
			return "MaryBeth";
		case joaat("cs_marylinton"):
			return "MaryLinton";
		case joaat("cs_micahbell"):
			return "MicahBell";
		case joaat("cs_mollyoshea"):
			return "MollyOshea";
		case joaat("cs_mrlinton"):
			return "CS_MrLinton";
		case joaat("cs_mrpearson"):
			return "MrPearson";
		case joaat("cs_mrslondonderry"):
			return "MrsLondonderry";
		case joaat("cs_mud2bigguy"):
			return "Mud2BigGuy";
		case joaat("cs_professorbell"):
			return "ProfessorBell";
		case joaat("cs_revswanson"):
			return "RevSwanson";
		case joaat("cs_samaritan"):
			return "CS_Samaritan";
		case joaat("cs_strdeputy_01"):
			return "StrDeputy_01";
		case joaat("cs_strdeputy_02"):
			return "StrDeputy_02";
		case joaat("cs_strsheriff_01"):
		case joaat("u_m_m_strsherriff_01"):
			return "StrSheriff_01";
		case joaat("cs_susangrimshaw"):
			return "SusanGrimshaw";
		case joaat("cs_tavishgray"):
			return "TavishGray";
		case joaat("cs_theodorelevin"):
			return "TheodoreLevin";
		case joaat("cs_thomasdown"):
			return "ThomasDown";
		case joaat("cs_tilly"):
			return "Tilly";
		case joaat("cs_uncle"):
			return "Uncle";
		case joaat("g_m_m_unicriminals_01"):
			return "G_M_M_UniCriminals_01";
		case joaat("g_m_m_uniduster_01"):
			return "G_M_M_UNIDUSTER_01";
		case joaat("cs_valsheriff"):
			return "CS_VALSHERIFF";
		case joaat("s_m_m_marshallsrural_01"):
			return "S_M_M_MARSHALLSRURAL_01";
		case joaat("u_m_o_vhtexoticshopkeeper_01"):
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
		case joaat("cs_sean"):
			return "Sean";
		case joaat("cs_lenny"):
			return "Lenny";
		case joaat("cs_hercule"):
			return "Hercule";
		case joaat("cs_creolecaptain"):
			return "CreoleCaptain";
		case joaat("u_m_m_creolecaptain_01"):
			return "U_M_M_CREOLECAPTAIN_01";
		case joaat("cs_ringmaster"):
			return "RingMaster";
		case joaat("u_m_m_valbartender_01"):
			return "U_M_M_VALBARTENDER_01";
		case joaat("a_m_m_emrfarmhand_01"):
			return "A_M_M_EMRFARMHAND_01";
		case joaat("a_m_m_grisurvivalist_01"):
			return "A_M_M_GriSurvivalist_01";
		case joaat("cs_lillymillet"):
			return "LillyMillet";
		case joaat("a_f_m_strtownfolk_01"):
			return "A_F_M_STRTOWNFOLK_01";
		case joaat("a_m_m_strtownfolk_01"):
			return "A_M_M_STRTOWNFOLK_01";
		case joaat("s_m_m_strlumberjack_01"):
			return "S_M_M_STRLUMBERJACK_01";
		case joaat("g_m_m_unicriminals_02"):
			return "G_M_M_UniCriminals_02";
		case joaat("g_m_m_unicornwallgoons_01"):
			return "G_M_M_UNICORNWALLGOONS_01";
		case joaat("a_m_m_nbxupperclass_01"):
			return "A_M_M_NBXUPPERCLASS_01";
		case joaat("a_f_m_nbxupperclass_01"):
			return "A_F_M_NBXUPPERCLASS_01";
		case joaat("a_m_m_valfarmer_01"):
			return "A_M_M_VALFARMER_01";
		case joaat("a_m_m_valtownfolk_01"):
			return "A_M_M_VALTOWNFOLK_01";
		case joaat("a_m_m_valtownfolk_02"):
			return "A_M_M_VALTOWNFOLK_02";
		case joaat("a_f_m_valtownfolk_01"):
			return "A_F_M_VALTOWNFOLK_01";
		case joaat("u_m_m_nbxbartender_01"):
			return "U_M_M_NBXBARTENDER_01";
		case joaat("cs_nbxexecuted"):
			return "NBXExecuted";
		case joaat("cs_rhodeputy_01"):
			return "RHODEPUTY_01";
		case joaat("u_m_m_rhdsheriff_01"):
			return "RHDSHERIFF_01";
		case joaat("cs_leighgray"):
			return "LeighGray";
		case -1038436471:
			return "Horse_01";
		case joaat("u_m_m_strgenstoreowner_01"):
			return "U_M_M_StrGenStoreOwner_01";
		case joaat("cs_tomdickens"):
			return "TomDickens";
		case joaat("cs_davidgeddes"):
			return "DavidGeddes";
		case joaat("cs_ansel_atherton"):
			return "ANSEL_ATHERTON";
		case joaat("cs_wrobel"):
			return "CS_Wrobel";
		case joaat("a_c_cow"):
			return "COW";
		case joaat("a_c_bull_01"):
			return "BULL";
		case joaat("cs_albertcakeesquire"):
			return "ALBERTCAKEESQUIRE";
		case joaat("u_m_o_blwgeneralstoreowner_01"):
			return "U_M_O_BLWGENERALSTOREOWNER_01";
		case joaat("a_c_dogcatahoulacur_01"):
			return "A_C_DOGCATAHOULACUR_01";
		case joaat("a_c_dogrufus_01"):
			return "A_C_DOGRUFUS_01";
		case joaat("a_c_doglion_01"):
			return "A_C_DOGLION_01";
		case joaat("cs_tigerhandler"):
			return "Handler";
		case joaat("cs_valauctionboss_01"):
			return "VALAUCTIONBOSS_01";
		case joaat("cs_nbxreceptionist_01"):
			return "NbxReceptionist_01";
		case joaat("u_m_m_bivforeman_01"):
			return "U_M_M_BiVForeman_01";
		case joaat("u_m_m_racforeman_01"):
			return "U_M_M_RACFOREMAN_01";
		case joaat("cs_chainprisoner_01"):
			return "CHAINPRISONER_01";
		case joaat("cs_chainprisoner_02"):
			return "CHAINPRISONER_02";
		case joaat("u_m_m_valpokerplayer_01"):
			return "U_M_M_ValPokerPlayer_01";
		case joaat("u_m_m_valpokerplayer_02"):
			return "U_M_M_ValPokerPlayer_02";
		case joaat("cs_duncangeddes"):
			return "DUNCANGEDDES";
		case joaat("cs_angusgeddes"):
			return "ANGUSGEDDES";
		case joaat("cs_evelynmiller"):
			return "EvelynMiller";
		case joaat("cs_sistercalderon"):
			return "SISTERCALDERON";
		case joaat("cs_edgarross"):
			return "EDGARROSS";
		case joaat("cs_wintonholmes"):
			return "U_M_M_GriSurvivalist_01";
		case joaat("u_f_m_rkshomesteadtenant_01"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case joaat("cs_rockyseven_widow"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case joaat("u_m_m_bht_strawberryduel"):
			return "U_M_M_BHT_STRAWBERRYDUEL";
		case joaat("u_m_m_rhdtrainstationworker_01"):
			return "StationWorker";
		case joaat("cs_levisimon"):
			return "LEVISIMON";
		case joaat("s_m_m_fussarhenchman_01"):
			return "S_M_M_GULFUSSARS_01";
		case joaat("a_c_donkey_01"):
			return "A_C_DONKEY_01";
		case joaat("a_m_m_guatownfolk_01"):
			return "S_M_M_ISPWORKER_01";
		case joaat("a_m_o_guatownfolk_01"):
			return "S_M_M_ISPWORKER_02";
		case joaat("u_m_o_valbartender_01"):
			return "U_M_O_ValBartender_01";
		case joaat("u_m_m_nbxbartender_02"):
			return "U_M_M_NBXBARTENDER_02";
		case joaat("cs_unidusterjail_01"):
			return "CS_UNIDUSTERJAIL_01";
		case joaat("a_m_m_rhdtownfolk_01"):
			return "A_M_M_RHDTOWNFOLK_01";
		case joaat("u_m_m_unibountyhunter_01"):
			return "U_M_M_UNIBOUNTYHUNTER_01";
		case joaat("u_m_m_unibountyhunter_02"):
			return "U_M_M_UNIBOUNTYHUNTER_02";
		case joaat("cs_brotherdorkins"):
			return "BrotherDorkins";
		case joaat("g_m_m_unibraithwaites_01"):
			return "G_M_M_UniBraithwaites_01";
		case joaat("a_m_m_gamhighsociety_01"):
			return "A_M_M_GAMHIGHSOCIETY_01";
		case joaat("u_m_m_strfreightstationowner_01"):
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
		case joaat("cs_eagleflies"):
			return "EagleFlies";
		case joaat("cs_rainsfall"):
			return "CS_RAINSFALL";
		case joaat("a_m_m_wapwarriors_01"):
			return "A_M_M_WapWarriors_01";
		case joaat("a_m_y_nbxstreetkids_01"):
			return "A_M_Y_NBXSTREETKIDS_01";
		case joaat("u_m_m_bht_shackescape"):
			return "U_M_M_BHT_SHACKESCAPE";
		case joaat("a_m_m_htlroughtravellers_01"):
			return "A_M_M_HTLROUGHTRAVELLERS_01";
		case joaat("cs_lemiuxassistant"):
			return "LemiuxAssistant";
		case joaat("p_keys01x"):
			return "p_keys01x";
		case joaat("cs_balloonoperator"):
			return "CS_BALLOONOPERATOR";
		case joaat("a_m_m_bivworker_01"):
			return "Worker1";
		case joaat("u_m_m_bht_mineforeman"):
			return "U_M_M_BHT_MINEFOREMAN";
		case joaat("a_m_m_nbxslums_01"):
			return "A_M_M_NbxSlums_01";
		case joaat("cs_sdpriest"):
			return "U_M_M_NBXPRIEST_01";
		case joaat("a_c_bear_01"):
			return "A_C_BEAR_01";
		case joaat("cs_marshall_thurwell"):
			return "MARSHALL_THURWELL";
		case joaat("cs_famousgunslinger_02"):
			return "CS_FAMOUSGUNSLINGER_02";
		case joaat("cs_sd_streetkid_01"):
			return "cs_sd_streetkid_01";
		case joaat("cs_sd_streetkid_02"):
			return "cs_sd_streetkid_02";
		case joaat("cs_obediahhinton"):
			return "ObediahHinton";
		case joaat("cs_poisonwellshaman"):
			return "PoisonWellShaman";
		case joaat("cs_cooper"):
			return "A_M_M_EMRFARMHAND_01";
		case joaat("u_m_m_bht_benedictallbright"):
			return "u_m_m_bht_benedictallbright";
		case joaat("cs_jules"):
			return "Jules";
		case joaat("cs_mrdevon"):
			return "MRDEVON";
		case joaat("cs_mrwayne"):
			return "MRWAYNE";
		case joaat("cs_paytah"):
			return "PAYTAH";
		case joaat("cs_valdeputy_01"):
			return "CS_VALDEPUTY_01";
		case 167491564:
			return "MES_SADIE5_MALES_01^1";
		case joaat("a_m_m_nbxdockworkers_01"):
			return "A_M_M_NBXDOCKWORKERS_01";
		case joaat("u_m_m_valsheriff_01"):
			return "U_M_M_VALSHERIFF_01";
		case joaat("p_c_horse_01"):
			return "P_C_HORSE_01";
	}
	return "";
}

void func_474(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;

	iVar5 = PED::_GET_METAPED_TYPE(iParam0);
	iVar6 = 2026485318;
	if (iVar5 == 1)
	{
		iVar6 = 24043185;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1951131->f_1776.f_1[iVar0 /*3*/]) = { vVar2 };
		iVar0++;
	}
	if (!aggregate_func_5272(&(Global_1951131->f_1776), &uVar1, bParam1, -1, 0, 0, iVar6, 0))
	{
		return;
	}
	func_551(iParam0, &(Global_1951131->f_1776));
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (&Global_1951131->f_1776.f_1[iVar0 /*3*/] == &Global_1951131->f_81[iVar0 /*12*/] || &Global_1951131->f_1776.f_1[iVar0 /*3*/] == 0)
		{
		}
		else
		{
			func_552(&(Global_1951131->f_1776.f_1[iVar0 /*3*/]), iVar5);
		}
		iVar0++;
	}
}

int func_475(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;

	iVar1 = PED::_GET_METAPED_TYPE(iParam0);
	iVar2 = 2026485318;
	if (iVar1 == 1)
	{
		iVar2 = 24043185;
	}
	iVar3 = 0;
	while (iVar3 < 39)
	{
		*(Global_1951131->f_1895.f_1[iVar3 /*3*/]) = { vVar4 };
		iVar3++;
	}
	if (!aggregate_func_5272(&(Global_1951131->f_1895), &uVar0, bParam1, -1, 0, 0, iVar2, 0))
	{
		return 0;
	}
	func_551(iParam0, &(Global_1951131->f_1895));
	iVar3 = 0;
	while (iVar3 < 39)
	{
		if (!aggregate_func_4753(iVar3, 8))
		{
		}
		else
		{
			aggregate_func_2100(iParam0, iVar3, 1);
		}
		iVar3++;
	}
	aggregate_func_525(&(Global_1951131->f_1895), iParam0, 1, 8, 1, 0, 1, 0);
	return 1;
}

bool func_476()
{
	int iVar0;

	if (Global_1951131->f_2795 <= 0)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Global_1951131->f_2795)
	{
		if (!PED::_0xB0B2C6D170B0E8E5((Global_1951131->f_2795.f_1[iVar0 /*2*/])->f_1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_478(int* iParam0, char* sParam1)
{
	if (MISC::_0x375F5870A7B8BEC1(sParam1))
	{
		return 2;
	}
	if (!ANIMSCENE::_0x25557E324489393C(iParam0->f_1483.f_208))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x95531A4A20CCE7BC(iParam0->f_1483.f_208, 0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(iParam0->f_1483.f_208, sParam1))
	{
		return 2;
	}
	return 1;
}

bool func_479(int* iParam0, int iParam1, bool bParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	iVar0 = ENTITY::GET_ENTITY_TYPE(iParam1);
	switch (iVar0)
	{
		case 1:
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (PED::IS_PED_A_PLAYER(iVar2))
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (bParam2)
					{
						iVar3 = (iParam0->f_14[iVar1 /*21*/])->f_1.f_2;
					}
					else
					{
						iVar3 = (iParam0->f_14[iVar1 /*21*/])->f_1.f_1;
					}
					if (iParam1 != iVar3)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 966820754;
						return true;
					}
					iVar1++;
				}
			}
			else if (ENTITY::_0x9A100F1CF4546629(iVar2))
			{
				iVar1 = 0;
				while (iVar1 < 20)
				{
					if (bParam2)
					{
						iVar4 = (iParam0->f_500[iVar1 /*13*/])->f_2;
					}
					else
					{
						iVar4 = (iParam0->f_500[iVar1 /*13*/])->f_1;
					}
					if (iParam1 != iVar4)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = -1821507459;
						return true;
					}
					iVar1++;
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 20)
				{
					if (bParam2)
					{
						iVar5 = (iParam0->f_99[iVar1 /*20*/])->f_2;
					}
					else
					{
						iVar5 = (iParam0->f_99[iVar1 /*20*/])->f_1;
					}
					if (iParam1 != iVar5)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 1627542854;
						return true;
					}
					iVar1++;
				}
			}
			break;
		case 2:
			iVar6 = ENTITY::GET_ENTITY_MODEL(iParam1);
			if (VEHICLE::IS_THIS_MODEL_A_TRAIN(iVar6))
			{
				iVar1 = 0;
				while (iVar1 < 1)
				{
					if (bParam2)
					{
						iVar7 = (iParam0->f_1089[iVar1 /*14*/])->f_2;
					}
					else
					{
						iVar7 = (iParam0->f_1089[iVar1 /*14*/])->f_1;
					}
					if (iParam1 != iVar7)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 465509728;
						return true;
					}
					iVar1++;
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 10)
				{
					if (bParam2)
					{
						iVar8 = (iParam0->f_761[iVar1 /*13*/])->f_2;
					}
					else
					{
						iVar8 = (iParam0->f_761[iVar1 /*13*/])->f_1;
					}
					if (iParam1 != iVar8)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 1135537454;
						return true;
					}
					iVar1++;
				}
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (bParam2)
		{
			iVar9 = (iParam0->f_1104[iVar1 /*15*/])->f_2;
		}
		else
		{
			iVar9 = (iParam0->f_1104[iVar1 /*15*/])->f_1;
		}
		if (iParam1 != iVar9)
		{
		}
		else
		{
			*iParam3 = iVar1;
			*uParam4 = 0;
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_480(int iParam0, int* iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (iParam1->f_1465 == -1)
	{
		return -1;
	}
	if (iParam1->f_1465 >= 24)
	{
		iParam1->f_1465 = -1;
	}
	iVar0 = iParam1->f_1465;
	iParam1->f_1465++;
	iVar1 = ENTITY::GET_ENTITY_TYPE(iParam0);
	(iParam1->f_1104[iVar0 /*15*/])->f_1 = iParam0;
	(iParam1->f_1104[iVar0 /*15*/])->f_13 = iParam2;
	(iParam1->f_1104[iVar0 /*15*/])->f_14 = iParam3;
	return iVar0;
}

Vector3 func_481(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar3, &vVar6);
	fVar9 = MISC::ABSF(((vVar6.z - vVar3.z) * 0.5f));
	vVar0.f_2 = (vVar0.z - fVar9);
	return vVar0;
}

bool func_483(int iParam0, int iParam1, int* iParam2)
{
	bool bVar0;

	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return false;
	}
	if (PED::_0xA0BC8FAED8CFEB3C(iParam1))
	{
		if (!aggregate_func_2923(*iParam2, 5))
		{
			PED::_0xD710A5007C2AC539(iParam1, -1229581779, 1);
			bVar0 = true;
			aggregate_func_2882(iParam2, 5);
		}
		if (bVar0)
		{
			PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, false);
			return false;
		}
		return true;
	}
	return false;
}

bool func_484(int iParam0)
{
	return ((PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) || PED::IS_PED_ON_MOUNT(iParam0)) || (!PED::IS_PED_RAGDOLL(iParam0) && PED::IS_PED_ON_VEHICLE(iParam0, false)));
}

bool func_485(int* iParam0, int iParam1, int iParam2, var uParam3)
{
	if (iParam1 < 0)
	{
		return false;
	}
	switch (iParam2)
	{
		case 966820754:
			if (iParam1 >= 4)
			{
				return false;
			}
			*uParam3 = { (iParam0->f_14[iParam1 /*21*/])->f_1 };
			return true;
		case 1627542854:
			if (iParam1 >= 20)
			{
				return false;
			}
			*uParam3 = { *(iParam0->f_99[iParam1 /*20*/]) };
			return true;
		case -1821507459:
			if (iParam1 >= 20)
			{
				return false;
			}
			*uParam3 = { *(iParam0->f_500[iParam1 /*13*/]) };
			return true;
		case 465509728:
			if (iParam1 >= 1)
			{
				return false;
			}
			*uParam3 = { *(iParam0->f_1089[iParam1 /*14*/]) };
			return true;
		case 1135537454:
			if (iParam1 >= 10)
			{
				return false;
			}
			*uParam3 = { *(iParam0->f_761[iParam1 /*13*/]) };
			return true;
		case 422112462:
			if (iParam1 >= 10)
			{
				return false;
			}
			*uParam3 = { *(iParam0->f_892[iParam1 /*13*/]) };
			return true;
		case -230450704:
			if (iParam1 >= 5)
			{
				return false;
			}
			*uParam3 = { *(iParam0->f_1023[iParam1 /*13*/]) };
			return true;
		case 0:
			if (iParam1 >= 24)
			{
				return false;
			}
			*uParam3 = { *(iParam0->f_1104[iParam1 /*15*/]) };
			return true;
		default:
			break;
	}
	return false;
}

bool func_486(int* iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam1 < 0)
	{
		return false;
	}
	switch (iParam2)
	{
		case 0:
			if (iParam1 >= 24)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = (iParam0->f_1104[iParam1 /*15*/])->f_2;
			}
			else
			{
				*iParam4 = (iParam0->f_1104[iParam1 /*15*/])->f_1;
			}
			break;
		case 966820754:
			if (iParam1 >= 4)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = (iParam0->f_14[iParam1 /*21*/])->f_1.f_2;
			}
			else
			{
				*iParam4 = (iParam0->f_14[iParam1 /*21*/])->f_1.f_1;
			}
			break;
		case 1627542854:
			if (iParam1 >= 20)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = (iParam0->f_99[iParam1 /*20*/])->f_2;
			}
			else
			{
				*iParam4 = (iParam0->f_99[iParam1 /*20*/])->f_1;
			}
			break;
		case -1821507459:
			if (iParam1 >= 20)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = (iParam0->f_500[iParam1 /*13*/])->f_2;
			}
			else
			{
				*iParam4 = (iParam0->f_500[iParam1 /*13*/])->f_1;
			}
			break;
		case 1135537454:
			if (iParam1 >= 10)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = (iParam0->f_761[iParam1 /*13*/])->f_2;
			}
			else
			{
				*iParam4 = (iParam0->f_761[iParam1 /*13*/])->f_1;
			}
			break;
		case 422112462:
			if (iParam1 >= 10)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = (iParam0->f_892[iParam1 /*13*/])->f_2;
			}
			else
			{
				*iParam4 = (iParam0->f_892[iParam1 /*13*/])->f_1;
			}
			break;
		case -230450704:
			if (iParam1 >= 5)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = (iParam0->f_1023[iParam1 /*13*/])->f_2;
			}
			else
			{
				*iParam4 = (iParam0->f_1023[iParam1 /*13*/])->f_1;
			}
			break;
		case 465509728:
			if (iParam1 >= 1)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = (iParam0->f_1089[iParam1 /*14*/])->f_2;
			}
			else
			{
				*iParam4 = (iParam0->f_1089[iParam1 /*14*/])->f_1;
			}
			break;
	}
	return ENTITY::DOES_ENTITY_EXIST(*iParam4);
}

bool func_489(int iParam0, var uParam1)
{
	bool bVar0;

	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return false;
	}
	if (PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		if (PED::_0xFB4891BD7578CDC1(iParam0, 300733975))
		{
			PED::_0xD710A5007C2AC539(iParam0, 300733975, 1);
			bVar0 = true;
		}
		if (PED::_0xFB4891BD7578CDC1(iParam0, 2112357414))
		{
			PED::_0xD710A5007C2AC539(iParam0, 2112357414, 1);
			bVar0 = true;
		}
		if (aggregate_func_2923(uParam1->f_6, 2))
		{
			if (PED::_0xFB4891BD7578CDC1(iParam0, 1963323202))
			{
				PED::_0xD710A5007C2AC539(iParam0, 1963323202, 1);
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, false);
			return false;
		}
		return true;
	}
	return false;
}

void func_490(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iParam1, 0);
	}
}

int func_491(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 1;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0->f_1);
	if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(iVar0))
	{
		return 1;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_1);
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		bVar5 = VEHICLE::_0x3C9628A811CBD724(iVar1);
		iVar6 = VEHICLE::_0xC239DBD9A57D2A71(iParam1, vVar2, bVar5, false, 0, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			return 1;
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iVar6, true);
		func_394(iVar6, 1);
		uParam0->f_2 = iVar6;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		iVar7 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_2);
		iVar8 = VEHICLE::_0x635423D55CA84FC8(iParam1);
		iVar9 = 0;
		while (iVar9 < iVar8)
		{
			iVar10 = VEHICLE::GET_TRAIN_CARRIAGE(iVar7, iVar9);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar10))
			{
			}
			else if (!ENTITY::IS_ENTITY_VISIBLE(iVar10))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iVar10, true);
				func_394(iVar10, 1);
			}
			iVar9++;
		}
		if (VEHICLE::_0xBD3C4A2ED509205E(iVar7))
		{
			return 1;
		}
	}
	return 0;
}

int func_492(var uParam0, int iParam1)
{
	struct<6> Var0;
	int iVar13;
	vector3 vVar14;
	float fVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	int iVar31;
	int iVar32;

	Var0.f_5 = -1082130432;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 1;
	}
	iVar13 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_1);
	vVar14 = { ENTITY::GET_ENTITY_COORDS(iVar13, true, false) };
	vVar14.f_1 = (vVar14.y + 100f);
	fVar17 = ENTITY::GET_ENTITY_HEADING(iVar13);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		iVar18 = ENTITY::GET_ENTITY_MODEL(iVar13);
		iVar19 = VEHICLE::CREATE_VEHICLE(iVar18, vVar14, fVar17, false, false, false, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar19))
		{
			return 1;
		}
		ENTITY::SET_ENTITY_COORDS(iVar19, vVar14, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iVar19, fVar17);
		ENTITY::SET_ENTITY_INVINCIBLE(iVar19, true);
		VEHICLE::_0x8268B098F6FCA4E2(iVar19, VEHICLE::_0xA44D65E6C624526F(iVar13));
		VEHICLE::COPY_VEHICLE_DAMAGES(iVar13, iVar19);
		func_181(iParam1, *uParam0, 1135537454, &uVar20, &uVar21, &iVar22);
		if (iVar22 != 0)
		{
			PROPSET::_0xD80FAF919A2E56EA(iVar19, iVar22);
		}
		func_394(iVar19, 1);
		uParam0->f_2 = iVar19;
	}
	if (!VEHICLE::_IS_DRAFT_VEHICLE(iVar13))
	{
		return 1;
	}
	else if (!aggregate_func_2923(uParam0->f_4, 2))
	{
		if (!VEHICLE::_0xA19447D83294E29F(iVar13, &iVar23, &iVar24))
		{
			return 0;
		}
		iVar25 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_2);
		bVar26 = true;
		if (!VEHICLE::_0xA19447D83294E29F(iVar25, &iVar23, &iVar24))
		{
			bVar26 = false;
		}
		else if (iVar24 < iVar23)
		{
			bVar26 = false;
		}
		iVar27 = 0;
		while (iVar27 < 6)
		{
			iVar28 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar25, iVar27);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar28))
			{
			}
			else
			{
				iVar29 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar13, iVar27);
				bVar30 = ENTITY::IS_ENTITY_VISIBLE(iVar28);
				if (bVar30)
				{
					func_394(iVar28, 1);
					ENTITY::SET_ENTITY_INVINCIBLE(iVar28, true);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar29) && !PED::IS_PED_INJURED(iVar29))
				{
					if (bVar30)
					{
						PED::CLONE_PED_TO_TARGET(iVar29, iVar28);
					}
					if (!func_489(iVar28, &Var0))
					{
						bVar26 = false;
					}
				}
			}
			iVar27++;
		}
		if (bVar26)
		{
			iVar27 = 0;
			while (iVar27 < 6)
			{
				iVar31 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar25, iVar27);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar31))
				{
				}
				else
				{
					iVar32 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar13, iVar27);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar32) || PED::IS_PED_INJURED(iVar32))
					{
						aggregate_func_581(&iVar31);
					}
				}
				iVar27++;
			}
			aggregate_func_2882(&(uParam0->f_4), 2);
			return 1;
		}
	}
	return 0;
}

int func_493(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 1;
	}
	iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_1);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar1.f_1 = (vVar1.y + 100f);
	fVar4 = ENTITY::GET_ENTITY_HEADING(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		iVar5 = ENTITY::GET_ENTITY_MODEL(uParam0->f_1);
		iVar6 = OBJECT::CREATE_OBJECT(iVar5, vVar1, false, false, true, false, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			return 1;
		}
		ENTITY::SET_ENTITY_COORDS(iVar6, vVar1, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iVar6, fVar4);
		ENTITY::SET_ENTITY_INVINCIBLE(iVar6, true);
		func_394(iVar6, 1);
		uParam0->f_2 = iVar6;
	}
	return 1;
}

char* func_496(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_567(iVar0);
}

char* func_497(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("canoe"):
			return "CANOE";
		case joaat("wagon02x"):
			return "WAGON02X";
		case joaat("wagon04x"):
			return "WAGON04X";
		case joaat("wagon05x"):
			return "WAGON05X";
		case joaat("chuckwagon000x"):
			return "CHUCKWAGON000X";
		case joaat("wagoncircus02x"):
			return "WAGONCIRCUS02X";
		case joaat("coach2"):
			return "COACH2";
		case joaat("privatecoalcar01x"):
			return "PRIVATECOALCAR01X";
		case joaat("northpassenger01x"):
			return "NORTHPASSENGER01X";
		case joaat("privatesteamer01x"):
			return "PRIVATESTEAMER01X";
		case joaat("privatedining01x"):
			return "PRIVATEDINING01X";
		case joaat("utilliwag"):
			return "UTILLIWAG";
		case joaat("skiff"):
			return "SKIFF";
		case joaat("handcart"):
			return "HANDCART";
		case joaat("rowboatswamp"):
			return "ROWBOATSWAMP";
		case joaat("rowboatswamp02"):
			return "ROWBOATSWAMP02";
	}
	return "";
}

bool func_504(var uParam0)
{
	struct<8> Var0;
	struct<8> Var8;

	Var0 = { aggregate_func_8131(uParam0) };
	Var8 = { func_295(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(&Var0, &Var8);
}

void func_506(var uParam0, char* sParam1)
{
	struct<8> Var0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	Var0 = { aggregate_func_8131(uParam0) };
	if ((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam1) && ANIMSCENE::_0xA9016536015DE29D(uParam0->f_208, sParam1)) && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_208, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_208, sParam1);
	}
}

void func_514(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &bVar3, false, iVar4, true))
		{
			if (aggregate_func_2841(bVar3) && WEAPON::_0x705BE297EEBDB95D(bVar3))
			{
				if (bParam0)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, bVar3) < WEAPON::_0xD3750CCC00635FC2(bVar3) * 4)
					{
						WEAPON::_0x106A811C6D3035F3(Global_35, WEAPON::_0x5C2EA6C44F515F34(bVar3), (WEAPON::_0xD3750CCC00635FC2(bVar3) * 4 - WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_35, bVar3))), 752097756);
					}
				}
				iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, bVar3);
				if (iVar0 > WEAPON::_0xD3750CCC00635FC2(bVar3))
				{
					iVar1 = WEAPON::_0xD3750CCC00635FC2(bVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					WEAPON::SET_AMMO_IN_CLIP(Global_35, bVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
}

void func_515()
{
	bool bVar0;

	bVar0 = aggregate_func_2817(Global_35, 9, 1, 0);
	if (aggregate_func_2841(bVar0))
	{
		return;
	}
	bVar0 = aggregate_func_2817(Global_35, 7, 1, 0);
	if (aggregate_func_2841(bVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar0, true, 8, false, false);
	}
	bVar0 = aggregate_func_2817(Global_35, 0, 1, 0);
	if (aggregate_func_2841(bVar0) && WEAPON::_0x0556E9D2ECF39D01(bVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar0, true, 9, false, false);
		return;
	}
	bVar0 = aggregate_func_2817(Global_35, 1, 1, 0);
	if (aggregate_func_2841(bVar0) && WEAPON::_0x0556E9D2ECF39D01(bVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar0, true, 9, false, false);
		return;
	}
	bVar0 = aggregate_func_2817(Global_35, 18, 1, 0);
	if (aggregate_func_2841(bVar0) && WEAPON::_0x0556E9D2ECF39D01(bVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar0, true, 9, false, false);
		return;
	}
	bVar0 = func_578();
	if (aggregate_func_2841(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bVar0, 0, 1))
		{
			aggregate_func_57(Global_35, bVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar0, true, 9, false, false);
		}
		return;
	}
	bVar0 = aggregate_func_8119(3072, 0);
	if (aggregate_func_2841(bVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bVar0, 0, 1))
		{
			aggregate_func_57(Global_35, bVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar0, true, 9, false, false);
		}
	}
}

bool func_530(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_17[iVar0 /*12*/])) && &uParam0->f_17[iVar0 /*12*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_535(var uParam0)
{
	struct<8> Var0;

	uParam0->f_217 = { Var0 };
}

void func_536(var uParam0)
{
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	aggregate_func_4243(&(uParam0->f_263), 4194304);
}

void func_537(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(uParam0->f_225[iVar0 /*9*/], "", 64);
		iVar0++;
	}
}

void func_551(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	int iVar4;

	iVar4 = PED::_0x90403E8107B60E81(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		bVar1 = PED::_0x77BA37622E22023B(iParam0, iVar0, 1, &uVar3, &uVar2);
		switch (aggregate_func_2827(bVar1))
		{
			case -1961188419:
				uParam1->f_1[0 /*3*/] = bVar1;
				break;
			case 1033860813:
				uParam1->f_1[26 /*3*/] = bVar1;
				break;
			case 1589583617:
				uParam1->f_1[27 /*3*/] = bVar1;
				break;
			case 153430294:
				uParam1->f_1[28 /*3*/] = bVar1;
				break;
			case -130218241:
			case 629735563:
				uParam1->f_1[8 /*3*/] = bVar1;
				break;
			case -709696437:
			case -702721097:
				uParam1->f_1[9 /*3*/] = bVar1;
				break;
			case -1839668642:
			case -1415811768:
				uParam1->f_1[1 /*3*/] = bVar1;
				break;
			case -986397773:
				uParam1->f_1[2 /*3*/] = bVar1;
				break;
			case -1674363638:
				uParam1->f_1[3 /*3*/] = bVar1;
				break;
			case 231148558:
				uParam1->f_1[4 /*3*/] = bVar1;
				break;
			default:
				break;
				break;
		}
		iVar0++;
	}
}

void func_552(int iParam0, int iParam1)
{
	if (Global_1951131->f_2795 >= 156)
	{
		return;
	}
	(Global_1951131->f_2795.f_1[Global_1951131->f_2795 /*2*/])->f_1 = PED::_0xF6D9E1F3560CBF8E(iParam1, iParam0, 0, 1, 0);
	Global_1951131->f_2795.f_1[Global_1951131->f_2795 /*2*/] = 1;
	Global_1951131->f_2795++;
}

char* func_567(int iParam0)
{
	switch (iParam0)
	{
		case joaat("p_cs_ledger01x"):
			return "P_CS_LEDGER01X";
		case joaat("p_cs_rope01x"):
			return "P_CS_ROPE01X";
		case joaat("p_door01x"):
			return "P_DOOR01X";
		case joaat("p_door03x"):
			return "P_DOOR03X";
		case joaat("p_door12x"):
			return "p_door12x";
		case joaat("p_door13x"):
			return "P_DOOR13X";
		case joaat("p_door45x"):
			return "p_door45x";
		case joaat("p_chairvictorian01x"):
			return "p_chairvictorian01x";
		case joaat("p_crate03x"):
			return "p_crate03x";
		case joaat("p_cs_jug01x"):
			return "p_cs_jug01x";
		case joaat("p_cs_wagon02x"):
			return "p_cs_wagon02x";
		case joaat("p_door37x"):
			return "P_DOOR37X";
		case joaat("p_door_val_genstore"):
			return "p_door_val_genstore";
		case joaat("p_doorstrawberry01x"):
			return "p_doorstrawberry01x";
		case joaat("p_doorfrench01l"):
			return "p_doorfrench01l";
		case joaat("p_doorfrench01r"):
			return "p_doorfrench01r";
		case joaat("p_doormansiongate01x"):
			return "p_doormansiongate01x";
		case joaat("p_doornbd39x"):
			return "p_doornbd39x";
		case joaat("p_doorsaloon02x"):
			return "p_doorsaloon02x";
		case joaat("p_doorvh_saloon_l"):
			return "P_DOORVH_SALOON_L";
		case joaat("p_doorvh_saloon_r"):
			return "P_DOORVH_SALOON_R";
		case joaat("p_cigarlit01x"):
			return "p_cigarlit01x";
		case joaat("p_pebble01x"):
			return "p_pebble01x";
		case joaat("p_cs_rope03x"):
			return "p_cs_rope03x";
		case joaat("p_cards01x"):
			return "P_CARDS01X";
		case joaat("p_cs_pokerhand01x"):
			return "P_CS_POKERHAND01X";
		case joaat("p_cs_pokerhand02x"):
			return "P_CS_POKERHAND02X";
		case joaat("p_cs_holdemhand01x"):
			return "P_CS_HOLDEMHAND01X";
		case joaat("p_cs_holdemhand02x"):
			return "P_CS_HOLDEMHAND02X";
		case joaat("p_cs_bucket01x"):
			return "P_CS_BUCKET01X";
		case joaat("p_cs_syringe01x"):
			return "p_cs_syringe01x";
		case joaat("p_bottlejd01x"):
			return "p_bottleJD01x";
		case joaat("p_rag02x"):
			return "p_rag02x";
		case joaat("p_magneto02x"):
			return "p_magneto02x";
		case joaat("p_magneto01x"):
			return "p_magneto01x";
		case joaat("p_cs_wantedalive01x"):
			return "p_cs_wantedalive01x";
		case joaat("p_cs_rcridethelightning"):
			return "P_CS_RCRIDETHELIGHTNING";
		case joaat("p_pen01x"):
			return "p_pen01x";
		case joaat("p_cs_letter01a_x"):
			return "p_cs_letter01a_x";
		case joaat("p_cs_electricchair01x"):
			return "p_cs_electricchair01x";
		case joaat("p_cs_generator01x"):
			return "p_cs_generator01x";
		case joaat("p_cs_electrichelmet01x"):
			return "p_cs_electricHelmet01x";
		case joaat("p_cs_gag01x"):
			return "p_cs_gag01x";
		case joaat("p_door_sha_man01x"):
			return "p_door_sha_man01x";
		case joaat("p_stool01x"):
			return "p_stool01x";
		case joaat("p_stool02x"):
			return "p_stool02x";
		case joaat("p_jugglingball01x"):
			return "p_jugglingball01x";
		case joaat("p_chair02x"):
			return "p_chair02x";
		case joaat("p_chair04x"):
			return "p_chair04x";
		case joaat("p_crate15x"):
			return "p_crate15x";
		case joaat("p_cleaver01x"):
			return "p_cleaver01x";
		case joaat("p_bottle003x"):
			return "p_bottle003x";
		case joaat("p_cs_book02x"):
			return "p_cs_book02x";
		case joaat("p_stickydymt_single"):
			return "p_stickydymt_single";
		case joaat("p_cs_fusedynamite01x"):
			return "p_cs_fusedynamite01x";
		case joaat("p_dynamite01x"):
			return "p_dynamite01x";
		case joaat("p_cs_fusespool01x"):
			return "p_cs_fusespool01x";
		case joaat("p_cs_detonator01x"):
			return "p_cs_detonator01x";
		case joaat("p_cs_bedrollclsd01x"):
			return "p_cs_bedrollclsd01x";
		case joaat("p_cigarette_cs01x"):
			return "P_CIGARETTE_CS01X";
		case joaat("p_matches01x"):
			return "P_MATCHES01X";
		case joaat("p_matchstick01x"):
			return "P_MATCHSTICK01X";
		case joaat("p_woodenchair01x"):
			return "P_WOODENCHAIR01X";
		case joaat("p_chair_crate02x"):
			return "P_CHAIR_CRATE02X";
		case joaat("p_knittingneedle01x"):
			return "p_knittingneedle01x";
		case joaat("p_knittingsquare01x"):
			return "p_knittingsquare01x";
		case joaat("p_cs_rabbitmeat01x"):
			return "p_cs_rabbitMeat01x";
		case joaat("p_cs_rabbitmeat02x"):
			return "p_cs_rabbitMeat02x";
		case joaat("p_bottle03x"):
			return "p_bottle03x";
		case joaat("p_cs_billstack01x"):
			return "p_cs_billstack01x";
		case joaat("p_cs_billsingle01x"):
			return "p_cs_billSingle01x";
		case joaat("p_binoculars01x"):
			return "p_binoculars01x";
		case joaat("p_doorrhosheriff02x"):
			return "p_doorrhosheriff02x";
		case joaat("p_barstool01x"):
			return "P_BARSTOOL01X";
		case joaat("p_cs_shotglass01x"):
			return "p_cs_shotglass01x";
		case joaat("p_lamp18x"):
			return "p_lamp18x";
		case joaat("p_clock06x"):
			return "p_clock06x";
		case joaat("p_bottle02x"):
			return "p_bottle02x";
		case joaat("p_cs_lootsack01x"):
			return "p_cs_lootSack01x";
		case joaat("p_winebox01x"):
			return "p_wineBox01x";
		case joaat("p_strongbox01x"):
			return "p_strongBox01x";
		case joaat("p_clocktable02x"):
			return "P_CLOCKTABLE02X";
		case joaat("p_gen_statue03b"):
			return "p_gen_statue03b";
		case joaat("p_stoolwinter01x"):
			return "P_STOOLWINTER01X";
		case joaat("p_cs_barrag01x"):
			return "P_CS_BARRAG01X";
		case joaat("p_plate01x"):
			return "P_PLATE01X";
		case joaat("p_knife01x"):
			return "P_KNIFE01X";
		case joaat("p_knife02x"):
			return "P_KNIFE02X";
		case joaat("p_cs_catfish_whole01x"):
			return "P_CS_CATFISH_WHOLE01X";
		case joaat("p_cs_catfish_whole01bx"):
			return "P_CS_CATFISH_WHOLE01BX";
		case joaat("p_woodwhittle01x"):
			return "P_WOODWHITTLE01X";
		case joaat("p_stickfirepoker01x"):
			return "P_STICKFIREPOKER01X";
		case joaat("p_cs_woodpile01x"):
			return "P_CS_WOODPILE01X";
		case joaat("p_fork01x"):
			return "P_FORK01X";
		case joaat("p_knife04x"):
			return "P_KNIFE04X";
		case joaat("p_knife03x"):
			return "p_knife03x";
		case joaat("p_cs_bottleslim01x"):
			return "P_CS_BOTTLESLIM01X";
		case joaat("p_cs_blanket01x"):
			return "P_CS_BLANKET01X";
		case joaat("p_bedrollclosed01x"):
			return "P_BEDROLLCLOSED01X";
		case joaat("p_cs_kindling01x"):
			return "P_CS_KINDLING01X";
		case joaat("p_cigarthin01x"):
			return "P_CIGARTHIN01X";
		case joaat("p_door_wglass01x"):
			return "p_door_wglass01x";
		case joaat("p_broom02x"):
			return "p_broom02x";
		case joaat("p_amb_clipboard_01"):
			return "P_AMB_CLIPBOARD_01";
		case joaat("p_chair07x"):
			return "P_CHAIR07X";
		case joaat("p_cs_cratetnt01x"):
			return "p_cs_cratetnt01x";
		case joaat("p_cs_flourbag01x"):
			return "p_cs_flourbag01x";
		case joaat("p_cs_supplies01x"):
			return "p_cs_supplies01x";
		case joaat("p_cs_supplies02x"):
			return "p_cs_supplies02x";
		case joaat("p_cs_supplies03x"):
			return "p_cs_supplies03x";
		case joaat("p_door04x"):
			return "p_door04x";
		case joaat("p_door11x"):
			return "p_door11x";
		case joaat("p_doorrhosaloon01_l"):
			return "p_doorrhosaloon01_l";
		case joaat("p_doorrhosaloon01_r"):
			return "p_doorrhosaloon01_r";
		case joaat("p_val_gate2m02x"):
			return "P_VAL_GATE2M02X";
		case joaat("p_cs_stmdnky01x"):
			return "P_CS_STMDNKY01X";
		case joaat("p_cs_hookpulley01x"):
			return "P_CS_HOOKPULLEY01X";
		case joaat("p_chair_cs05x"):
			return "P_CHAIR_CS05X";
		case joaat("p_chair18x"):
			return "P_CHAIR_18X";
		case joaat("p_chair19x"):
			return "P_CHAIR19X";
		case joaat("p_chair20x"):
			return "P_CHAIR20X";
		case joaat("p_chair05x"):
			return "P_CHAIR05X";
		case joaat("p_chair22x"):
			return "p_chair22x";
		case joaat("p_glass01x"):
			return "p_glass01x";
		case joaat("p_diningchairs01x"):
			return "P_DININGCHAIRS01X";
		case joaat("p_windsorchair03x"):
			return "P_WINDSORCHAIR03X";
		case joaat("p_windsorchair02x"):
			return "P_WINDSORCHAIR02X";
		case joaat("p_door_val_jail02x"):
			return "p_door_val_jail02x";
		case joaat("p_cratetnt01x"):
			return "P_CRATETNT01X";
		case joaat("p_cratetnt02x"):
			return "P_CRATETNT02X";
		case joaat("p_moneystack01x"):
			return "P_MONEYSTACK01X";
		case joaat("p_axe01x"):
			return "P_AXE01X";
		case joaat("p_hoe01x"):
			return "P_HOE01X";
		case joaat("p_shovel01x"):
			return "P_SHOVEL01X";
		case joaat("p_shovel04x"):
			return "P_SHOVEL04X";
		case joaat("p_broom01x"):
			return "P_BROOM01X";
		case joaat("p_pitchfork01x"):
			return "P_PITCHFORK01X";
		case joaat("p_scythe01x"):
			return "P_SCYTHE01X";
		case joaat("p_skiff02x"):
			return "P_SKIFF02x";
		case joaat("p_door_nbx_doc01x_l"):
			return "p_door_nbx_doc01x_l";
		case joaat("p_door_nbx_doc01x_r"):
			return "p_door_nbx_doc01x_r";
		case joaat("p_cs_camera"):
			return "p_cs_camera";
		case joaat("p_cs_cameratripod"):
			return "p_cs_cameratripod";
		case joaat("p_cs_camerabag01x"):
			return "p_cs_camerabag01x";
		case joaat("p_cameraflash01x"):
			return "p_cameraflash01x";
		case joaat("p_cs_shutterrelease"):
			return "p_cs_shutterrelease";
		case joaat("rowboatswamp"):
			return "rowboatswamp";
		case joaat("p_chair25x"):
			return "P_CHAIR25X";
		case joaat("p_doorbrait01bx"):
			return "P_DOORBRAIT01BX";
		case joaat("p_cs_map01x"):
			return "P_CS_MAP01X";
		case joaat("p_hammer03x"):
			return "p_hammer03x";
		case joaat("p_cs_nailbarrel01x"):
			return "p_cs_nailbarrel01x";
		case joaat("p_cs_book04x"):
			return "p_cs_book04x";
		case joaat("p_cs_fan01x"):
			return "p_cs_Fan01x";
		case joaat("p_cs_ledgersmall01x"):
			return "p_cs_ledgerSmall01x";
		case joaat("p_cs_envelope01x"):
			return "p_cs_envelope01x";
		case joaat("p_wrappedmeat01x"):
			return "p_wrappedmeat01x";
		case joaat("p_cs_letter02x"):
			return "P_CS_LETTER02X";
		case joaat("p_cs_book03x"):
			return "p_cs_book03x";
		case joaat("p_cs_giftbox01x"):
			return "p_cs_giftBox01x";
		case joaat("p_boiler01x"):
			return "p_boiler01x";
		case joaat("p_boiler02x"):
			return "p_boiler02x";
		case joaat("p_mugcoffee01x"):
			return "p_mugCoffee01x";
		case joaat("p_glasstallbeer01x"):
			return "p_glasstallbeer01x";
		case joaat("p_pitcher02x"):
			return "p_pitcher02x";
		case joaat("p_tray03x"):
			return "p_tray03x";
		case joaat("p_sit_chairwicker01b"):
			return "p_sit_chairwicker01b";
		case -449688053:
			return "S_INV_ORLEANDER01CX";
		case -703216761:
			return "S_INV_ORLEANDER01DX";
		case joaat("p_ladle02x"):
			return "P_LADLE02X";
		case joaat("p_cs_pot01x"):
			return "P_CS_POT01X";
		case joaat("p_chairdining03x"):
			return "P_CHAIRDINING03X";
		case joaat("p_spoon01x"):
			return "P_SPOON01X";
		case joaat("p_bowl03x"):
			return "P_BOWL03X";
		case joaat("p_cs_bridecatalogue01x"):
			return "P_CS_BRIDECATALOGUE01X";
		case joaat("p_jewelrybox02bx"):
			return "P_JEWELRYBOX02BX";
		case joaat("p_cs_letterfolded01x"):
			return "P_CS_LETTERFOLDED01X";
		case joaat("p_cs_arthurhat01x"):
			return "P_CS_ARTHURHAT01X";
		case joaat("p_oar03x"):
			return "P_OAR03X";
		case joaat("p_door_val_bankvault"):
			return "P_DOOR_VAL_BANKVAULT";
		case joaat("p_door_combank01x"):
			return "P_DOOR_COMBANK01X";
		case joaat("p_cs_donation01x"):
			return "P_CS_DONATION01X";
		case joaat("p_door_nbx_bank03x_r"):
			return "p_door_nbx_bank03x_R";
		case joaat("p_door_nbx_bank03x_l"):
			return "p_door_nbx_bank03x_L";
		case joaat("p_camp_plate_02x"):
			return "p_camp_plate_02x";
		case joaat("p_stewplate02x"):
			return "p_stewplate02x";
		case joaat("p_cs_log01x"):
			return "p_cs_log01x";
		case joaat("p_ndb_hotelplank01x"):
			return "p_ndb_hotelplank01x";
		case joaat("p_glass06x"):
			return "p_glass06x";
		case joaat("p_cs_rag01x"):
			return "p_cs_rag01x";
		case joaat("p_inkwell01x"):
			return "p_inkwell01x";
		case joaat("p_cigar02x"):
			return "p_cigar02x";
		case joaat("p_bottlebeer01x"):
			return "p_bottleBeer01x";
		case joaat("p_beermugglass01x"):
			return "p_beermugglass01x";
		case joaat("p_nutbowl01x"):
			return "p_nutBowl01x";
		case joaat("p_cs_sacklarge01x"):
			return "p_cs_sacklarge01x";
		case joaat("p_cs_dressbox01x"):
			return "p_cs_dressbox01x";
		case joaat("p_bell05x"):
			return "p_bell05x";
		case joaat("p_woodendeskchair01x"):
			return "p_woodendeskchair01x";
		case joaat("p_chair06x"):
			return "p_chair06x";
		case joaat("p_jug01x"):
			return "p_jug01x";
		case -1907186363:
			return "S_INV_MEDICINE01X";
		case 2067968977:
			return "S_INV_MEDICINE_FTY";
		case -434431529:
			return "S_INV_Milkweed01bx";
		case joaat("p_bottleslim01x"):
			return "p_bottleslim01x";
		case joaat("p_cs_journal01x"):
			return "p_cs_journal01x";
		case joaat("p_mortarpestle02x"):
			return "p_mortarpestle02x";
		case 197307092:
			return "s_inv_burdock01dx";
		case joaat("p_cs_ropelegsplit"):
			return "p_cs_ropeLegSplit";
		case joaat("p_cs_ropehandssplit"):
			return "p_cs_ropeHandsSplit";
		case joaat("p_fishingpole01x"):
			return "p_fishingpole01x";
		case joaat("p_fishingpole02x"):
			return "P_FISHINGPOLE02X";
		case joaat("p_cs_flowernecklace"):
			return "p_cs_flowernecklace";
		case joaat("p_cs_flowers01x"):
			return "P_CS_FLOWERS01X";
		case -1018099626:
			return "s_inv_yarrow01cx";
		case joaat("p_cs_fishingpolebag01x"):
			return "P_CS_FISHINGPOLEBAG01X";
		case joaat("p_stick02x"):
			return "P_STICK02X";
		case joaat("p_cs_sock01x"):
			return "P_CS_SOCK01X";
		case joaat("p_door_val_bank00_rx"):
			return "P_DOOR_VAL_BANK00_RX";
		case joaat("p_door_val_bank00_lx"):
			return "P_DOOR_VAL_BANK00_RX";
		case joaat("p_can10x"):
			return "p_can10x";
		case joaat("p_cs_rabbitgut"):
			return "p_cs_rabbitgut";
		case joaat("p_cs_rabbitheadless"):
			return "p_cs_rabbitheadless";
		case joaat("p_cs_rabbitfeetless"):
			return "p_cs_rabbitfeetless";
		case joaat("p_kettle03x"):
			return "p_kettle03x";
		case -804436865:
			return "s_che_woodbin01x";
		case joaat("s_lootablepoorcase"):
			return "s_lootablepoorcase";
		case joaat("p_cs_bookhardcv01x"):
			return "P_CS_BOOKHARDCV01X";
		case joaat("p_letterbundle_01x"):
			return "P_LETTERBUNDLE_01X";
		case joaat("p_letterenvelope_cs01x"):
			return "P_LETTERENVELOPE_CS01X";
		case joaat("p_package08x"):
			return "P_PACKAGE08X";
		case joaat("p_cigarbox02x"):
			return "P_CIGARBOX02X";
		case joaat("p_crucifix02x"):
			return "p_crucifix02x";
		case joaat("p_bottlecrate01x"):
			return "p_bottleCrate01x";
		case joaat("p_can05x"):
			return "p_can05x";
		case joaat("p_cs_suitcase04x"):
			return "p_cs_suitcase04x";
		case joaat("p_cs_bagstrauss01x"):
			return "p_cs_bagstrauss01x";
		case joaat("p_bottle008x"):
			return "P_BOTTLE008X";
		case joaat("p_bottle009x"):
			return "P_BOTTLE009X";
		case joaat("p_bottle010x"):
			return "P_BOTTLE010X";
		case joaat("p_pocketmirror01x"):
			return "p_pocketMirror01x";
		case joaat("p_cigarette01x"):
			return "P_CIGARETTE01X";
		case joaat("p_traveltrunk02x"):
			return "P_TRAVELTRUNK02X";
		case joaat("p_chairwhite01x"):
			return "P_CHAIRWHITE01X";
		case joaat("p_journal_open01x"):
			return "P_JOURNAL_OPEN01X";
		case joaat("p_table42_cs"):
			return "p_table42_cs";
		case joaat("p_cs_newspaper_02x"):
			return "p_cs_newspaper_02x";
		case joaat("p_cs_potatoslice01x"):
			return "P_CS_POTATOSLICE01X";
		case -1035439448:
			return "S_APLSD_LOG";
		case 1410968406:
			return "S_APLSD_HRSATT";
		case joaat("p_spittoon01x"):
			return "p_spittoon01x";
		case joaat("p_woodbowl01x"):
			return "p_woodbowl01x";
		case joaat("p_pencil01x"):
			return "p_pencil01x";
		case joaat("p_spoonmid01x"):
			return "P_SPOONMID01X";
		case joaat("p_pan01x"):
			return "P_PAN01X";
		case joaat("p_pipe01x"):
			return "P_Pipe01x";
		case joaat("p_cs_railroadbond01x"):
			return "p_cs_railroadbond01x";
		case joaat("p_sharpeningstone01x"):
			return "p_sharpeningstone01x";
		case joaat("p_treestump02x"):
			return "p_treestump02x";
		case joaat("p_plate17x"):
			return "p_plate17x";
		case joaat("p_cs_newspaper_01x"):
			return "p_cs_newspaper_01x";
		case joaat("p_sadiehat01x"):
			return "p_sadiehat01x";
		case joaat("p_door_bla_jail_l_01x"):
			return "p_door_bla_jail_l_01x";
		case joaat("p_door_bla_jail_r_01x"):
			return "p_door_bla_jail_r_01x";
		case joaat("p_mashedpotato02x"):
			return "p_mashedPotato02x";
	}
	return "";
}

int func_578()
{
	if (!aggregate_func_2841(Global_1939168->f_39))
	{
		return joaat("weapon_unarmed");
	}
	return Global_1939168->f_39;
}

int func_631(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<4> Var4;
	bool bVar18;

	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = aggregate_func_4240(iParam1, 128);
	if (aggregate_func_2842("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		bVar3 = false;
		while (bVar3 < iVar2)
		{
			if (!aggregate_func_2840(&Var4, bVar3, iVar1, iVar2))
			{
			}
			else if (!aggregate_func_2841(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4) && !WEAPON::_0xC4DEC3CA8C365A5D(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if (((WEAPON::_0x0556E9D2ECF39D01(Var4.f_4) && (!WEAPON::_0xC75386174ECE95D5(Var4.f_4) || aggregate_func_4240(iParam1, 16))) && (!WEAPON::_0x6AD66548840472E5(Var4.f_4) || aggregate_func_4240(iParam1, 4))) && (!aggregate_func_2910(Var4.f_4) || aggregate_func_4240(iParam1, 8)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			bVar3++;
		}
		aggregate_func_2837(iVar1);
	}
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	return iVar0;
}


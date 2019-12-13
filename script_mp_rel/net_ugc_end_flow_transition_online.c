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
			func_4();
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
	func_8(32, *uParam0);
	func_9();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_10();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_39, 394, 47);
	func_11(NETWORK::_0xBA24095EA96DFE17(&Local_39), 394, "sServerBD");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_433, 161, 48);
	func_12(NETWORK::_0x690806BC83BC8CA2(Local_433[0 /*5*/]), 161, "sClientBD");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_594, 385, 49);
	func_12(NETWORK::_0x690806BC83BC8CA2(Local_594[0 /*12*/]), 385, "sCutscenePlayerBD");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_979, 1217, 50);
	func_12(NETWORK::_0x690806BC83BC8CA2(Local_979[0 /*38*/]), 1217, "sVotingPlayerBD");
	while (!NETWORK::_0x5D10B3795F3FC886() && !func_2())
	{
		BUILTIN::WAIT(0);
	}
	while (!func_13() && !func_2())
	{
		if (!func_14(&uLocal_36))
		{
			func_15(&uLocal_36, 1, 0);
		}
		BUILTIN::WAIT(0);
	}
}

int func_2()
{
	if (func_16(Global_390004->f_6, Global_390004->f_7))
	{
		return 1;
	}
	if (Local_39 == 5)
	{
		return 1;
	}
	return 0;
}

void func_3()
{
	bLocal_32 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
	iLocal_33 = NETWORK::PARTICIPANT_ID_TO_INT();
}

void func_4()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar0 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar1);
		switch (iVar0)
		{
			case -507840394:
				func_17(iVar1);
				break;
		}
		iVar1++;
	}
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
		func_26(&Local_2196, 12);
	}
	func_27(&Local_2196, Local_594[iLocal_33 /*12*/]);
	func_28();
}

void func_8(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_29();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	iVar1 = MISC::GET_GAME_TIMER();
	iVar2 = NETWORK::NETWORK_GET_TIMEOUT_TIME();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (MISC::GET_GAME_TIMER() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			func_29();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				
				case 1:
					func_29();
					break;
				
				case 2:
					func_29();
					break;
				
				case 4:
					func_29();
					break;
				
				case 3:
					func_29();
					break;
				
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_29();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_29();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_29();
		}
		if (func_30() == 0)
		{
			if (func_31())
			{
				func_29();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_29();
	}
	return 1;
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
	func_34(&Local_2196);
}

int func_11(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_12(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_13()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_14(&uLocal_36) && func_35(&uLocal_36, 1, 0) > 20000)
	{
		return 1;
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
				return 0;
			}
			iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE((*Global_3407872)[iVar0 /*7*/]);
			if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
			{
				return 0;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
			{
				return 0;
			}
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_14(var uParam0)
{
	return uParam0->f_1;
}

void func_15(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

int func_16(bool bParam0, var uParam1)
{
	int iVar0;
	
	if (Global_1572887->f_12)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (uParam1 && NETWORK::_0xF2CBC969C4F090C7())
		{
		}
		else if (uParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (uParam1 && &Global_1572887 < 39)
		{
		}
		else
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				return 1;
			
			case 1:
				return 1;
			
			case 2:
				if (!bParam0)
				{
					return 1;
				}
				break;
			
			case 4:
				return 1;
			
			case 3:
				return 1;
			
			default:
				return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_17(int iParam0)
{
	var uVar0;
	
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &uVar0, 4))
	{
		return;
	}
}

int func_18(int iParam0)
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
			return 0;
		}
		iVar0++;
	}
	return 1;
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

int func_20()
{
	switch (Global_3407872->f_225)
	{
		case 1:
			return func_36();
		
		default:
			break;
	}
	return 1;
	return 0;
}

int func_21()
{
	int iVar0;
	
	if (!func_25())
	{
		return 1;
	}
	if (!func_37())
	{
		return 0;
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
	iVar0 = func_39(func_38(), 1);
	if (iVar0 == -1)
	{
		(Local_433[iLocal_33 /*5*/])->f_3 = 0;
	}
	(Local_433[iLocal_33 /*5*/])->f_4 = iVar0;
	return 1;
}

void func_22()
{
	var uVar0;
	int iVar5;
	
	if (!func_25())
	{
		return;
	}
	if (!func_40())
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

int func_23()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_25())
	{
		return 1;
	}
	if (!func_40())
	{
		return 1;
	}
	bVar0 = func_44(255);
	bVar1 = ENTITY::IS_ENTITY_DEAD(Global_35);
	bVar2 = Global_1275329->f_29.f_3 == 2;
	if ((!bVar0 && !bVar1) && bVar2)
	{
		return 1;
	}
	return 0;
}

int func_24()
{
	func_45();
	switch (Global_3407872->f_225)
	{
		case 1:
			return func_46();
		
		default:
			break;
	}
	return 1;
	return 0;
}

bool func_25()
{
	return (Global_3407872->f_226 == 3 || Global_3407872->f_226 == 2);
}

void func_26(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_27(int iParam0, int iParam1)
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
	if (func_48(&(iParam0->f_1483)))
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

void func_29()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_30()
{
	return Global_1572887->f_13;
}

bool func_31()
{
	return Global_1051202->f_8;
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

void func_34(int iParam0)
{
	func_52(iParam0);
	func_53(&(iParam0->f_1776));
}

int func_35(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME());
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(*uParam0, MISC::GET_GAME_TIMER());
}

int func_36()
{
	var uVar0;
	bool bVar33;
	bool bVar34;
	int iVar35;
	int iVar36;
	
	uVar0 = 32;
	bVar33 = func_56(Local_39.f_2[0 /*33*/], 0, &Local_594, &uVar0, Global_3407872->f_227[0 /*2270*/], &(Local_39.f_61), &Local_979, 11475/*func_54*/, 11483/*func_55*/);
	while (iVar35 < 6)
	{
		iVar36 = Local_39.f_1;
		switch (Local_39.f_1)
		{
			case 0:
				Local_39.f_388 = { func_57() };
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
	return (func_61() && &Global_1275117 == 1);
}

int func_38()
{
	return Global_1275117->f_200;
}

int func_39(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
		{
			return -1;
		}
	}
	return ((*Global_1275475)[iParam0 /*86*/])->f_5.f_12;
}

bool func_40()
{
	return Local_39.f_392 != -1;
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
	func_62(4);
	iVar0 = *uParam0;
	if (iVar0 > 4)
	{
		return;
	}
	func_63(2, 0, 1);
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
	func_65(0);
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

bool func_44(int iParam0)
{
	return func_66(1, iParam0);
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
		func_68(4);
		return;
	}
	switch (iLocal_35)
	{
		case 0:
			func_68(1);
			break;
		
		case 1:
			AUDIO::PREPARE_MUSIC_EVENT(sVar0);
			func_68(2);
			break;
		
		case 2:
			if (CAM::IS_SCREEN_FADED_IN())
			{
				func_68(3);
			}
			break;
		
		case 3:
			AUDIO::TRIGGER_MUSIC_EVENT(sVar0);
			func_68(4);
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
		bVar0 = func_71(&(Local_39.f_2), 1, &Local_2196, &Local_594, iLocal_33, iLocal_33, &uVar1, &(Local_39.f_61), &Local_979, &(Global_3407872->f_227), 12700/*func_70*/, 11483/*func_55*/, 0);
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
					if (func_72())
					{
						func_73(1);
						func_74(1);
						func_75(1);
						func_76(1);
						func_77(*((Global_3407872->f_227[0 /*2270*/])->f_1621[Local_39.f_388.f_2 /*3*/]), ((Global_3407872->f_227[0 /*2270*/])->f_2056[Local_39.f_388.f_2 /*26*/])->f_16, 1);
					}
					func_15(&uLocal_36, 1, 0);
					iVar35 = 3;
				}
				break;
			
			case 3:
				if (func_78(255) != 1 || (func_35(&uLocal_36, 1, 0) > 100 && func_78(255) == 1))
				{
					func_79(&(Global_3407872->f_2499), 4);
					iVar35 = 4;
				}
				break;
			
			case 4:
				if (func_78(255) == 1)
				{
					iVar35 = 1;
				}
				break;
			
			case 1:
				if ((func_80(Global_3407872->f_2499, 1) && func_81(Local_594[iLocal_33 /*12*/])) && ANIMSCENE::_0x25557E324489393C(Local_2196.f_1483.f_208))
				{
					func_79(&((Local_433[iLocal_33 /*5*/])->f_1), 1);
					iVar35 = 2;
				}
				break;
			
			case 2:
				if (func_82(Local_594[iLocal_33 /*12*/]))
				{
					if (!func_80(uLocal_34, 1))
					{
						func_83(0, 0);
						func_79(&uLocal_34, 1);
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
	return !func_84(*iParam0, 12);
}

bool func_48(var uParam0)
{
	return ANIMSCENE::_0x25557E324489393C(uParam0->f_208);
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
	func_34(iParam0);
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
	func_85(0);
	Global_1048584 = 0;
}

void func_53(int iParam0)
{
	func_86(iParam0);
	func_87(iParam0);
	func_88(iParam0);
}

void func_54(var uParam0, var uParam1, var uParam2)
{
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

Vector3 func_57()
{
	vector3 vVar0;
	
	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	return vVar0;
}

int func_58(var uParam0, var uParam1)
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
		return 0;
	}
	if (iVar1 == 0)
	{
		*uParam1 = 1;
		return 1;
	}
	*uParam0 = -1;
	if (*uParam0 == -1)
	{
		*uParam0 = &iVar2[MISC::GET_RANDOM_INT_IN_RANGE(0, func_98(iVar1, 0, 7))];
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
	return 1;
}

int func_59(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6)
{
	if (iParam1 < 0 || iParam1 >= 8)
	{
		return 0;
	}
	if (!func_99(vParam2, 1))
	{
		return 0;
	}
	if (func_100(uParam0))
	{
		return 0;
	}
	if (func_101(uParam0->f_4, vParam2) && iParam5 == uParam0->f_2)
	{
		return 1;
	}
	uParam0->f_4 = { vParam2 };
	uParam0->f_2 = iParam5;
	uParam0->f_3 = iParam6;
	return 1;
}

int func_60(int iParam0)
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
		else if (!func_80((Local_433[iVar0 /*5*/])->f_1, iParam0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_61()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070355->f_3;
}

void func_62(int iParam0)
{
	Global_1275117->f_1 = iParam0;
}

int func_63(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	((*Global_1275475)[PLAYER::PLAYER_ID() /*86*/])->f_5[iParam0] = iParam1;
	return 1;
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

void func_65(bool bParam0)
{
	func_102(128);
	func_103(1);
	if (bParam0)
	{
		func_102(1024);
	}
}

int func_66(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_104(&(Global_1099293->f_4), iVar0, 5);
	}
	if (iParam1 == func_105())
	{
		return func_104(&(Global_1099293->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1273882->f_22[iParam1])
	{
		return func_104(&(((*Global_1097609)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

char* func_67()
{
	if (Global_3407872->f_226 == 1)
	{
		return "MP_BH_MISSION_COMPLETE_MUSIC";
	}
	return "";
}

void func_68(int iParam0)
{
	iLocal_35 = iParam0;
}

void func_69(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
	if (((iParam1 == 512 && iParam2) && ANIMSCENE::_0x25557E324489393C(uParam0->f_208)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_208))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_208);
	}
}

void func_70(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_79(&(Global_3407872->f_2499), 2);
			break;
		
		case 7:
			func_106();
			break;
		
		case 2:
			func_107();
			break;
	}
}

int func_71(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, bool bParam12)
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
	if (func_99(((*iParam3)[iParam4 /*12*/])->f_1, 1) && ((*iParam3)[iParam4 /*12*/])->f_1 == 1)
	{
		func_110(uParam0, iParam2, (*iParam3)[iParam4 /*12*/], uParam9);
		return func_111(uParam0, iParam2, iParam3, iParam4, iParam5, uParam7, uParam8, uParam9, iParam10, iParam11, bParam12);
	}
	return 0;
}

int func_72()
{
	if (func_25())
	{
		return 0;
	}
	return 1;
}

void func_73(bool bParam0)
{
	if (!bParam0)
	{
		func_112(18);
	}
	else
	{
		func_113(18);
	}
}

void func_74(bool bParam0)
{
	if (!bParam0)
	{
		func_112(17);
	}
	else
	{
		func_113(17);
	}
}

void func_75(bool bParam0)
{
	if (!bParam0)
	{
		func_112(24);
	}
	else
	{
		func_113(24);
	}
}

void func_76(bool bParam0)
{
	if (bParam0)
	{
		func_113(125);
	}
	else
	{
		func_112(125);
	}
}

void func_77(vector3 vParam0, var uParam3, bool bParam4)
{
	if (func_114(vParam0, uParam3))
	{
		func_115(1, bParam4);
	}
}

int func_78(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099293->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1273882->f_22[iParam0])
	{
		return ((*Global_1097609)[iParam0 /*51*/])->f_1;
	}
	return 26;
}

void func_79(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_80(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_81(var uParam0)
{
	if (!func_116(uParam0))
	{
		return 0;
	}
	if (uParam0->f_8 != 3)
	{
		return 0;
	}
	return 1;
}

bool func_82(var uParam0)
{
	if (!func_116(uParam0))
	{
		return false;
	}
	return uParam0->f_4 == 10;
}

void func_83(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_117(48);
	}
	if (bParam1)
	{
		func_117(50);
	}
	func_118(47);
	func_117(51);
	func_117(3);
}

bool func_84(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_85(int iParam0)
{
	Global_1048585 = iParam0;
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

int func_89(var uParam0)
{
	if (!func_99(uParam0->f_4, 1))
	{
		return 0;
	}
	if (uParam0->f_2 != 3)
	{
		return 0;
	}
	func_119(&(uParam0->f_29), 0, 1);
	return 1;
}

int func_90(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)
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
					else if (func_121(uParam0, iParam1, (*uParam2)[iVar2 /*12*/]) && ((*uParam2)[iVar2 /*12*/])->f_4 > 1)
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
					return 0;
				}
				return 1;
			}
		}
	}

int func_91(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (*uParam2 != *uParam3)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_122(uParam0->f_7[iVar0 /*5*/]);
		iVar0++;
	}
	if (!NETWORK::_0x31DAD2CD6D49546E(SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		uParam0->f_7[0 /*5*/] = PLAYER::PLAYER_ID();
		(uParam0->f_7[0 /*5*/])->f_2 = uParam3[0];
		if (func_123(&(uParam0->f_7[0 /*5*/]), (*uParam2)[0 /*12*/], uParam4))
		{
			func_79(&((uParam0->f_7[0 /*5*/])->f_1), 1);
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
			else if (((*uParam2)[iVar0 /*12*/])->f_4 <= 1 || ((*uParam2)[iVar0 /*12*/])->f_4 > 2)
			{
			}
			else
			{
				uParam0->f_7[iVar1 /*5*/] = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				if (func_123(&(uParam0->f_7[iVar1 /*5*/]), (*uParam2)[iVar0 /*12*/], uParam4))
				{
					func_79(&((uParam0->f_7[iVar1 /*5*/])->f_1), 1);
				}
				iVar1++;
			}
			iVar0++;
		}
	}
	iVar2 = func_124(uParam0->f_4.f_2);
	if (iVar1 > 1)
	{
		func_125(&(uParam0->f_7), *(uParam4->f_1621[iVar2 /*3*/]));
	}
	return 1;
}

int func_92(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (&uParam0->f_7[iVar0 /*5*/] == 255)
		{
		}
		else
		{
			(uParam0->f_7[iVar0 /*5*/])->f_3 = func_126(PLAYER::GET_PLAYER_PED(&(uParam0->f_7[iVar0 /*5*/])), uParam1, &uParam2);
		}
		iVar0++;
	}
	return 1;
}

int func_93(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	if (!func_80(uParam2->f_18, 256))
	{
		func_127(uParam0, uParam2, uParam4, &uVar1);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar6 = &uVar1[iVar0];
			if (iVar6 < 0 || iVar6 >= 4)
			{
			}
			else
			{
				(uParam0->f_7[iVar6 /*5*/])->f_4 = iVar0;
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
	return 1;
}

int func_94(var uParam0, int iParam1, var uParam2, var uParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar0 = func_80(uParam3->f_18, 1024);
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
		{
		}
		else if (!func_121(uParam0, iParam1, (*uParam2)[iVar1 /*12*/]))
		{
		}
		else if (!bVar0)
		{
			if (func_80(((*uParam2)[iVar1 /*12*/])->f_5, 2))
			{
			}
			else if (((*uParam2)[iVar1 /*12*/])->f_4 < 8)
			{
				return 0;
			}
			iVar1++;
			iVar3 = func_35(&(uParam0->f_29), 0, 1);
			iVar4 = func_132((uParam3->f_20 - iVar3), 350);
			func_15(&(uParam0->f_31), 0, 1);
			func_133(&(uParam0->f_31), iVar4);
			return 1;
		}
	}

int func_95(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
	
	func_134(uParam0, uParam3, iParam1, uParam2, uParam4, &iVar0, &iVar1, &iVar3, &iVar2, &iVar5, &iVar4, &iVar6, &iVar7);
	iVar8 = ((iVar7 + iVar6) + iVar4);
	if (func_130(uParam3, func_129(iParam1)))
	{
		if (!func_84(uParam0->f_1, 1))
		{
			if (iVar3 == (iVar0 - iVar8))
			{
				if (iVar3 > 0)
				{
					func_135(uParam3, func_129(iParam1));
				}
				func_26(&(uParam0->f_1), 1);
			}
		}
		else if (!func_84(uParam0->f_1, 2))
		{
			if (iVar1 == 0)
			{
				iVar9 = func_129(iParam1);
				if (func_130(uParam3, iVar9))
				{
					iVar10 = func_136(uParam3, iVar9);
					if (!func_137((*uParam3)[iVar10 /*36*/]))
					{
						func_138(uParam3, iVar9, -1);
					}
				}
				func_26(&(uParam0->f_1), 2);
			}
		}
	}
	if (!func_84(uParam0->f_1, 4) && func_84(uParam0->f_1, 0))
	{
		func_26(&(uParam0->f_1), 4);
		func_139(uParam5, uParam0, iParam1, 1);
	}
	if (!func_84(uParam0->f_1, 5) && (iVar8 + iVar5) >= iVar0)
	{
		func_26(&(uParam0->f_1), 5);
		func_139(uParam5, uParam0, iParam1, 2);
	}
	if (!func_84(uParam0->f_1, 6) && (iVar8 > 0 || iVar5 >= iVar0))
	{
		func_26(&(uParam0->f_1), 6);
		func_139(uParam5, uParam0, iParam1, 3);
	}
	if (!func_84(uParam0->f_1, 0))
	{
		if (((iVar2 == iVar0 || func_84(uParam0->f_1, 6)) || iVar8 > 0) || iVar5 >= iVar0)
		{
			func_26(&(uParam0->f_1), 0);
			func_139(uParam5, uParam0, iParam1, 0);
		}
	}
	if (iVar0 <= 0)
	{
		return 1;
	}
	else if (iVar7 == iVar0)
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0, int iParam1, var uParam2)
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
		else if (func_121(iParam0, iParam1, (*uParam2)[iVar0 /*12*/]))
		{
			return 0;
		}
		iVar0++;
	}
	func_32(iParam0);
	return 1;
}

int func_97(int iParam0, var uParam1, int iParam2, var uParam3)
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
		return 1;
	}
	if (!MISC::IS_BIT_SET(iParam2, iParam0))
	{
		uParam3->f_2 = 1;
		return 1;
	}
	vVar0 = { *(uParam1->f_1621[iParam0 /*3*/]) };
	if (func_140(vVar0))
	{
		uParam3->f_2 = 1;
		return 1;
	}
	fVar3 = 25f;
	if (!VOLUME::_0xA4A4359320345B34(uParam3->f_1))
	{
		if (VOLUME::_0x397769175A7DBB30(vVar0, fVar3, 0, 0, 0))
		{
			uParam3->f_2 = 1;
			return 1;
		}
		uVar4 = func_141(vVar0, 0f, 0f, 0f, fVar3, fVar3, fVar3, -432403087, 0, 8);
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
						return 1;
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
			return 1;
		
		case 4:
			uParam3->f_1 = 0;
			uParam3->f_2 = 1;
			return 1;
		
		case 0:
			uParam3->f_1 = 0;
			uParam3->f_2 = 1;
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_98(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_99(vector3 vParam0, bool bParam3)
{
	if (vParam0.x == -1)
	{
		return 0;
	}
	if (vParam0.y < 0 || vParam0.y >= 8)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (vParam0.z < 0 || vParam0.z >= 8)
		{
			return 0;
		}
	}
	return 1;
}

int func_100(var uParam0)
{
	if (!func_99(uParam0->f_4, 1))
	{
		return 0;
	}
	if (uParam0->f_2 == 3)
	{
		return 1;
	}
	if (*uParam0 > 0)
	{
		return 1;
	}
	return 0;
}

int func_101(vector3 vParam0, vector3 vParam3)
{
	if (vParam0.x != vParam3.x)
	{
		return 0;
	}
	if (vParam0.y != vParam3.y)
	{
		return 0;
	}
	if (vParam0.z != vParam3.z)
	{
		return 0;
	}
	return 1;
}

void func_102(int iParam0)
{
	func_142(&(Global_1275329->f_144), iParam0);
}

void func_103(int iParam0)
{
	func_142(&(((*Global_1275475)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*86*/])->f_85), iParam0);
}

bool func_104(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_105()
{
	return Global_1099293->f_339;
}

void func_106()
{
	if (Global_3407872->f_226 != 2)
	{
		return;
	}
	func_143(*((Global_3407872->f_227[0 /*2270*/])->f_2056[0 /*26*/]));
	func_103(1024);
}

void func_107()
{
	if (!func_25())
	{
		return;
	}
	func_103(64);
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
		if (!func_99(vVar2, 1))
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
			}
		}
	}

void func_109(var uParam0)
{
	int iVar0;
	
	iVar0 = func_146();
	if (NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		uParam0->f_8 = iVar0;
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

int func_111(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	
	if (iParam3 < 0 || iParam3 >= *uParam2)
	{
		return 0;
	}
	if (iParam4 < 0 || iParam4 >= *uParam2)
	{
		return 0;
	}
	iVar0 = ((*uParam2)[iParam3 /*12*/])->f_4;
	while (iVar1 < 17)
	{
		vVar2 = { ((*uParam2)[iParam3 /*12*/])->f_1 };
		iVar5 = uParam2[iParam3 /*12*/];
		if (func_99(vVar2, 1))
		{
			func_152((*uParam0)[iVar5 /*33*/], iParam1, (*uParam2)[iParam3 /*12*/], (*uParam7)[vVar2.y /*2270*/], uParam9);
		}
		switch (((*uParam2)[iParam3 /*12*/])->f_4)
		{
			case 0:
				if (func_153(uParam0, (*uParam2)[iParam3 /*12*/], iParam1))
				{
					iVar0 = 1;
				}
				break;
			
			case 1:
				if (func_154((*uParam2)[iParam3 /*12*/], (*uParam7)[vVar2.y /*2270*/], uParam8))
				{
					iVar0 = 16;
				}
				else
				{
					iVar0 = 2;
				}
				break;
			
			case 2:
				if (func_155((*uParam0)[iVar5 /*33*/], iParam1, (*uParam7)[vVar2.y /*2270*/], uParam8, uParam9))
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
				if (func_157(iParam1, (*uParam2)[iParam3 /*12*/], (*uParam7)[vVar2.y /*2270*/]))
				{
					iVar0 = 6;
				}
				break;
			
			case 6:
				if (func_158(iParam1, (*uParam2)[iParam3 /*12*/]))
				{
					iVar0 = 5;
				}
				break;
			
			case 5:
				if (func_159(iParam1, (*uParam2)[iParam3 /*12*/], (*uParam7)[vVar2.y /*2270*/]))
				{
					iVar0 = 7;
				}
				break;
			
			case 7:
				iVar6 = func_160(iParam1, (*uParam2)[iParam3 /*12*/], (*uParam7)[vVar2.y /*2270*/]);
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
				if (func_162((*uParam0)[iVar5 /*33*/], iParam1, uParam2, iParam3, (*uParam7)[vVar2.y /*2270*/], uParam8, uParam9))
				{
					iVar0 = 10;
				}
				break;
			
			case 10:
				if (func_163((*uParam0)[iVar5 /*33*/], iParam1, (*uParam2)[iParam3 /*12*/], uParam5, uParam6, (*uParam7)[vVar2.y /*2270*/], uParam8))
				{
					iVar0 = 11;
				}
				break;
			
			case 11:
				iVar6 = func_164((*uParam0)[iVar5 /*33*/], iParam1, (*uParam2)[iParam3 /*12*/]);
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
				func_167((*uParam0)[iVar5 /*33*/], iParam1, (*uParam7)[vVar2.y /*2270*/], uParam8, uParam9);
				iVar0 = 15;
				break;
			
			case 15:
				if (func_168(iParam1, (*uParam2)[iParam3 /*12*/], (*uParam7)[vVar2.y /*2270*/], 0, bParam10))
				{
					iVar0 = 16;
				}
				break;
			
			case 16:
				if (func_169((*uParam0)[iVar5 /*33*/], iParam1, (*uParam2)[iParam3 /*12*/], (*uParam7)[vVar2.y /*2270*/]))
				{
					return 1;
				}
				break;
		}
		if (iVar0 != ((*uParam2)[iParam3 /*12*/])->f_4)
		{
			((*uParam2)[iParam3 /*12*/])->f_4 = iVar0;
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

int func_112(int iParam0)
{
	if (func_170(&(Global_1099293->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_113(int iParam0)
{
	if (func_171(&(Global_1099293->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_114(vector3 vParam0, var uParam3)
{
	if (func_140(vParam0))
	{
		return 0;
	}
	if (func_78(255) == 4)
	{
		return 0;
	}
	if (func_66(4, 255))
	{
	}
	func_113(4);
	func_172(&(Global_1099293->f_546));
	Global_1099293->f_546.f_6 = { vParam0 };
	Global_1099293->f_546 = uParam3;
	Global_1099293->f_546.f_5 = 1;
	Global_1099293->f_26.f_18 = 0;
	Global_1099293->f_26.f_19 = 0;
	func_173(Global_1099293->f_546, 36);
	return 1;
}

void func_115(bool bParam0, bool bParam1)
{
	if (func_78(255) == 4)
	{
		return;
	}
	if (func_140(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_112(0);
	}
	else
	{
		if (bParam1)
		{
			func_174(0, 0, 0, 1);
		}
		func_113(0);
		func_175(&(Global_1099293->f_516));
		Global_1099293->f_516 = 0f;
		Global_1099293->f_516.f_5 = 1;
		Global_1099293->f_516.f_16 = 0;
		Global_1099293->f_516.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1099293->f_516.f_17.f_3 = { 0f, 0f, 0f };
		Global_1099293->f_516.f_17 = { Global_1901929->f_44.f_1, Global_1901929->f_44.f_1, Global_1901929->f_44.f_1 };
		Global_1099293->f_516.f_17.f_9 = -432403087;
		func_176(&(Global_1099293->f_555));
		Global_1099293->f_555.f_6 = { Global_1099293->f_516.f_17.f_6 };
		Global_1099293->f_555 = Global_1099293->f_516;
		Global_1099293->f_555.f_5 = 1;
		if (bParam1)
		{
			Global_1099293->f_26.f_18 = 0;
			Global_1099293->f_26.f_19 = 0;
		}
	}
	func_177(Global_1099293->f_516, 36);
	func_178(Global_1099293->f_555, 36);
}

int func_116(var uParam0)
{
	if (*uParam0 == -1)
	{
		return 0;
	}
	if (!func_99(uParam0->f_1, 1))
	{
		return 0;
	}
	return 1;
}

void func_117(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 118)
	{
		return;
	}
	Global_1903928->f_485[iParam0] = 1;
}

void func_118(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 118)
	{
		return;
	}
	Global_1903928->f_485[iParam0] = 0;
}

void func_119(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

int func_120(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 < 0 || iParam0 >= 8)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 8)
	{
		return 0;
	}
	if (iParam1 == iParam0)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(uParam2->f_19, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_121(var uParam0, int iParam1, var uParam2)
{
	if (!func_179(uParam0))
	{
		return 0;
	}
	if (!func_116(uParam2))
	{
		return 0;
	}
	if (*uParam2 != iParam1)
	{
		return 0;
	}
	if (!func_101(uParam0->f_4, uParam2->f_1))
	{
		return 0;
	}
	return 1;
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

int func_123(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_124(uParam1->f_1.f_2);
	if (!func_180(PLAYER::GET_PLAYER_PED(iParam0), *(uParam2->f_1621[iVar0 /*3*/]), BUILTIN::TO_FLOAT(uParam2->f_1)))
	{
		return 0;
	}
	return 1;
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

int func_126(int iParam0, var uParam1, var uParam2)
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
				if (func_181(*uParam2, &(uParam1->f_1647[iVar5]), -1566524474, &iVar2, &uVar3, &iVar4) != 1)
				{
				}
				else
				{
					iVar7 = MISC::_0xF18AF483DF70BBDE(iVar2);
					if (!VOLUME::_0x92A78D0BEDB332A3(iVar7))
					{
					}
					else if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iVar7, false, 0))
					{
						func_182(iVar7);
						return iVar5;
					}
					else
					{
						func_182(iVar7);
					}
				}
				iVar5++;
			}
			break;
	}
	return 0;
}

void func_127(var uParam0, var uParam1, var uParam2, var uParam3)
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
		if (&uParam0->f_7[iVar1 /*5*/] != 255)
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
	iVar2 = func_98(iVar2, 0, iVar0);
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
					iVar8 = func_183(&(uParam0->f_7), iVar3, bVar6);
					break;
				
				case 1:
					iVar8 = func_184(&(uParam0->f_7), iVar3, bVar6, uParam0->f_28);
					break;
				
				case 3:
					iVar8 = func_185(&(uParam0->f_7), iVar3, bVar6);
					break;
				
				case 2:
					iVar8 = func_186(&(uParam0->f_7), iVar3, bVar6, uParam1->f_24[iVar4 /*80*/]);
					break;
				
				case 4:
					iVar8 = func_187(&(uParam0->f_7), iVar3, bVar6, uParam1->f_24[iVar4 /*80*/], uParam2);
					break;
				
				case 5:
					iVar8 = func_188(&(uParam0->f_7), iVar3, bVar6);
					break;
				
				case 6:
					iVar8 = func_189(&(uParam0->f_7), iVar3, bVar6, uParam1->f_24[iVar4 /*80*/]);
					break;
			}
			if (iVar8 != -1 && &uParam0->f_7[iVar8 /*5*/] != 255)
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

int func_128(var uParam0)
{
	if (func_80(uParam0->f_18, 65536))
	{
		return 1;
	}
	return 0;
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

int func_132(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_133(var uParam0, int iParam1)
{
	*uParam0 = NETWORK::GET_TIME_OFFSET(*uParam0, iParam1);
}

void func_134(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
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
					if (!func_121(uParam0, iParam2, (*uParam3)[iVar2 /*12*/]))
					{
					}
					else
					{
						*uParam5++;
						bVar3 = false;
						if (func_80(((*uParam3)[iVar2 /*12*/])->f_5, 2))
						{
							bVar3 = true;
						}
						if (func_82((*uParam3)[iVar2 /*12*/]))
						{
							*uParam6++;
							bVar3 = true;
							if (bVar0 && func_191((*uParam4)[iVar2 /*38*/], func_129(iParam2)))
							{
								*uParam7++;
							}
							if (func_80(((*uParam3)[iVar2 /*12*/])->f_5, 1))
							{
								*uParam10++;
							}
						}
						else if (((*uParam3)[iVar2 /*12*/])->f_4 == 12)
						{
							*uParam9++;
							bVar3 = true;
						}
						else if (func_192((*uParam3)[iVar2 /*12*/]))
						{
							*uParam12++;
							bVar3 = true;
						}
						else if (func_193((*uParam3)[iVar2 /*12*/]))
						{
							*uParam11++;
							bVar3 = true;
						}
						if (bVar3)
						{
							*uParam8++;
						}
					}
					iVar2++;
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

bool func_137(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_1, 1);
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

void func_139(var uParam0, var uParam1, int iParam2, int iParam3)
{
	Stack.Push(uParam1);
	Stack.Push(iParam2);
	Stack.Push(iParam3);
	Call_Loc(uParam0);
}

int func_140(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_141(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return uVar0;
	}
	if (func_194() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1273882->f_10;
	iVar6 = Global_1273882->f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case 665633627:
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_195());
				break;
			
			case -432403087:
				iVar8 = VOLUME::_0x10157BC3247FF3BA(vParam0, vParam3, vParam6, func_195());
				break;
			
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_195());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_196(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1273882->f_154[iVar2])))
		{
			iVar10 = &Global_1273882->f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_197(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (&Global_1273882->f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_78(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::_0xB655DB7582AEC805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_198(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_0xF256A75210C5C0EB(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::_0x43F867EF5C463A53(iVar8);
	}
	return uVar0;
}

void func_142(var uParam0, var uParam1)
{
	func_199(uParam0, uParam1);
}

void func_143(struct<16> Param0)
{
	Global_1275329->f_128 = { Param0 };
}

int func_144(var uParam0)
{
	if (!func_116(uParam0))
	{
		return 0;
	}
	if (uParam0->f_4 == 0)
	{
		return 0;
	}
	return 1;
}

int func_145(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	vector3 vVar0;
	
	if (!func_99(uParam1->f_1, 1))
	{
		return 1;
	}
	else if (*uParam1 < 0 || *uParam1 >= *uParam0)
	{
		return 1;
	}
	else if (((iParam2 >= 0 && iParam2 < *uParam0) && iParam2 != *uParam1) && func_99(((*uParam0)[iParam2 /*33*/])->f_4, 1))
	{
		return 1;
	}
	else if (!func_101(uParam1->f_1, ((*uParam0)[*uParam1 /*33*/])->f_4))
	{
		return 1;
	}
	else
	{
		vVar0 = { uParam1->f_1 };
		switch (vVar0.x)
		{
			case 0:
				if (vVar0.y >= *uParam3 || !func_120(iParam2, *uParam1, &(((*uParam3)[vVar0.y /*2338*/])->f_8)))
				{
					return 1;
				}
				break;
			
			case 1:
				if (vVar0.y >= *uParam4 || !func_120(iParam2, *uParam1, (*uParam4)[vVar0.y /*2270*/]))
				{
					return 1;
				}
				break;
		}
	}
	return 0;
}

int func_146()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 255;
	iVar1 = func_200();
	if (func_201(iVar1))
	{
		return PLAYER::PLAYER_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (PED::IS_PED_A_PLAYER(iVar2))
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
			}
		}
	}
	return iVar0;
}

int func_147(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	int iVar6;
	char cVar7[32];
	int iVar11;
	char cVar12[32];
	
	if (!func_202(uParam1))
	{
		return 0;
	}
	iVar0 = uParam1->f_1.f_1;
	iVar1 = func_124(uParam1->f_1.f_2);
	if (!func_203((*uParam2)[iVar0 /*2270*/], 0))
	{
		return 0;
	}
	iParam0->f_1483.f_192 = { *(((*uParam2)[iVar0 /*2270*/])->f_2056[iVar1 /*26*/]) };
	func_204(&(iParam0->f_1483), 8192);
	func_205(&(iParam0->f_1483), 2);
	func_206(&(iParam0->f_1483.f_264), 1);
	func_204(&(iParam0->f_1483), 2);
	func_207(&(iParam0->f_1483.f_263), 4);
	func_207(&(iParam0->f_1483.f_263), 8388608);
	func_206(&(iParam0->f_1483.f_264), 2048);
	func_206(&(iParam0->f_1483.f_264), 1024);
	if (func_208(136))
	{
		func_207(&(iParam0->f_1483.f_263), 2097152);
	}
	if (((*uParam2)[iVar0 /*2270*/])->f_2267 > -1)
	{
		iParam0->f_1483.f_292 = ((*uParam2)[iVar0 /*2270*/])->f_2267;
	}
	if (func_80(((*uParam2)[iVar0 /*2270*/])->f_1650, 64))
	{
		func_26(iParam0, 12);
	}
	if (func_80(((*uParam2)[iVar0 /*2270*/])->f_1650, 2))
	{
		vVar2 = { *(((*uParam2)[iVar0 /*2270*/])->f_1621[iVar1 /*3*/]) };
		uVar5 = (((*uParam2)[iVar0 /*2270*/])->f_2056[iVar1 /*26*/])->f_16;
		func_209(&(iParam0->f_1483), vVar2, 0f, 0f, uVar5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&((((*uParam2)[iVar0 /*2270*/])->f_2056[iVar1 /*26*/])->f_17)))
	{
		func_210(&(iParam0->f_1483), &((((*uParam2)[iVar0 /*2270*/])->f_2056[iVar1 /*26*/])->f_17));
	}
	else
	{
		func_205(&(iParam0->f_1483), 1);
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
	return 1;
}

int func_148(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (func_212(uParam1))
	{
		return 2;
	}
	if (func_213() != 0 && func_200() != func_214())
	{
		return 2;
	}
	if (uParam0->f_2 == 3 || uParam0->f_2 == 2)
	{
		return 1;
	}
	iVar0 = func_124(uParam1->f_9.f_2);
	if (func_215(PLAYER::PLAYER_PED_ID(), *(uParam2->f_1621[iVar0 /*3*/]), 200f, 1, 1))
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
	else if (func_80(uParam3->f_1650, 2))
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

int func_150(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	if (!func_218(uParam0, uParam2, uParam3))
	{
		return 0;
	}
	iVar0 = func_124(uParam2->f_9.f_2);
	if (uParam2->f_4 < 10)
	{
		if (!func_217(&(iParam1->f_1483), uParam3->f_2056[iVar0 /*26*/], 1, 1))
		{
			return 0;
		}
	}
	return 1;
}

void func_151(int* iParam0, var uParam1)
{
	func_219(iParam0, uParam1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_31);
	func_49(&(iParam0->f_1483));
	func_50(&(iParam0->f_1483));
}

void func_152(var uParam0, int* iParam1, var uParam2, var uParam3, var uParam4)
{
	func_220(iParam1, uParam2, uParam3);
	if (uParam2->f_4 >= 3 && uParam2->f_4 <= 11)
	{
		iParam1->f_1466 = func_221(uParam0, iParam1, uParam2, uParam3, uParam4);
	}
}

int func_153(var uParam0, var uParam1, int* iParam2)
{
	if (!func_99(uParam1->f_1, 1))
	{
		return 0;
	}
	if (*uParam1 == -1)
	{
		return 0;
	}
	if (!func_101(((*uParam0)[*uParam1 /*33*/])->f_4, uParam1->f_1))
	{
		return 0;
	}
	if (((*uParam0)[*uParam1 /*33*/])->f_2 != 3)
	{
		return 0;
	}
	if (func_47(iParam2))
	{
		NETWORK::_0x007FF852DCF49DA4(7);
	}
	func_222();
	if (SCRIPTS::_IS_LOADING_SCREEN_ACTIVE())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	return 1;
}

int func_154(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_124(uParam0->f_1.f_2);
	if (!func_180(PLAYER::PLAYER_PED_ID(), *(uParam1->f_1621[iVar0 /*3*/]), BUILTIN::TO_FLOAT(*uParam1)))
	{
		uParam0->f_6 = 1;
		func_223(uParam2, 4);
		return 1;
	}
	return 0;
}

int func_155(var uParam0, int* iParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (*uParam0 <= 4)
	{
		return 0;
	}
	if (func_80(uParam2->f_18, 256))
	{
		func_127(uParam0, uParam2, uParam4, &(iParam1->f_1));
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar1 = (uParam0->f_7[iVar0 /*5*/])->f_4;
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
		else if (&uParam0->f_7[iVar3 /*5*/] == 255)
		{
		}
		else if (&uParam0->f_7[iVar3 /*5*/] != PLAYER::PLAYER_ID())
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
	func_223(uParam3, 0);
	return 1;
}

int func_156()
{
	if (!func_224(255))
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
		PLAYER::_0x64FF4BF9AF59E139(PLAYER::PLAYER_ID(), 1);
		func_225(0);
	}
	MISC::SET_BIT(&(Global_1956121->f_1), 5);
	Global_1048584 = 1;
	return 1;
}

int func_157(int* iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (func_226() == 0)
	{
		return 1;
	}
	if (!func_84(*iParam0, 9))
	{
		bVar0 = true;
		if (func_224(255))
		{
			func_26(iParam0, 8);
		}
		else if (!func_227())
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
				func_26(iParam0, 9);
				if (func_84(*iParam0, 8))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), *(uParam2->f_1621[func_124(iParam0->f_7) /*3*/]), false, false, true, true);
				}
				func_229(128);
				func_229(64);
				func_174(0, 0, 0, 1);
			}
		}
	}
	return 0;
}

int func_158(int* iParam0, var uParam1)
{
	if (func_84(*iParam0, 8))
	{
		return 1;
	}
	if (func_230(255) && func_231())
	{
		return 1;
	}
	if (func_66(10, 255))
	{
		return 0;
	}
	if (func_231())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADED_OUT() || (func_14(&(iParam0->f_1473)) && func_35(&(iParam0->f_1473), 1, 0) > 5000))
	{
		if (func_232())
		{
			func_233();
			func_73(1);
			func_74(1);
			func_75(1);
			func_76(1);
			func_79(&(uParam1->f_5), 16);
		}
		if (func_234(0))
		{
			func_235();
		}
	}
	else if (CAM::IS_SCREEN_FADED_IN())
	{
		if (!func_14(&(iParam0->f_1473)))
		{
			func_15(&(iParam0->f_1473), 1, 0);
		}
		func_228(uParam1, 500);
		if (func_232())
		{
			func_73(1);
			func_74(1);
			func_75(1);
		}
	}
	return 0;
}

int func_159(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (SCRIPTS::_IS_LOADING_SCREEN_ACTIVE())
	{
		return 0;
	}
	if (!func_236(uParam1, uParam2))
	{
		return 0;
	}
	iVar0 = func_124(uParam1->f_1.f_2);
	if (func_237(iParam0, uParam1, *(uParam2->f_1621[iVar0 /*3*/])))
	{
		func_238(iParam0, 7);
		return 1;
	}
	return 0;
}

int func_160(int* iParam0, var uParam1, var uParam2)
{
	if (func_80(uParam1->f_5, 4))
	{
		return 2;
	}
	if (SCRIPTS::_IS_LOADING_SCREEN_ACTIVE() || func_239())
	{
		return 0;
	}
	if (func_80(uParam2->f_18, 2) && !func_84(*iParam0, 6))
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

int func_161(var uParam0)
{
	int iVar0;
	
	if (*uParam0 < 6)
	{
		return 0;
	}
	if (!func_14(&(uParam0->f_31)))
	{
		return 0;
	}
	iVar0 = func_35(&(uParam0->f_31), 0, 1);
	if (iVar0 < 0)
	{
		return 0;
	}
	return 1;
}

int func_162(var uParam0, int* iParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar10;
	int iVar11;
	struct<4> Var12;
	struct<4> Var16;
	int iVar20;
	int iVar21;
	int iVar22;
	vector3 vVar23[24];
	int iVar26;
	
	if (!func_84(*iParam1, 2))
	{
		iParam1->f_7 = func_124(((*uParam2)[iParam3 /*12*/])->f_1.f_2);
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
		Var2 = { func_241(&(iParam1->f_1483)) };
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
			StringCopy(&Var16, "", 32);
			if (!func_246(iParam1, uParam4, iVar10, 0, &Var16, 0, 0))
			{
			}
			if (func_245(iParam1, &Var16, (iParam1->f_1104[iVar10 /*15*/])->f_2))
			{
			}
			iVar10++;
		}
		func_247(&(iParam1->f_1483));
		func_248(&(iParam1->f_1483), 1);
		if (func_80(uParam0->f_3, 2))
		{
			func_204(&(iParam1->f_1483), 524288);
			func_205(&(iParam1->f_1483), 4);
		}
		if (func_80(uParam4->f_1650, 8) && !func_84(*iParam1, 3))
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam4->f_2056[iParam1->f_7 /*26*/], "cutscene@mpgvo1_int"))
			{
				func_26(iParam1, 3);
			}
		}
		func_26(iParam1, 2);
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
		func_250(iParam1, uParam0, (*uParam2)[iParam3 /*12*/], uParam4, uParam5);
		if (func_80(uParam4->f_1650, 4))
		{
			func_251(0, uParam6);
			func_26(iParam1, 4);
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
		return 1;
	}
	return 0;
}

int func_163(var uParam0, int* iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;
	int iVar17;
	
	func_253(uParam2, iParam1, uParam5);
	if (func_254(uParam0, iParam1, uParam2, uParam3, uParam4, uParam5, uParam6))
	{
		func_204(&(iParam1->f_1483), 524288);
		func_205(&(iParam1->f_1483), 4);
		if (!func_84(*iParam1, 1))
		{
			func_204(&(iParam1->f_1483), 67108864);
			func_26(iParam1, 1);
		}
	}
	if (func_249(*(uParam5->f_2056[iParam1->f_7 /*26*/]), &(iParam1->f_1483)))
	{
		if (func_47(iParam1))
		{
			func_255(uParam0, 0);
		}
		return 1;
	}
	else if (ANIMSCENE::_0x25557E324489393C(iParam1->f_1483.f_208))
	{
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam1->f_1483.f_208, 0))
		{
			iVar0 = BUILTIN::ROUND((ANIMSCENE::_0x49F1D143ADE32656(iParam1->f_1483.f_208) * 1000f));
			iVar1 = BUILTIN::ROUND((ANIMSCENE::_GET_ANIM_SCENE_TIME(iParam1->f_1483.f_208) * 1000f));
			bVar2 = !ENTITY::HAS_ANIM_EVENT_FIRED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((iParam1->f_14[0 /*21*/])->f_1.f_2), MISC::GET_HASH_KEY("NotFinalPlaylist"));
			if (!func_80(uParam2->f_5, 1))
			{
				if (bVar2 && func_256(uParam5, iVar0, iVar1))
				{
					func_79(&(uParam2->f_5), 1);
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
			if (!func_80(uParam2->f_5, 8))
			{
				if (func_84(uParam0->f_1, 0))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1->f_1483.f_208, "ExportCamera", &Var5, false, 0, 2) && !func_140(Var5.f_6))
					{
						iParam1->f_9 = { Var5.f_6 };
						STREAMING::SET_FOCUS_POS_AND_VEL(iParam1->f_9, 0f, 0f, 0f);
					}
					func_79(&(uParam2->f_5), 8);
				}
			}
			if ((bVar2 && uParam5->f_2269 > -2) && !func_84(*iParam1, 11))
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
					func_204(&(iParam1->f_1483), 524288);
					func_205(&(iParam1->f_1483), 4);
					func_223(uParam6, 7);
					func_26(iParam1, 11);
				}
			}
		}
	}
	return 0;
}

int func_164(var uParam0, int* iParam1, var uParam2)
{
	bool bVar0;
	
	bVar0 = true;
	if (!iParam1->f_1466)
	{
		if (!func_14(&(iParam1->f_1469)))
		{
			if (func_84(uParam0->f_1, 0))
			{
				func_15(&(iParam1->f_1469), 0, 0);
			}
		}
		if (CAM::IS_SCREEN_FADED_IN())
		{
		}
		else if (func_14(&(iParam1->f_1469)) && func_259(&(iParam1->f_1469), 5000, 0))
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
		func_260(&(iParam1->f_1469));
		func_238(iParam1, 7);
		if (func_80(uParam2->f_5, 4))
		{
			return 2;
		}
		return 1;
	}
	return 0;
}

int func_165(var uParam0, var uParam1)
{
	if (!func_84(uParam0->f_1, 0))
	{
		return 0;
	}
	if (func_80(uParam1->f_18, 1) && !func_84(uParam0->f_1, 6))
	{
		return 0;
	}
	return 1;
}

int func_166(int* iParam0)
{
	int iVar0;
	
	if (!func_84(*iParam0, 8))
	{
		return 1;
	}
	func_229(64);
	func_229(128);
	if (func_224(255))
	{
		return 1;
	}
	if (!func_84(*iParam0, 10))
	{
		if (iParam0->f_8 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0->f_8))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0->f_8);
		}
		func_26(iParam0, 10);
		func_229(128);
		func_229(64);
		func_261(7, iVar0, 1, 0);
	}
	return 0;
}

void func_167(var uParam0, int* iParam1, var uParam2, var uParam3, var uParam4)
{
	func_262(uParam0, iParam1, uParam2, uParam3);
	if (func_80(uParam2->f_1650, 4) && func_84(*iParam1, 4))
	{
		func_251(1, uParam4);
		func_238(iParam1, 4);
	}
}

int func_168(int* iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 1;
	if (func_80(uParam1->f_5, 16))
	{
		if ((bParam4 || !bParam3) || !CAM::_0x251241CAEC707106())
		{
			func_263(&(uParam1->f_5), 16);
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && func_264(iParam0, uParam2))
			{
				func_265(1, 2);
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (!func_84(*iParam0, 8))
	{
		if (!func_80(uParam2->f_18, 512))
		{
			if (!bParam4 && func_35(&(iParam0->f_1471), 0, 0) <= 4000)
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 25, true);
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

int func_169(var uParam0, int iParam1, int iParam2, var uParam3)
{
	if (*uParam0 < 7)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && func_264(iParam1, uParam3))
	{
		func_265(1, 2);
	}
	func_27(iParam1, iParam2);
	return 1;
}

bool func_170(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::CLEAR_BIT((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_171(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::SET_BIT((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

void func_172(var uParam0)
{
	struct<9> Var0;
	
	*uParam0 = { Var0 };
}

void func_173(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_174(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	func_266(iParam0);
	if (!func_267(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_268(128) && !func_208(18))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (iParam3 && func_269() == 4)
	{
		func_112(17);
	}
	func_229(1024);
}

void func_175(var uParam0)
{
	struct<30> Var0;
	
	*uParam0 = { Var0 };
}

void func_176(var uParam0)
{
	struct<9> Var0;
	
	*uParam0 = { Var0 };
}

void func_177(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (VOLUME::_0x92A78D0BEDB332A3(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_178(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

int func_179(var uParam0)
{
	if (!func_99(uParam0->f_4, 1))
	{
		return 0;
	}
	return 1;
}

int func_180(int iParam0, vector3 vParam1, float fParam4)
{
	float fVar0;
	
	if (fParam4 == -1f)
	{
		return 1;
	}
	if (fParam4 == 0f)
	{
		fVar0 = 100f;
	}
	else
	{
		fVar0 = fParam4;
	}
	return func_215(iParam0, vParam1, fVar0, 1, 1);
}

int func_181(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Stack.Push(iParam1);
	Stack.Push(iParam2);
	Stack.Push(iParam3);
	Stack.Push(iParam4);
	Stack.Push(iParam5);
	Call_Loc(uParam0);
	return StackVal;
}

void func_182(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
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

int func_187(var uParam0, int iParam1, bool bParam2, var uParam3, var uParam4)
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
			Call_Loc(uParam4);
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

int func_192(var uParam0)
{
	if (!func_116(uParam0))
	{
		return 1;
	}
	if (uParam0->f_4 < 15)
	{
		return 0;
	}
	else if (uParam0->f_4 == 15)
	{
		return !func_80(uParam0->f_5, 16);
	}
	return 1;
}

int func_193(var uParam0)
{
	if (!func_116(uParam0))
	{
		return 0;
	}
	if (uParam0->f_4 <= 14)
	{
		return 0;
	}
	return 1;
}

int func_194()
{
	return Global_1051202->f_12;
}

char* func_195()
{
	return "unnamed";
}

int func_196(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		
		case 0:
			iVar0 = 32;
			break;
		
		case 1:
			iVar0 = 64;
			break;
		
		case 2:
			iVar0 = 128;
			break;
		
		case 3:
			iVar0 = 256;
			break;
		
		case 4:
			iVar0 = 512;
			break;
		
		case 5:
			iVar0 = 1024;
			break;
		
		case 6:
			iVar0 = 2048;
			break;
		
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

int func_197(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_66(35, iParam0);
}

bool func_198(int iParam0)
{
	if (func_272(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1273882->f_10, iParam0) != 1)
		{
			func_273(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1273882->f_10, iParam0) == 1;
}

void func_199(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_200()
{
	return Global_1099293->f_26.f_18;
}

int func_201(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (iVar0 == Global_1099293->f_26.f_21)
	{
		return 1;
	}
	if (iVar0 == PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_202(var uParam0)
{
	if (*uParam0 == -1)
	{
		return 0;
	}
	if (!func_99(uParam0->f_1, 1))
	{
		return 0;
	}
	uParam0->f_9 = { uParam0->f_1 };
	return 1;
}

int func_203(var uParam0, int iParam1)
{
	if (func_274(uParam0))
	{
		return 1;
	}
	if (!func_275(uParam0, iParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2056[iParam1 /*26*/]))
	{
		return 0;
	}
	return 1;
}

void func_204(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_205(var uParam0, int iParam1)
{
	uParam0->f_12 = (uParam0->f_12 || iParam1);
}

void func_206(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_207(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_208(int iParam0)
{
	return (Global_1099293->f_4[Global_1100046[iParam0 /*2*/]] && ((*Global_1100046)[iParam0 /*2*/])->f_1) == ((*Global_1100046)[iParam0 /*2*/])->f_1;
}

void func_209(var uParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_140(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
	uParam0->f_8 = { vParam4 };
	func_207(&(uParam0->f_263), 4194304);
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
			if (!func_277(uParam0, sParam1) || func_278(uParam0, 8388608))
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
						func_204(uParam0, 4194304);
					}
				}
				else
				{
					func_204(uParam0, 4194304);
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

int func_213()
{
	return func_226();
}

int func_214()
{
	return Global_1099293->f_26.f_19;
}

int func_215(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_279(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

int func_216(var uParam0, var uParam1, var uParam2, var uParam3)
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
			if (!func_281(iVar1, 966820754, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam1->f_14[iVar1 /*21*/])->f_1.f_1), (uParam3->f_24[iVar1 /*80*/])->f_11[iVar2 /*34*/], &((uParam1->f_14[iVar1 /*21*/])->f_1.f_18), 1))
			{
				iVar0 = 0;
			}
			if (!func_281(iVar1, 966820754, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam1->f_14[iVar1 /*21*/])->f_1.f_1), &(((uParam3->f_24[iVar1 /*80*/])->f_11[iVar2 /*34*/])->f_13), &((uParam1->f_14[iVar1 /*21*/])->f_1.f_19), 0))
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
		if (!func_281(iVar1, 1627542854, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam1->f_99[iVar1 /*20*/])->f_1), &((uParam3->f_345[iVar1 /*29*/])->f_3), &((uParam1->f_99[iVar1 /*20*/])->f_18), 0))
		{
			iVar0 = 0;
		}
		bVar3 = (iVar0 == 1 && func_282((uParam3->f_345[iVar1 /*29*/])->f_3, (uParam3->f_345[iVar1 /*29*/])->f_16, 0.5f, 1));
		if (!func_281(iVar1, 1627542854, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((uParam1->f_99[iVar1 /*20*/])->f_1), &((uParam3->f_345[iVar1 /*29*/])->f_16), &((uParam1->f_99[iVar1 /*20*/])->f_19), bVar3))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_217(var uParam0, char* sParam1, bool bParam2, bool bParam3)
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
			return (func_278(uParam0, 256) && !func_278(uParam0, 4194304));
		}
		uParam0->f_274 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	func_283(uParam0, sParam1);
	if (!func_278(uParam0, 64))
	{
		if (!func_140(func_284(uParam0)))
		{
			func_204(uParam0, 64);
		}
		else if (func_285(uParam0, &vVar0, &vVar3))
		{
			uParam0->f_5 = { vVar0 };
			uParam0->f_8 = { vVar3 };
		}
		return 0;
	}
	fVar6 = func_286(Global_35, func_284(uParam0), 1);
	if (func_278(uParam0, 128) || func_278(uParam0, 256))
	{
		if ((fVar6 >= func_287(uParam0) && !bParam2) || !ANIMSCENE::_0x25557E324489393C(uParam0->f_208))
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
	else if (fVar6 <= func_290(uParam0) || bParam2)
	{
		if (!func_278(uParam0, 128))
		{
			if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_208))
			{
				if (func_290(uParam0) >= func_287(uParam0))
				{
				}
				Var7 = { func_241(uParam0) };
				if (!func_291(uParam0, 1) && MISC::IS_STRING_NULL_OR_EMPTY(&Var7))
				{
					func_292(uParam0);
					Var7 = { func_241(uParam0) };
				}
				iVar15 = 256;
				if (!func_278(uParam0, 1))
				{
					iVar15 |= 2048;
				}
				if (func_291(uParam0, 2))
				{
					iVar15 |= 16384;
				}
				uParam0->f_208 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_192), iVar15, &Var7, false, true);
				func_293(uParam0, 0, 0, 0, 0);
				func_204(uParam0, 128);
			}
		}
	}
	if (func_278(uParam0, 128))
	{
		if (func_278(uParam0, 256) && !func_278(uParam0, 4194304))
		{
			return 1;
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
			if (!func_278(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_208, &Var18))
				{
					if (!func_278(uParam0, 16777216))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_208, &Var18);
						func_204(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_208, &Var18))
					{
						bVar16 = false;
					}
				}
			}
			if (!bVar16)
			{
				return 0;
			}
			func_204(uParam0, 256);
			func_69(uParam0, 4194304, 1);
			return 1;
		}
	}
	return 0;
}

int func_218(var uParam0, var uParam1, var uParam2)
{
	if (func_280(uParam0, uParam1, uParam2))
	{
		return 0;
	}
	return 1;
}

void func_219(var uParam0, var uParam1)
{
	int iVar0;
	
	TASK::_0x4F57397388E1DFF8();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_296(iVar0, 966820754, &((uParam0->f_14[iVar0 /*21*/])->f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_296(iVar0, 1627542854, uParam0->f_99[iVar0 /*20*/]);
		iVar0++;
	}
	uParam1->f_9 = { func_57() };
}

void func_220(int* iParam0, var uParam1, var uParam2)
{
	func_297(iParam0, uParam1, uParam2);
	func_298(iParam0, uParam1, uParam2);
	POPULATION::_0xF45E46DEECF7DF6E(4224, 0, 0, -1, -1);
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && CAM::IS_SCREEN_FADED_OUT())
	{
		func_299(0);
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
		PAD::DISABLE_CONTROL_ACTION(0, -484677055, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1678863853, false);
		PAD::DISABLE_CONTROL_ACTION(2, -668070958, false);
		PAD::DISABLE_CONTROL_ACTION(2, 1250966545, false);
	}
	if (uParam1->f_4 != 0)
	{
		_NAMESPACE79::_0xB3E8841F6BDAF83E();
	}
}

bool func_221(var uParam0, int* iParam1, var uParam2, var uParam3, var uParam4)
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
			if (!func_301(uParam0, uParam0->f_7[iVar4 /*5*/], iParam1, uParam2, iVar3, iVar3, 966820754, iParam1->f_14[iVar3 /*21*/], uParam3, uParam3->f_24[iVar3 /*80*/], uParam4))
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
		if (!func_303(uParam0, iParam1, uParam2, iVar3, &(uParam3->f_345[iVar3 /*29*/]), 1627542854, iParam1->f_99[iVar3 /*20*/], uParam3, uParam3->f_345[iVar3 /*29*/], uParam3->f_1668[iVar3 /*8*/], uParam4))
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
		if (!func_304(iParam1, uParam0, uParam2, iVar3, &(uParam3->f_926[iVar3 /*15*/]), -1821507459, iParam1->f_500[iVar3 /*13*/], &iVar5, uParam3, uParam3->f_926[iVar3 /*15*/], &((uParam3->f_926[iVar3 /*15*/])->f_3), &((uParam3->f_926[iVar3 /*15*/])->f_9), uParam3->f_1829[iVar3 /*4*/], uParam4))
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
		if (!func_304(iParam1, uParam0, uParam2, iVar3, &(uParam3->f_1227[iVar3 /*15*/]), 1135537454, iParam1->f_761[iVar3 /*13*/], &iVar6, uParam3, uParam3->f_1227[iVar3 /*15*/], &((uParam3->f_1227[iVar3 /*15*/])->f_3), &((uParam3->f_1227[iVar3 /*15*/])->f_9), uParam3->f_1910[iVar3 /*4*/], uParam4))
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
		if (!func_304(iParam1, uParam0, uParam2, iVar3, &(uParam3->f_1529[iVar3 /*15*/]), 465509728, iParam1->f_1089[iVar3 /*14*/], &((iParam1->f_1089[iVar3 /*14*/])->f_13), uParam3, uParam3->f_1529[iVar3 /*15*/], &((uParam3->f_1529[iVar3 /*15*/])->f_3), &((uParam3->f_1529[iVar3 /*15*/])->f_9), uParam3->f_1951[iVar3 /*4*/], uParam4))
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
		if (!func_304(iParam1, uParam0, uParam2, iVar3, &(uParam3->f_1378[iVar3 /*15*/]), 422112462, iParam1->f_892[iVar3 /*13*/], &iVar7, uParam3, uParam3->f_1378[iVar3 /*15*/], &((uParam3->f_1378[iVar3 /*15*/])->f_3), &((uParam3->f_1378[iVar3 /*15*/])->f_9), uParam3->f_1956[iVar3 /*4*/], uParam4))
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
		if (!func_304(iParam1, uParam0, uParam2, iVar3, &(uParam3->f_1545[iVar3 /*15*/]), -230450704, iParam1->f_1023[iVar3 /*13*/], &iVar8, uParam3, uParam3->f_1545[iVar3 /*15*/], &((uParam3->f_1545[iVar3 /*15*/])->f_3), &((uParam3->f_1545[iVar3 /*15*/])->f_9), uParam3->f_1997[iVar3 /*4*/], uParam4))
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
		if (!func_306(iParam1, uParam0, uParam2, iVar3, 0, iParam1->f_1104[iVar3 /*15*/], uParam3, iVar1, iVar2, uParam4))
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

void func_222()
{
	if (!Global_1099293->f_16)
	{
		return;
	}
	Global_1070355->f_27136.f_5 = 1;
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_transition_sounds");
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_generic_sounds");
}

void func_223(var uParam0, int iParam1)
{
	Stack.Push(iParam1);
	Call_Loc(uParam0);
}

bool func_224(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099293->f_3 & 128 != 0;
	}
	return func_307(128, iParam0);
}

void func_225(bool bParam0)
{
	if (func_234(bParam0))
	{
		func_309(func_308(), 0);
	}
}

int func_226()
{
	return Global_1099293->f_26.f_14;
}

bool func_227()
{
	return (func_310() && func_311(Global_1099293->f_197.f_17, 1500));
}

void func_228(var uParam0, int iParam1)
{
	if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_OUT(iParam1);
	}
	if (func_300(uParam0))
	{
		func_79(&(uParam0->f_5), 2);
	}
}

void func_229(int iParam0)
{
	if (func_312(iParam0))
	{
		return;
	}
	Global_1099293->f_26.f_9 = (Global_1099293->f_26.f_9 || iParam0);
}

bool func_230(int iParam0)
{
	return !func_44(iParam0);
}

int func_231()
{
	if (func_232() || func_234(0))
	{
		return 0;
	}
	return 1;
}

int func_232()
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if ((((((PED::_0xB655DB7582AEC805(iVar0) || PED::IS_PED_INJURED(iVar0)) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || PED::_0x3BDFCF25B58B0415(iVar0)) || PED::_0x3AA24CCC0D451379(iVar0)) || PED::IS_PED_FALLING(iVar0)) || PED::_0x9682F850056C9ADE(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_233()
{
	func_113(10);
	func_115(1, 1);
	func_172(&(Global_1099293->f_546));
	Global_1099293->f_546.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	Global_1099293->f_546 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
	Global_1099293->f_546.f_5 = 1;
	Global_1099293->f_26.f_18 = 0;
	Global_1099293->f_26.f_19 = 0;
	func_173(Global_1099293->f_546, 36);
}

bool func_234(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915170->f_20136;
	}
	return (Global_1915170->f_20136 || Global_1915170->f_21989.f_1);
}

void func_235()
{
	if (func_234(0))
	{
		Global_1051387->f_42 = 1;
	}
}

int func_236(var uParam0, var uParam1)
{
	if (uParam1->f_2 != -1)
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			func_228(uParam0, uParam1->f_2);
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			return 0;
		}
	}
	return 1;
}

int func_237(int* iParam0, var uParam1, vector3 vParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	
	bVar0 = !func_140(vParam2);
	bVar1 = ((bVar0 && !func_140(iParam0->f_9)) || (!bVar0 && func_140(iParam0->f_9)));
	bVar2 = false;
	if (ANIMSCENE::_0x25557E324489393C(Global_1070355->f_27136.f_8.f_8) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_1070355->f_27136.f_8.f_8, 0))
	{
		bVar2 = true;
	}
	if (!func_84(*iParam0, 7))
	{
		if (!bVar1)
		{
			func_260(&(iParam0->f_12));
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
				if (!func_14(&(iParam0->f_12)))
				{
					func_119(&(iParam0->f_12), 0, 0);
				}
				if (STREAMING::_0x0909F71B5C070797() || func_259(&(iParam0->f_12), 5000, 0))
				{
					STREAMING::_0x5A8B01199C3E79C3();
					func_26(iParam0, 7);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						return 0;
					}
				}
			}
			else
			{
				func_26(iParam0, 7);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					return 0;
				}
			}
		}
	}
	return func_84(*iParam0, 7);
}

void func_238(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_239()
{
	return Global_1070355->f_27136.f_8.f_10 != 0;
}

int func_240(int* iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return -1;
	}
	return &(iParam0->f_1[iParam1]);
}

struct<8> func_241(var uParam0)
{
	return uParam0->f_209;
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
	func_204(uParam0, 33554432);
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

int func_245(int* iParam0, char* sParam1, int iParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(iParam0->f_1483.f_208, sParam1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (func_313(&(iParam0->f_1483), iParam2, sParam1, 0, ENTITY::GET_ENTITY_MODEL(iParam2), 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_246(int* iParam0, var uParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	if (iParam2 < 0)
	{
		return 0;
	}
	switch (iParam3)
	{
		case 966820754:
			if (!bParam5)
			{
				*sParam4 = { func_244(uParam1->f_1651[iParam2 /*4*/], ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((iParam0->f_14[iParam2 /*21*/])->f_1.f_1), iParam2, bParam6) };
				return 1;
			}
			break;
		
		case 1627542854:
			if (bParam5)
			{
				*sParam4 = { (uParam1->f_1668[iParam2 /*8*/])->f_4 };
				return 1;
			}
			else
			{
				*sParam4 = { *(uParam1->f_1668[iParam2 /*8*/]) };
				return 1;
			}
			break;
		
		case 1135537454:
			if (!bParam5)
			{
				*sParam4 = { *(uParam1->f_1910[iParam2 /*4*/]) };
				return 1;
			}
			break;
		
		case 465509728:
			if (!bParam5)
			{
				*sParam4 = { *(uParam1->f_1951[iParam2 /*4*/]) };
				return 1;
			}
			break;
		
		case 422112462:
			if (!bParam5)
			{
				*sParam4 = { *(uParam1->f_1956[iParam2 /*4*/]) };
				return 1;
			}
			break;
		
		case 0:
			if (bParam5)
			{
				return 0;
			}
			if ((iParam0->f_1104[iParam2 /*15*/])->f_13 == -1)
			{
				return 0;
			}
			if ((iParam0->f_1104[iParam2 /*15*/])->f_14 == 0)
			{
				return 0;
			}
			if (func_246(iParam0, uParam1, (iParam0->f_1104[iParam2 /*15*/])->f_13, (iParam0->f_1104[iParam2 /*15*/])->f_14, sParam4, 1, 1))
			{
				return 1;
			}
			else if (func_246(iParam0, uParam1, (iParam0->f_1104[iParam2 /*15*/])->f_13, (iParam0->f_1104[iParam2 /*15*/])->f_14, sParam4, 0, 1))
			{
				iVar0 = (iParam0->f_1104[iParam2 /*15*/])->f_1;
				if (func_314(iVar0))
				{
					StringConCat(sParam4, "_horse", 32);
					return 1;
				}
			}
			break;
	}
	return 0;
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
		if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_17[iVar0 /*12*/])) || func_315(uParam0->f_17[iVar0 /*12*/], 2))
		{
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_208, &((uParam0->f_17[iVar0 /*12*/])->f_1)))
			{
				func_316(uParam0->f_17[iVar0 /*12*/], 1);
			}
		}
		iVar0++;
	}
}

void func_248(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_17[iVar0 /*12*/])) || func_315(uParam0->f_17[iVar0 /*12*/], 2))
		{
			if (func_315(uParam0->f_17[iVar0 /*12*/], 1) || ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_208, &((uParam0->f_17[iVar0 /*12*/])->f_1)))
			{
				func_317(uParam0, &((uParam0->f_17[iVar0 /*12*/])->f_1), &(uParam0->f_17[iVar0 /*12*/]), (uParam0->f_17[iVar0 /*12*/])->f_9);
				if (iParam1 && ENTITY::IS_ENTITY_A_PED(&(uParam0->f_17[iVar0 /*12*/])))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_17[iVar0 /*12*/]));
					if (iVar1 != Global_35 && !func_315(uParam0->f_17[iVar0 /*12*/], 16))
					{
						func_318(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

int func_249(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	int iVar0;
	
	func_283(uParam16, &sParam0);
	if (func_319(uParam16) != 1)
	{
		func_320(uParam16);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_319(uParam16))
	{
		case 1:
			if (ANIMSCENE::_0x25557E324489393C(uParam16->f_208) && ANIMSCENE::_0x477122B8D05E7968(uParam16->f_208, 1, 0))
			{
				if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam16->f_208, 0))
				{
					func_321(uParam16, &sParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam16->f_208))
				{
					func_322(uParam16, 4);
					return 0;
				}
				else if (func_323(uParam16, 2))
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
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam16->f_209)) && func_278(uParam16, 134217728))
				{
				}
				else
				{
					func_324(uParam16);
				}
				func_325(&(uParam16->f_1));
				func_322(uParam16, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_294(uParam16);
				if (!func_326(&(uParam16->f_1)))
				{
					func_327(&(uParam16->f_1), 0);
				}
				else if (func_328(&(uParam16->f_1)) >= 60f)
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
				if (func_217(uParam16, &sParam0, 1, 1))
				{
					if (!ANIMSCENE::_0x477122B8D05E7968(uParam16->f_208, 1, 0))
					{
						func_322(uParam16, 4);
					}
					else if (!func_140(func_284(uParam16)) && !func_215(Global_35, func_284(uParam16), 100f, 1, 1))
					{
						if (!func_329(uParam16->f_263, 8388608))
						{
							func_330(1);
						}
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_284(uParam16), 0f, 1, 1, 1, 0);
					}
				}
				else if (func_328(&(uParam16->f_1)) >= 60f)
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
				func_321(uParam16, &sParam0);
				func_322(uParam16, 3);
			}
			else if (func_328(&(uParam16->f_1)) >= 60f)
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
			if (func_323(uParam16, 2))
			{
				Stack.Push(uParam16);
				Call_Loc(uParam16->f_189);
			}
			if ((ANIMSCENE::_0x25557E324489393C(uParam16->f_208) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam16->f_208, 0)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam16->f_208) || func_278(uParam16, 512)))
			{
				if (!func_278(uParam16, 1024) && func_333(uParam16, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_278(uParam16, 512))
				{
					func_325(&(uParam16->f_1));
					func_204(uParam16, 512);
					func_322(uParam16, 4);
				}
				else if (func_278(uParam16, 524288))
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
			if (func_278(uParam16, 524288))
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
				if (!func_291(uParam16, 4))
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
				return 1;
			}
			else
			{
				if (func_278(uParam16, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_0x4B4038796F0D6566(uParam16->f_208) && !ANIMSCENE::_0xEF324E9550A394D5(uParam16->f_208))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam16->f_208);
						}
						func_325(&(uParam16->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						func_204(uParam16, 512);
						func_69(uParam16, 67108864, 1);
						func_322(uParam16, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_278(uParam16, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam16->f_208)) && CAM::IS_SCREEN_FADED_OUT()) && func_335(uParam16) <= 5000) && func_335(uParam16) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(uParam16->f_292);
				}
				if (!func_278(uParam16, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_340(&(uParam16->f_264), 0);
					func_204(uParam16, 536870912);
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
				return 1;
			}
			break;
		
		case 4:
			if (func_278(uParam16, 524288))
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
						func_204(uParam16, 1073741824);
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
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam16->f_208))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_323(uParam16, 4));
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
					else if (func_328(&(uParam16->f_1)) >= 30f)
					{
						if (ANIMSCENE::_0x25557E324489393C(uParam16->f_208) && ANIMSCENE::_0x4B4038796F0D6566(uParam16->f_208))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam16->f_208, 0);
						}
						func_322(uParam16, 3);
					}
				}
				if (func_319(uParam16) == 3)
				{
					if (func_278(uParam16, 524288))
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
	return 0;
}

void func_250(int* iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	
	if (!func_84(*iParam0, 8))
	{
		iVar0 = 8;
		if (func_342(57))
		{
			iVar0 |= 128;
		}
		if (!func_47(iParam0))
		{
			iVar0 |= 4;
			iVar0 |= 16;
		}
		func_265(0, iVar0);
		func_79(&(uParam2->f_5), 16);
		func_343(0);
		func_344();
		MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), 10f, 1);
	}
	func_222();
	if (func_47(iParam0))
	{
		func_255(uParam1, 1);
	}
	func_85(1);
	func_345(0);
	if (!func_80(uParam3->f_18, 128))
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
	func_223(uParam4, 1);
}

void func_251(bool bParam0, var uParam1)
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
		func_181(uParam1, iVar0, -230450704, &iVar1, &iVar2, &iVar3);
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
	
	if ((func_84(*iParam1, 3) && ANIMSCENE::_0x25557E324489393C(iParam1->f_1483.f_208)) && ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam1->f_1483.f_208, 0))
	{
		STREAMING::_0xD346248C1DCE0D76(6, 6, 10, 10);
		if (!func_84(*iParam1, 4))
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
					func_26(iParam1, 4);
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

int func_254(var uParam0, int* iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	func_348();
	NETWORK::_0x236905C700FDB54D();
	func_349(0, 0, 1);
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
				func_352((*uParam4)[iVar1 /*38*/], func_351("VOTE_SKIP_CONTEXT"), 0, -842734359, 6);
				func_353((*uParam4)[iVar1 /*38*/], iVar0, !func_84(*iParam1, 8));
				MISC::SET_BIT((*uParam4)[iVar1 /*38*/], 7);
			}
			if (func_80(uParam2->f_5, 1) || func_84(*iParam1, 0))
			{
				if (!func_354((*uParam4)[iVar1 /*38*/]))
				{
					func_355((*uParam4)[iVar1 /*38*/]);
				}
				func_356((*uParam4)[iVar1 /*38*/]);
			}
			else if (func_357((*uParam4)[iVar1 /*38*/]) && func_84(uParam0->f_1, 0))
			{
				if (func_137((*uParam3)[iVar2 /*36*/]) && func_358(uParam4, (*uParam3)[iVar2 /*36*/]) == 0)
				{
					func_26(iParam1, 0);
					func_356((*uParam4)[iVar1 /*38*/]);
				}
			}
		}
	}
	if (func_84(*iParam1, 0))
	{
		bVar5 = true;
	}
	else if (func_80(uParam2->f_5, 1) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), iParam1->f_9, true) >= 100f)
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
			if (func_84(*iParam1, 0))
			{
				uParam2->f_6 = 2;
				func_223(uParam6, 5);
			}
			return 1;
		}
	}
	return 0;
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
		UNK_0x34BC1E79546BA543(1);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 7, false);
		NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(0, 0, 7);
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

int func_256(var uParam0, int iParam1, int iParam2)
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

int func_258(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_132(uParam0->f_22, iParam3);
	if ((iParam1 - iParam2) <= iVar0)
	{
		return 1;
	}
	return 0;
}

int func_259(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_119(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_260(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_261(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iVar0 == iParam1)
	{
		iVar1 = 1;
	}
	func_359(1);
	func_360(iParam0, iParam1, bParam2, iParam3, iVar1, 0);
}

void func_262(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_223(uParam3, 2);
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_INJURED(iVar0) && !func_84(*iParam1, 8))
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
		if (func_361(iVar0, -1959848946))
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
				if (func_84(((uParam2->f_24[iVar1 /*80*/])->f_11[iVar3 /*34*/])->f_13.f_13, 3))
				{
					func_362(((uParam2->f_24[iVar1 /*80*/])->f_11[iVar3 /*34*/])->f_13.f_16);
				}
				else
				{
					if (!func_84(((uParam2->f_24[iVar1 /*80*/])->f_11[iVar3 /*34*/])->f_13.f_13, 1))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(((uParam2->f_24[iVar1 /*80*/])->f_11[iVar3 /*34*/])->f_13.f_14, 1065353216);
					}
					if (!func_84(((uParam2->f_24[iVar1 /*80*/])->f_11[iVar3 /*34*/])->f_13.f_13, 2))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(((uParam2->f_24[iVar1 /*80*/])->f_11[iVar3 /*34*/])->f_13.f_15, 1f);
					}
				}
				if (func_84(((uParam2->f_24[iVar1 /*80*/])->f_11[iVar3 /*34*/])->f_13.f_13, 0))
				{
					func_363(((uParam2->f_24[iVar1 /*80*/])->f_11[iVar3 /*34*/])->f_13.f_19, ((uParam2->f_24[iVar1 /*80*/])->f_11[iVar3 /*34*/])->f_13.f_20, 1, 1);
				}
			}
		}
	}
	func_364(iParam1);
	func_15(&(iParam1->f_1471), 0, 0);
	func_365(0, 0);
	func_347(1);
	if (!func_80(uParam2->f_18, 128))
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
	func_85(0);
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		if (func_80(uParam0->f_3, 2))
		{
			if (func_84(*iParam1, 8))
			{
				func_366(64);
				func_366(128);
			}
		}
		else if (func_80(uParam2->f_18, 2048))
		{
			func_223(uParam3, 6);
			if (func_84(*iParam1, 8))
			{
				func_366(64);
				func_366(128);
			}
		}
		else
		{
			CAM::DO_SCREEN_FADE_IN(500);
			if (func_84(*iParam1, 8))
			{
				func_366(64);
				func_366(128);
			}
		}
	}
	func_367();
}

void func_263(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_264(var uParam0, var uParam1)
{
	if (func_84(*uParam0, 8))
	{
		return 0;
	}
	if (func_80(uParam1->f_18, 2048))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return 0;
		}
	}
	return 1;
}

void func_265(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (bParam0)
	{
		func_368(iParam1);
		return;
	}
	if (iParam1 == 2)
	{
		iParam1 = 56;
	}
	iVar0 = iParam1;
	bVar1 = !iVar0 & 4 != false;
	bVar2 = iVar0 & 8 != false;
	bVar3 = iVar0 & 16 != false;
	bVar4 = iVar0 & 32 != false;
	bVar5 = iVar0 & 1024 != false;
	bVar6 = iVar0 & 64 != false;
	func_369(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_266(var uParam0)
{
	Global_1099293->f_26.f_12 = uParam0;
}

bool func_267(int iParam0)
{
	return (Global_1099293->f_26.f_7 && iParam0) != 0;
}

bool func_268(int iParam0)
{
	return (Global_1099293->f_26.f_9 && iParam0) != 0;
}

int func_269()
{
	if (&Global_1099293 <= 5)
	{
		return &Global_1099293;
	}
	if (&Global_1099293 <= 22)
	{
		return 4;
	}
	if (&Global_1099293 <= 25)
	{
		return 3;
	}
	return 26;
}

int func_270(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (*uParam1 == 255)
	{
		return 0;
	}
	if (func_370(*uParam1))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam2, iParam0))
	{
		return 0;
	}
	if (bParam3)
	{
		if (!func_80(uParam1->f_1, 1))
		{
			return 0;
		}
	}
	return 1;
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

int func_272(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070355->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_273(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1273882->f_22[iVar0])
	{
		func_371(iParam0);
		return;
	}
	if (&Global_1070355->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_372(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070355->f_19683.f_1[iVar0 /*8*/] = 1;
}

int func_274(var uParam0)
{
	if (func_80(uParam0->f_1650, 32))
	{
		return 1;
	}
	return 0;
}

int func_275(var uParam0, int iParam1)
{
	if (func_140(*(uParam0->f_1621[iParam1 /*3*/])))
	{
		return 0;
	}
	return 1;
}

int func_276(var uParam0, char* sParam1)
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_225[iVar0 /*9*/]) && MISC::ARE_STRINGS_EQUAL(uParam0->f_225[iVar0 /*9*/], sParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
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

bool func_278(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

float func_279(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_280(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (func_212(uParam1))
	{
		return 1;
	}
	if (uParam0->f_2 == 3 || uParam0->f_2 == 2)
	{
		return 0;
	}
	if (uParam1->f_4 > 10)
	{
		return 1;
	}
	iVar0 = func_124(uParam1->f_9.f_2);
	if (!func_215(PLAYER::PLAYER_PED_ID(), *(uParam2->f_1621[iVar0 /*3*/]), 300f, 1, 1))
	{
		return 1;
	}
	if (func_213() != 0 && func_200() != func_214())
	{
		return 1;
	}
	return 0;
}

int func_281(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	char cVar7[64];
	
	if (uParam3->f_7 != 3)
	{
		return 1;
	}
	iVar0 = 1;
	if (!bParam5 && !VOLUME::_0x92A78D0BEDB332A3(*uParam4))
	{
		vVar1 = { 2f, 2f, 2f };
		vVar4 = { *uParam3 };
		StringCopy(&cVar7, "[MC][CS] CoverLoadArea - ", 64);
		StringConCat(&cVar7, " iCSIdx: ", 64);
		StringIntConCat(&cVar7, iParam0, 64);
		*uParam4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar4, 0f, 0f, uParam3->f_3, vVar1, &cVar7);
		if (VOLUME::_0x92A78D0BEDB332A3(*uParam4))
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

int func_282(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_283(var uParam0, char* sParam1)
{
	int iVar0;
	
	if (func_278(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_192), {func_373("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 16);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_192), {func_373("cutscene@", sParam1, 1, 63)}, 16);
	}
	func_204(uParam0, 8192);
}

Vector3 func_284(var uParam0)
{
	return uParam0->f_5;
}

int func_285(var uParam0, var uParam1, var uParam2)
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
		if (func_278(uParam0, 2) && !func_278(uParam0, 67108864))
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
		return 1;
	}
	return 0;
}

float func_286(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_287(var uParam0)
{
	return uParam0->f_187;
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
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4))
	{
		if (func_278(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			func_376(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
		}
	}
	if (func_278(uParam0, 8))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_4);
		func_69(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_69(uParam0, 16, 1);
}

float func_290(var uParam0)
{
	return uParam0->f_186;
}

bool func_291(var uParam0, int iParam1)
{
	return (uParam0->f_12 && iParam1) != 0;
}

void func_292(var uParam0)
{
	struct<8> Var0;
	
	Var0 = { func_377() };
	func_210(uParam0, &Var0);
}

void func_293(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_278(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4) && !func_378(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_195());
		func_204(uParam0, 8);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_379(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::_0xC1799FAFD2FDF52B(uParam0->f_4, 0, 0, iParam2);
		func_204(uParam0, 16);
	}
}

void func_294(var uParam0)
{
	if ((!func_278(uParam0, 32768) && ANIMSCENE::_0x25557E324489393C(uParam0->f_208)) && ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_208, 0))
	{
		func_247(uParam0);
		func_248(uParam0, 0);
		if (!ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_208, 1))
		{
			if (func_329(uParam0->f_263, 4194304))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_208, uParam0->f_5, uParam0->f_8, 2);
			}
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_208);
		}
		func_204(uParam0, 32768);
	}
}

struct<8> func_295(var uParam0)
{
	struct<8> Var0;
	
	Var0 = { func_380(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_381() };
	}
	return Var0;
}

void func_296(int iParam0, int iParam1, var uParam2)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam2->f_18))
	{
		VOLUME::_0x43F867EF5C463A53(uParam2->f_18);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_2))
	{
		AICOVERPOINT::_0x1A7A802B2301EDC0(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam2->f_2));
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam2->f_19))
	{
		VOLUME::_0x43F867EF5C463A53(uParam2->f_19);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_1))
	{
		AICOVERPOINT::_0x1A7A802B2301EDC0(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam2->f_1));
	}
}

void func_297(var uParam0, var uParam1, var uParam2)
{
	if (func_80(uParam1->f_5, 4))
	{
		return;
	}
	if (!func_80(uParam1->f_5, 2))
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
	if (!func_14(&(uParam0->f_1467)))
	{
		func_119(&(uParam0->f_1467), 1, 0);
	}
	if (uParam2->f_3 == 0 || func_35(&(uParam0->f_1467), 1, 0) >= uParam2->f_3)
	{
		func_79(&(uParam1->f_5), 4);
	}
}

void func_298(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	
	if (!func_300(uParam1))
	{
		return;
	}
	if (!func_80(uParam2->f_18, 2))
	{
		return;
	}
	iVar0 = 1;
	iVar1 = PLAYER::PLAYER_PED_ID();
	bVar2 = !func_80(uParam2->f_18, 64);
	iVar3 = func_124(uParam1->f_1.f_2);
	if (!func_80(uParam2->f_18, 4))
	{
		func_382(iVar1, *(uParam2->f_1621[iVar3 /*3*/]), 0, uParam2->f_4, uParam2->f_5, uParam2->f_6, uParam2->f_7, 1, 0, bVar2, 0);
	}
	if (!func_80(uParam2->f_18, 16))
	{
		fVar4 = (BUILTIN::TO_FLOAT(uParam2->f_8) / 1000f);
		if (func_383(iVar1, *(uParam2->f_1621[iVar3 /*3*/]), &(iParam0->f_1475), uParam2->f_7, fVar4, 0, 0, 0, bVar2))
		{
		}
	}
	if (!func_80(uParam2->f_18, 32))
	{
		if (!func_84(*iParam0, 5))
		{
			WEAPON::_0xFCCC886EDE3C63EC(iVar1, 2, 0);
			TASK::TASK_SWAP_WEAPON(iVar1, 1, 1, 0, 0);
			func_26(iParam0, 5);
		}
	}
	if (!func_80(uParam2->f_18, 8))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		if (CAM::_0xA2B1C7EF759A63CE() < 1f)
		{
			iVar0 = 0;
		}
	}
	if (iVar0 && !func_84(*iParam0, 6))
	{
		func_26(iParam0, 6);
	}
}

void func_299(int iParam0)
{
	if (Global_1939057->f_102.f_2 >= iParam0)
	{
		return;
	}
	Global_1939057->f_102.f_2 = iParam0;
}

int func_300(var uParam0)
{
	if (!func_116(uParam0))
	{
		return 0;
	}
	if (uParam0->f_4 <= 1 || uParam0->f_4 >= 10)
	{
		return 0;
	}
	return 1;
}

int func_301(var uParam0, var uParam1, int* iParam2, var uParam3, int iParam4, int iParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10)
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
				iVar20 = func_386(uParam0, iParam2, iParam4, iParam5, iParam6, &(uParam7->f_1), &uVar14, uParam10);
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
						func_26(&(uParam7->f_1.f_4), 0);
					}
					iVar19 = 2;
				}
				break;
			
			case 2:
				func_246(iParam2, uParam8, iParam4, iParam6, &cVar10, 0, 0);
				if (func_388(*uParam1))
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
					return 1;
				}
				break;
			
			case 8:
				if ((func_84(uParam0->f_1, 0) || func_80(uParam3->f_5, 1)) && func_392(&(uParam7->f_1), iParam4, iParam6, 0, &uVar15))
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
				return 1;
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
	return 0;
}

void func_302(var uParam0, var uParam1, var uParam2)
{
	if (uParam0->f_10 > 0 && uParam0->f_10 <= 2)
	{
		*uParam1++;
		*uParam2++;
	}
	else if (uParam0->f_10 > 2 && uParam0->f_10 <= 10)
	{
		*uParam2++;
	}
}

int func_303(var uParam0, int* iParam1, var uParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, char* sParam9, var uParam10)
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
				iVar17 = func_386(uParam0, iParam1, iParam3, iParam4, iParam5, uParam6, &iVar10, uParam10);
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
						func_26(&(uParam6->f_4), 0);
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
					else if (func_84(uParam6->f_4, 1))
					{
						NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uParam6->f_1, 1, 1, 7);
					}
					iVar16 = 8;
				}
				else
				{
					return 1;
				}
				break;
			
			case 8:
				if ((func_84(uParam0->f_1, 0) || func_80(uParam2->f_5, 1)) && func_392(uParam6, iParam3, iParam5, 0, uParam8))
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
				return 1;
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
	return 0;
}

int func_304(int* iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, var uParam6, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11, char* sParam12, var uParam13)
{
	struct<5> Var0;
	char* sVar5;
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
				iVar11 = func_386(uParam1, iParam0, iParam3, iParam4, iParam5, uParam6, iParam7, uParam13);
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
						func_26(&(uParam6->f_4), 0);
					}
					iVar10 = 2;
				}
				break;
			
			case 2:
				func_246(iParam0, uParam8, iParam3, iParam5, &sVar5, 0, 0);
				func_397(uParam2, iParam0, uParam6, iParam3, iParam5, uParam8, uParam10, &sVar5, 1, 0, 1);
				iVar10 = 4;
				break;
			
			case 4:
				if (uParam2->f_4 >= 7)
				{
					if (!func_390(uParam6) || func_398(uParam6, *iParam7, uParam13))
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
					else if (func_84(uParam9->f_1, 1))
					{
						NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uParam6->f_1, 1, 1, 7);
					}
					iVar10 = 8;
				}
				else
				{
					return 1;
				}
				break;
			
			case 8:
				if ((func_84(uParam1->f_1, 0) || func_80(uParam2->f_5, 1)) && func_399(uParam6, iParam3, iParam5, 0, uParam9))
				{
					MISC::_COPY_MEMORY(&(uParam6->f_5), &Var0, 5);
					iVar10 = 10;
				}
				break;
			
			case 10:
				func_246(iParam0, uParam8, iParam3, iParam5, &sVar5, 0, 0);
				func_397(uParam2, iParam0, uParam6, iParam3, iParam5, uParam8, uParam11, &sVar5, 0, 0, 1);
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
				return 1;
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
	return 0;
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
	if (func_84(Param2.f_1, 3))
	{
		VEHICLE::_0x201B8ED4FF7FE9F5(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_2));
	}
	else if (func_84(Param2.f_1, 4))
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

int func_306(int* iParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, int iParam8, var uParam9)
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
					return 1;
				}
				break;
			
			case 1:
				iVar21 = func_402(iParam0, uParam5, iParam3, uParam6);
				if (iVar21 != 0)
				{
					if (iVar21 == 1)
					{
						func_26(&(uParam5->f_4), 0);
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
				if (iParam7 == 0 || func_84(uParam5->f_5, 0))
				{
					iVar20 = 4;
				}
				break;
			
			case 4:
				if (uParam2->f_4 >= 7)
				{
					if (!func_390(uParam5) || func_398(uParam5, iVar15, uParam9))
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
					return 1;
				}
				break;
			
			case 8:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam5->f_1) || ((func_84(uParam1->f_1, 0) || func_80(uParam2->f_5, 1)) && func_399(uParam5, iParam3, iParam4, 0, &uVar16)))
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
				if (iParam8 == 0 || func_84(uParam5->f_5, 0))
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
				return 1;
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
	return 0;
}

bool func_307(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1099293->f_3 && iParam0) != 0;
	}
	return (((*Global_1097609)[iParam1 /*51*/])->f_3 && iParam0) != 0;
}

int func_308()
{
	return Global_1915170->f_19742;
}

void func_309(int iParam0, bool bParam1)
{
	if (!func_403(iParam0))
	{
		return;
	}
	if ((bParam1 && func_404(iParam0, 512)) || (!bParam1 && !func_404(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_405(iParam0, 512);
	}
	else
	{
		func_406(iParam0, 512);
	}
	if (func_407(iParam0))
	{
		INVENTORY::_0x9B4E793B1CB6550A();
	}
}

bool func_310()
{
	return func_408(4096);
}

bool func_311(int iParam0, int iParam1)
{
	return MISC::ABSI((MISC::_GET_SYSTEM_TIME() - iParam0)) >= iParam1;
}

bool func_312(int iParam0)
{
	return (Global_1099293->f_26.f_9 && iParam0) == iParam0;
}

int func_313(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(iParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return 0;
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
		return 0;
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
			return 1;
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
			func_316(uParam0->f_17[iVar0 /*12*/], 2);
		}
		else
		{
			func_414(uParam0->f_17[iVar0 /*12*/], 2);
		}
		return 1;
	}
	return 0;
}

bool func_314(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_0x772A1969F649E902(iVar0);
}

bool func_315(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_316(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
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

void func_318(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_BLOOD_DAMAGE(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::_0x7F5D88333EE8A86F(iParam0, iVar0);
		iVar0++;
	}
}

int func_319(var uParam0)
{
	return *uParam0;
}

void func_320(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (((!ANIMSCENE::_0x25557E324489393C(uParam0->f_208) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_208, 0)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_208)) || func_278(uParam0, 512))
	{
		if (!func_415(uParam0->f_264, 128))
		{
			func_416();
		}
		return;
	}
	if ((func_336(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_208, func_375(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_208, func_375(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_208))
	{
		if (!func_415(uParam0->f_264, 128))
		{
			func_416();
		}
		return;
	}
	iVar0 = 1;
	iVar1 = _NAMESPACE71::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (func_417(iVar1))
		{
			if (func_418(Global_26287, 0))
			{
				iVar0 = 0;
			}
		}
	}
	bVar2 = false;
	if (func_415(uParam0->f_264, 512))
	{
		bVar2 = true;
	}
	if (!func_278(uParam0, 2) && func_419(iVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_208);
		func_416();
	}
}

void func_321(var uParam0, char* sParam1)
{
	struct<8> Var0;
	char cVar8[32];
	
	if (func_319(uParam0) == 2 && (func_329(uParam0->f_263, 16384) || func_278(uParam0, 268435456)))
	{
		Var0 = { func_295(uParam0) };
		func_242(uParam0, &Var0);
	}
	func_420(uParam0, sParam1);
	if (func_278(uParam0, 131072))
	{
		func_421(uParam0, 0);
	}
	if (func_422())
	{
		func_423(1);
	}
	func_293(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_424(uParam0, cVar8);
	func_331(1, 0);
	func_288(uParam0);
	if (func_323(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_188);
	}
	func_425(uParam0);
	func_248(uParam0, 1);
	if (func_329(uParam0->f_263, 4194304))
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
	func_325(&(uParam0->f_1));
}

bool func_323(var uParam0, int iParam1)
{
	return (uParam0->f_191 && iParam1) != 0;
}

void func_324(var uParam0)
{
	struct<8> Var0;
	
	Var0 = { func_295(uParam0) };
	func_210(uParam0, &Var0);
}

void func_325(var uParam0)
{
	func_426(uParam0, 0f);
}

bool func_326(var uParam0)
{
	return func_427(*uParam0, 1);
}

void func_327(var uParam0, int iParam1)
{
	if (iParam1 || !func_326(uParam0))
	{
		func_325(uParam0);
	}
}

float func_328(var uParam0)
{
	if (!func_326(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_428(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_429() - uParam0->f_1);
}

bool func_329(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
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

void func_331(bool bParam0, int iParam1)
{
	if (func_430())
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_431())
		{
			func_432(1);
		}
	}
	AUDIO::_0x36559148B78853B3(0, iParam1, 0);
}

void func_332(var uParam0)
{
	vector3 vVar0;
	
	if (!func_278(uParam0, 4))
	{
		if (func_329(uParam0->f_263, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { func_433(uParam0) };
		if (!func_329(uParam0->f_263, 524288))
		{
			func_434(&(uParam0->f_275));
		}
		func_435(&(uParam0->f_263), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_436(uParam0, 0f, 0f, 0f);
		func_437(uParam0);
		func_438(uParam0);
		func_439(uParam0, 0f, 0f, 0f, 0, 0);
		func_440(uParam0);
		func_204(uParam0, 4);
		func_441(uParam0, 0);
		func_442(Global_35, 65601, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_276)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_276));
		}
	}
}

int func_333(var uParam0, int iParam1)
{
	if (func_278(uParam0, 262144))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_208))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_208, "ExportCamera"))
	{
		return 0;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_208, "ExportCamera") || (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_208, "ExportCamera") && iParam1)) || ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_208))
	{
		func_204(uParam0, 262144);
		func_441(uParam0, 1);
		return 1;
	}
	return 0;
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

int func_336(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_17[iVar0 /*12*/])) && &uParam0->f_17[iVar0 /*12*/] == iParam1) && func_315(uParam0->f_17[iVar0 /*12*/], iParam2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_337(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_208))
	{
		return 1;
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_208, 0))
	{
		if (func_278(uParam0, 524288))
		{
			ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
		}
		return 1;
	}
	if (func_278(uParam0, 1048576) && ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_208))
	{
		return 1;
	}
	if ((func_415(uParam0->f_264, 1024) && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_208, "ExportCamera")) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_208, "ExportCamera"))
	{
		return 1;
	}
	return 0;
}

void func_338(var uParam0)
{
	if (((func_278(uParam0, 1073741824) && !func_278(uParam0, 524288)) && func_278(uParam0, 512)) && CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(uParam0->f_292);
	}
}

void func_339(var uParam0)
{
	if (!func_278(uParam0, 536870912))
	{
		func_441(uParam0, 1);
		func_340(&(uParam0->f_264), uParam0->f_275);
		func_204(uParam0, 536870912);
	}
	if (func_278(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_443(uParam0);
	func_322(uParam0, 1);
	func_289(uParam0);
	func_243(uParam0);
	func_444(uParam0);
	func_445(uParam0, 4);
	func_292(uParam0);
	func_421(uParam0, 1);
	func_288(uParam0);
	func_446(&(uParam0->f_1));
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_208) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_208))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_208);
	}
	func_447(!func_415(uParam0->f_264, 128));
	if (!func_415(uParam0->f_264, 128))
	{
		func_416();
	}
}

void func_340(var uParam0, int iParam1)
{
	if (Global_1939168->f_6)
	{
		return;
	}
	func_448(2000);
	Global_13 = 0;
	if (!func_415(*uParam0, 2048))
	{
		func_449();
	}
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_415(*uParam0, 8));
	if (!func_415(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_415(*uParam0, 2) || func_415(*uParam0, 4))
	{
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(-1679307491);
	}
	if (!func_415(*uParam0, 16))
	{
		func_450(1);
	}
	if ((iParam1 != 0 && func_451(iParam1) != -525676072) && !func_415(*uParam0, 32))
	{
		func_452(Global_35, -1144282354, 0, 0, 0);
	}
	else if (func_453(-1406972469) != -1)
	{
		func_452(Global_35, -1406972469, 0, 0, 0);
	}
	func_454(Global_35, 98369, 1, 1, 0);
	*uParam0 = 0;
}

void func_341()
{
	Global_1939168->f_46 = 1;
}

bool func_342(int iParam0)
{
	return func_455(&(Global_524288->f_6), iParam0);
}

void func_343(bool bParam0)
{
	if (bParam0)
	{
		Global_1939221 = 1;
	}
	else
	{
		Global_1939221 = 2;
	}
}

void func_344()
{
	Global_1912965 = 1;
}

void func_345(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_13, iParam0))
	{
	}
	else
	{
		MISC::SET_BIT(&iLocal_13, iParam0);
		HUD::_0x4CC5F2FC1332577F(func_456(iParam0));
	}
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

void func_348()
{
	func_457(0);
}

void func_349(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Global_1070355->f_7 = 1;
	if ((Global_1273882->f_21 - Global_1070355->f_9) > 2)
	{
		if (bParam2)
		{
			func_458(20f);
		}
	}
	Global_1070355->f_9 = Global_1273882->f_21;
	if (bParam0)
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else
		{
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else
			{
				PED::SET_PED_RESET_FLAG(iVar1, 96, true);
			}
		}
		iVar2++;
	}
	if (func_459())
	{
		NETWORK::_0x236905C700FDB54D();
	}
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 25, true);
	CAM::_0x3C8F74E8FE751614();
	CAM::_0x634F4A0562CF19B8();
	func_460();
	if (bParam1)
	{
		HUD::_0x5651516D947ABC53();
	}
}

void func_350(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*uParam3 = 0;
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
				*uParam3++;
			}
		}
		iVar2++;
	}
	if (&uParam1->f_14[iParam2] > 0)
	{
		*uParam4 = &uParam1->f_14[iParam2];
	}
}

Vector3 func_351(char* sParam0)
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
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
			if (func_461(&(uLocal_14[iVar0])))
			{
				func_462(&(uLocal_14[iVar0]), 0, 1, 1);
				func_463(&(uLocal_14[iVar0]), 0, 1);
				func_464(uLocal_14[iVar0], 1, 1);
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

void func_359(bool bParam0)
{
	if (bParam0)
	{
		func_229(32);
	}
	else
	{
		func_366(32);
	}
}

void func_360(var uParam0, int iParam1, bool bParam2, var uParam3, int iParam4, bool bParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iParam4 = 1;
	}
	func_266(uParam0);
	func_366(1024);
	if (bParam5)
	{
		func_229(16);
	}
	func_465(iParam1);
	func_466(iParam4);
	if (bParam2)
	{
		Global_1099293->f_26.f_4 = 1;
		Global_1099293->f_26.f_5 = uParam3;
	}
}

int func_361(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
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

void func_365(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(iLocal_13, iParam0) || iParam1)
	{
		MISC::CLEAR_BIT(&iLocal_13, iParam0);
		HUD::_0x8BC7C1F929D07BF3(func_456(iParam0));
	}
}

void func_366(int iParam0)
{
	if (!func_470(iParam0))
	{
		return;
	}
	Global_1099293->f_26.f_9 = (Global_1099293->f_26.f_9 - (Global_1099293->f_26.f_9 && iParam0));
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

void func_368(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	ENTITY::SET_ENTITY_VISIBLE(iVar1, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 2, 1);
	ENTITY::_0x18FF3110CF47115D(iVar1, 3, 1);
	ENTITY::_0x18FF3110CF47115D(iVar1, 11, 1);
	ENTITY::_0x18FF3110CF47115D(iVar1, 12, 1);
	ENTITY::_0x18FF3110CF47115D(iVar1, 1, 1);
	ENTITY::_0x18FF3110CF47115D(iVar1, 0, 1);
	PED::SET_PED_CAN_RAGDOLL(iVar1, true);
	bVar2 = uParam0 & 256 != false;
	if (bVar2)
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, 1, 0, 0);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, 1, 4, 0);
	}
	ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
	if (uParam0 & 512 != 0)
	{
	}
	else
	{
		func_222();
	}
	PLAYER::SET_PLAYER_INVINCIBLE(iVar0, false);
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar1, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, true, false);
	}
}

void func_369(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!bParam0)
	{
	}
	if (bParam1)
	{
	}
	if (bParam2)
	{
	}
	if (bParam3)
	{
	}
	if (bParam6)
	{
	}
	if (bParam4)
	{
	}
	if (bParam5)
	{
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = 0;
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		iVar2 = 4;
	}
	if (bParam4)
	{
		iVar2 |= 256;
	}
	if (bParam5)
	{
		iVar2 |= 2048;
	}
	PLAYER::SET_PLAYER_CONTROL(iVar0, 0, iVar2, 0);
	ENTITY::SET_ENTITY_VISIBLE(iVar1, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 2, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 3, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 11, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 12, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 1, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 0, bParam0);
	if (bParam1)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(iVar0, true);
	}
	if ((!PED::IS_PED_IN_ANY_VEHICLE(iVar1, true) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(iVar1)) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
	{
		if (bParam2)
		{
			ENTITY::SET_ENTITY_COLLISION(iVar1, false, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
		}
	}
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		if (TASK::_0x9FF5F9B24E870748(iVar1))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 0, !bParam6);
		}
	}
}

bool func_370(int iParam0)
{
	return func_307(128, iParam0);
}

void func_371(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1070355->f_19683.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_372(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070355->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_372(int iParam0)
{
	if ((Global_1070355->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070355->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070355->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

struct<8> func_373(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	struct<8> Var18;
	
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, HUD::_0x806862E5D266CF38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, HUD::_0x806862E5D266CF38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
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

bool func_378(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_379(var uParam0, int iParam1, int iParam2, bool bParam3)
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
	uParam0->f_13 = PED::_0x4C39C95AE5DB1329(iParam1, iParam2, iVar0);
}

struct<8> func_380(var uParam0)
{
	return uParam0->f_217;
}

struct<8> func_381()
{
	char cVar0[64];
	
	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

void func_382(int iParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	if (bParam4)
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return;
	}
	if (func_378(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((fParam5 < 0f || fParam6 < 0f) || fParam7 < 0f) || fParam8 < 0f)
	{
		return;
	}
	if (((((!fParam5 > fParam6 || !fParam5 > fParam7) || !fParam5 > fParam8) || !fParam6 > fParam7) || !fParam6 > fParam8) || !fParam7 > fParam8)
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	fVar3 = func_286(iParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_0xEA44E97849E9F3DD(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_0xA8BA0BAE0173457B(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.75f);
					VEHICLE::_0x0C3F0F7F92CA847C(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam6 && fVar3 > fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1.5f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_0xEA44E97849E9F3DD(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_0xA8BA0BAE0173457B(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.25f);
					VEHICLE::_0x0C3F0F7F92CA847C(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
			if (iParam9 == 1)
			{
				if (PED::_0x33FA048675821DA7(iVar0, 3))
				{
					PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_0xEA44E97849E9F3DD(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_0xA8BA0BAE0173457B(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1f);
					if (iParam9 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (PED::_0x33FA048675821DA7(iVar0, 3))
							{
								PED::_0x06D26A96CA1BCA75(iVar2, 3, 0f, 0);
							}
						}
					}
					VEHICLE::_0x0C3F0F7F92CA847C(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (fVar3 <= fParam8)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !func_472(iParam0, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_472(iParam0, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, iParam12);
			}
		}
	}
}

int func_383(int iParam0, vector3 vParam1, var uParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
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
	fVar4 = func_286(iParam0, vParam1, 1);
	if (!func_326(uParam4))
	{
		if (fVar4 <= fParam5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				func_327(uParam4, 0);
			}
		}
	}
	else if (iParam7 && fVar4 > fParam5)
	{
		func_446(uParam4);
	}
	if (func_326(uParam4))
	{
		if (bParam10)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && VEHICLE::_0xEA44E97849E9F3DD(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = VEHICLE::_0xA8BA0BAE0173457B(iVar2, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, 1f);
					VEHICLE::_0x0C3F0F7F92CA847C(iVar2, PED::_0x46BF2A810679D6E6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (func_328(uParam4) >= fParam6)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_472(iParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return 1;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !func_472(iParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
					return 1;
				}
			}
		}
		if (iParam0 == Global_35 && iParam8 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(iParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			}
			PED::SET_PED_RESET_FLAG(iParam0, 175, true);
		}
	}
	return 0;
}

int func_384(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4)
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
	int iVar3;
	int iVar4;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_3)))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_1);
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2);
	bVar2 = func_473(uParam1->f_1) == PLAYER::PLAYER_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (PED::IS_PED_MALE(iVar1))
	{
		iVar3 = MISC::GET_HASH_KEY(&(uParam2->f_3));
	}
	else
	{
		iVar3 = MISC::GET_HASH_KEY(&(uParam2->f_7));
	}
	if (PED::_0xA0BC8FAED8CFEB3C(iVar1))
	{
		if (!func_84(uParam1->f_4, 14) && func_84(uParam1->f_4, 15))
		{
			func_474(iVar1, iVar3);
			func_26(&(uParam1->f_4), 14);
		}
		if (!func_84(uParam1->f_4, 15))
		{
			PED::_0x59BD177A1A48600A(iVar1, 1);
			func_26(&(uParam1->f_4), 15);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_2, MISC::GET_HASH_KEY("ChangeOutfit")))
	{
		if (!func_84(uParam1->f_4, 17) && PED::_0xA0BC8FAED8CFEB3C(iVar1))
		{
			func_475(iVar1, iVar3);
			func_26(&(uParam1->f_4), 17);
		}
		if (!func_84(uParam1->f_4, 16))
		{
			if (!bVar2)
			{
				func_26(&(uParam1->f_4), 16);
			}
			else if (PED::_0xA0BC8FAED8CFEB3C(iVar0) && func_476())
			{
				func_475(iVar0, iVar3);
				iVar4 = iVar3;
				func_477(&iVar4);
				func_26(&(uParam1->f_4), 16);
			}
		}
	}
}

int func_386(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
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
		iVar0 = func_240(uParam1, iParam3);
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
		iVar4 = func_181(uParam7, iParam3, iParam4, &iVar2, iParam6, &iVar3);
		uParam5->f_1 = MISC::_0xEE04C0AFD4EFAF0E(iVar2);
		if (iVar4 == 0)
		{
			if (!func_14(&(uParam5->f_11)))
			{
				func_15(&(uParam5->f_11), 0, 0);
			}
			if (func_35(&(uParam5->f_11), 0, 0) >= 15000)
			{
				func_260(&(uParam5->f_11));
				return 2;
			}
			return 0;
		}
		else if (iVar4 == 2 || !ENTITY::DOES_ENTITY_EXIST(uParam5->f_1))
		{
			func_260(&(uParam5->f_11));
			return 2;
		}
		else if (iVar4 == 1)
		{
			func_260(&(uParam5->f_11));
			*uParam5 = iParam3;
			return 1;
		}
	}
	return 0;
}

int func_387(var uParam0, var uParam1, char* sParam2)
{
	struct<4> Var0;
	
	Var0 = { func_244(sParam2, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_1.f_1), uParam1->f_1, 0) };
	return func_478(uParam0, &Var0);
}

int func_388(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		iVar0 = iParam0;
		if (!func_230(iVar0))
		{
			return 0;
		}
		iVar1 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			return 0;
		}
		return 1;
	}
	return 0;
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
			func_26(&(uParam2->f_5), 1);
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
		else if (!func_84(uParam2->f_13.f_3, 0))
		{
			func_26(&(uParam2->f_13.f_3), 0);
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
	if (func_84(uParam6->f_6, 0) && AITRANSPORT::_0xDC44F405A6B98D03(iVar0, 0))
	{
		bVar9 = true;
	}
	if (func_397(uParam0, iParam1, uParam2, iParam3, iParam4, uParam5, uParam6, sParam7, bParam8, bVar9, func_84(uParam2->f_5, 1)))
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
		else if (!func_84((iParam1->f_1104[iVar10 /*15*/])->f_5, 0))
		{
			if (uParam2->f_13 != 6 || uParam2->f_13.f_4 == -1)
			{
				(iParam1->f_1104[iVar10 /*15*/])->f_5.f_1 = { uParam2->f_5.f_1 };
				(iParam1->f_1104[iVar10 /*15*/])->f_5.f_4 = uParam2->f_5.f_4;
				func_26(&((iParam1->f_1104[iVar10 /*15*/])->f_5), 0);
			}
		}
	}
	if (bVar9)
	{
		return 1;
	}
	return 2;
}

int func_390(var uParam0)
{
	if (!func_84(uParam0->f_4, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

int func_391(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 1;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_1);
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
	{
		return 0;
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
			return 1;
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iVar5, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar5, true);
		func_482(iVar0, iVar5);
		ENTITY::SET_ENTITY_COORDS(iVar5, vVar1, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iVar5, fVar4);
		func_394(iVar5, 1);
		uParam0->f_2 = iVar5;
	}
	if (!func_483(iVar0, iVar5, &(uParam0->f_4)))
	{
		return 0;
	}
	return 1;
}

int func_392(var uParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
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
	return 1;
}

int func_393(int* iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar14;
	int iVar15;
	int iVar16;
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
			return 0;
		}
		else if (func_84(Var1.f_4, 0))
		{
			if (func_486(iParam0, uParam3->f_13.f_2, uParam3->f_13.f_1, bParam5, &iVar14))
			{
			}
			else
			{
				return 0;
			}
		}
	}
	iVar15 = 0;
	iVar16 = func_487(iVar0, 1, 0, 0);
	Var17 = { func_488() };
	bVar21 = false;
	bVar22 = func_84(uParam4->f_6, 5);
	switch (uParam4->f_11)
	{
		case 0:
			break;
		
		case 1:
			WEAPON::_0xFCCC886EDE3C63EC(iVar0, 2, 1);
			break;
		
		case 2:
			iVar15 = WEAPON::GET_BEST_PED_WEAPON(iVar0, bVar22, true);
			break;
		
		case 4:
			iVar15 = WEAPON::_0xDA37A053C1522F5D(iVar0, bVar22, 0, 0);
			break;
		
		case 5:
			iVar15 = uParam4->f_12;
			break;
		
		case 3:
			iVar15 = WEAPON::GET_BEST_PED_WEAPON(iVar0, bVar22, false);
			break;
		
		case 6:
			if (func_84(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == -1241684019)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, -1241684019, bVar22, 0);
			}
			break;
		
		case 7:
			if (func_84(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == 1622482340)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, 1622482340, bVar22, 0);
			}
			break;
		
		case 8:
			if (func_84(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == -1569042529)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, -1569042529, bVar22, 0);
			}
			break;
		
		case 9:
			if (func_84(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == -954861255)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, -954861255, bVar22, 0);
			}
			break;
		
		case 10:
			if (func_84(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == 308416707)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, 308416707, bVar22, 0);
			}
			break;
		
		case 11:
			if (func_84(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == -728555052)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, -728555052, bVar22, 0);
			}
			break;
		
		case 12:
			if (func_84(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == 1595662460)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, 1595662460, bVar22, 0);
			}
			break;
		
		case 13:
			if (func_84(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == 416676503)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, 416676503, bVar22, 0);
			}
			break;
		
		case 14:
			if (func_84(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == -594562071)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, -594562071, bVar22, 0);
			}
			break;
		
		case 15:
			if (func_84(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == -1101297303)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, -1101297303, bVar22, 0);
			}
			break;
		
		case 16:
			if (func_84(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == 970310034)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, 970310034, bVar22, 0);
			}
			break;
		
		case 17:
			if (func_84(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == 860033945)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, 860033945, bVar22, 0);
			}
			break;
		
		case 18:
			if (func_84(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == -1212426201)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, -1212426201, bVar22, 0);
			}
			break;
		
		case 19:
			if (func_84(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == 1548507267)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, 1548507267, bVar22, 0);
			}
			break;
		
		case 20:
			if (func_84(uParam4->f_6, 4) && WEAPON::_0xD955FEE4B87AFA07(iVar16))
			{
				iVar15 = iVar16;
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
		if ((iVar23 >= 6 && iVar23 <= 19) && iVar15 == 0)
		{
			iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, -1101297303, bVar22, 0);
			if (iVar15 == 0)
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, 416676503, bVar22, 0);
				if (iVar15 == 0)
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(iVar0, 392538360, 0, 0))
					{
						iVar15 = 392538360;
					}
				}
			}
		}
		if (iVar15 != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(iVar0, iVar15, 0, 0))
			{
				WEAPON::_GIVE_WEAPON_TO_PED_2(iVar0, iVar15, 0, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				WEAPON::_0xB190BCA3F4042F95(iVar0, iVar15, 10, 752097756);
				WEAPON::SET_PED_INFINITE_AMMO(iVar0, true, iVar15);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iVar15, true, 0, false, false);
		}
	}
	if (!func_489(iVar0, uParam4))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return 1;
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
					PED::_0x7DE9692C6F64CFE8(iVar0, 0, 0, 1);
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
				PED::_0x7DE9692C6F64CFE8(iVar0, 1, 0, 1);
			}
			break;
		
		case 3:
			if (!func_361(iVar0, -1959848946))
			{
				if (ENTITY::_0x083D497D57B7400F(iVar0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
					bVar24 = true;
				}
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iVar0, uParam3->f_5.f_1, -1, 1, 0, 1, func_84(uParam4->f_6, 1), 0, 0, 1, 0);
				PED::_0x2208438012482A1A(iVar0, false, false);
				if (bVar24)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				}
			}
			break;
		
		case 4:
			if (!func_361(iVar0, -2108652971))
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
				return 0;
			}
			break;
		
		case 6:
		case 7:
		case 8:
			if (!ENTITY::DOES_ENTITY_EXIST(iVar14))
			{
				return 1;
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
					return 0;
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
	return 1;
}

void func_394(int iParam0, bool bParam1)
{
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, bParam1);
	ENTITY::SET_ENTITY_COLLISION(iParam0, !bParam1, false);
	ENTITY::SET_ENTITY_VISIBLE(iParam0, !bParam1);
}

int func_395(var uParam0, var uParam1, var uParam2, char* sParam3)
{
	if (!func_84(uParam2->f_1, 0) && ENTITY::IS_ENTITY_DEAD(uParam1->f_1))
	{
		return 2;
	}
	return func_478(uParam0, sParam3);
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
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, *(uParam5->f_1621[iVar5 /*3*/]), true) < 100f && func_84(uParam6->f_4, 0))
	{
		bVar6 = true;
	}
	if (func_84(uParam6->f_4, 1))
	{
		bVar7 = true;
	}
	if (!bVar6)
	{
		if (func_84(uParam6->f_4, 2))
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
		if (!func_140(*uParam6))
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

int func_398(var uParam0, int iParam1, var uParam2)
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
				return func_492(uParam0, uParam2);
			}
			break;
		
		case 3:
			return func_493(uParam0);
	}
	return 1;
}

int func_399(var uParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
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
	if (func_84(uParam0->f_5, 1))
	{
		func_494(iVar0, uParam0->f_5.f_1, uParam0->f_5.f_4, 1, 1073741824);
	}
	else
	{
		func_494(iVar0, uParam0->f_5.f_1, uParam0->f_5.f_4, 2, 1073741824);
	}
	if (!func_84(uParam4->f_1, 2))
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
	return 1;
}

int func_400(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
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
	return 1;
}

void func_401(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_2, iParam4))
	{
		if (!func_84(uParam1->f_4, iParam2) && func_84(uParam0->f_1, 0))
		{
			func_26(&(uParam1->f_4), iParam2);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam1->f_1))
			{
				iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_1);
				VEHICLE::_0xD4F5EFB55769D272(iVar0, iParam5);
			}
		}
		if (!func_84(uParam1->f_4, iParam3))
		{
			func_26(&(uParam1->f_4), iParam3);
			iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_2);
			VEHICLE::_0xD4F5EFB55769D272(iVar1, iParam5);
		}
	}
}

int func_402(var uParam0, var uParam1, int iParam2, var uParam3)
{
	char* sVar0;
	
	if (!func_246(uParam0, uParam3, iParam2, 0, &sVar0, 0, 0))
	{
		return 2;
	}
	return func_478(uParam0, &sVar0);
}

bool func_403(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 39);
}

int func_404(int iParam0, int iParam1)
{
	if (!func_403(iParam0))
	{
		return 0;
	}
	if (func_30() == -1)
	{
		return ((Global_1915170->f_3[iParam0 /*447*/])->f_6 && iParam1) != 0;
	}
	else
	{
		return ((Global_1051387->f_69[iParam0 /*76*/])->f_1 && iParam1) != 0;
	}
	return 0;
}

void func_405(int iParam0, int iParam1)
{
	if (!func_403(iParam0))
	{
		return;
	}
	if (func_30() == -1)
	{
		(Global_1915170->f_3[iParam0 /*447*/])->f_6 = ((Global_1915170->f_3[iParam0 /*447*/])->f_6 || iParam1);
	}
	else
	{
		(Global_1051387->f_69[iParam0 /*76*/])->f_1 = ((Global_1051387->f_69[iParam0 /*76*/])->f_1 || iParam1);
	}
}

void func_406(int iParam0, int iParam1)
{
	if (!func_403(iParam0))
	{
		return;
	}
	if (func_30() == -1)
	{
		(Global_1915170->f_3[iParam0 /*447*/])->f_6 = ((Global_1915170->f_3[iParam0 /*447*/])->f_6 - ((Global_1915170->f_3[iParam0 /*447*/])->f_6 && iParam1));
	}
	else
	{
		(Global_1051387->f_69[iParam0 /*76*/])->f_1 = ((Global_1051387->f_69[iParam0 /*76*/])->f_1 - ((Global_1051387->f_69[iParam0 /*76*/])->f_1 && iParam1));
	}
}

int func_407(int iParam0)
{
	if (func_495())
	{
		if (Global_1915170->f_19742 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_408(int iParam0)
{
	return (Global_1099293->f_197 && iParam0) != 0;
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

void func_414(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_415(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_416()
{
	if (func_461(Global_26287))
	{
		func_464(&Global_26287, 0, 0);
	}
}

int func_417(int iParam0)
{
	int iVar0;
	
	if (func_498(iParam0))
	{
		iVar0 = _NAMESPACE71::_0x59FA676177DBE4C9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return 0;
}

bool func_418(int iParam0, int iParam1)
{
	if (iParam1 && !func_461(iParam0))
	{
		return false;
	}
	return !func_499(iParam0, 4);
}

int func_419(int iParam0, bool bParam1)
{
	if (!func_461(Global_26287))
	{
		Global_26287 = func_500("CUTSCENE_SKIP", -842734359, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
		((*Global_1949749)[Global_26287 /*23*/])->f_16 = &Global_20[3];
		func_463(Global_26287, 0, 1);
		func_501(Global_26287, 6, 1);
		if (bParam1)
		{
			func_501(Global_26287, 14, 1);
		}
	}
	else
	{
		if (!func_418(Global_26287, 0))
		{
			func_462(Global_26287, 1, 1, 1);
		}
		if (func_502(Global_26287, 1) != 0f && iParam0)
		{
			func_463(Global_26287, 1, 1);
		}
		else
		{
			func_463(Global_26287, 0, 1);
		}
		return func_503(Global_26287, 1);
	}
	return 0;
}

void func_420(var uParam0, var uParam1)
{
	if (((!func_278(uParam0, 32) || func_504(uParam0)) || func_278(uParam0, 268435456)) && !func_278(uParam0, 65536))
	{
		func_207(&(uParam0->f_263), 256);
	}
}

void func_421(var uParam0, int iParam1)
{
	var uVar0;
	
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 9, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 9, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 7, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 7, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 8, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 8, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 10, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 10, iParam1);
	}
}

int func_422()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
	{
		return 1;
	}
	return 0;
}

void func_423(int iParam0)
{
	if (func_422())
	{
		Global_1956176 = 1;
	}
	if (func_505(-92416669))
	{
	}
	if (iParam0 && Global_1939168->f_38 == -1016714371)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		Global_1939168->f_38 = joaat("weapon_unarmed");
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

void func_426(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_429() - fParam1);
	func_507(uParam0, 1);
	func_508(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_427(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_428(var uParam0)
{
	return func_427(*uParam0, 2);
}

float func_429()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_430()
{
	return func_498(_NAMESPACE71::_0xC17F69E1418CD11F(3));
}

bool func_431()
{
	int iVar0;
	
	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_432(int iParam0)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

Vector3 func_433(var uParam0)
{
	return uParam0->f_265;
}

void func_434(var uParam0)
{
	int iVar0;
	
	if (func_509(&iVar0))
	{
		if (func_510(iVar0, 0))
		{
			if (func_451(iVar0) == -525676072)
			{
				func_511(-1406972469, Global_35, 0, 0);
			}
			else
			{
				func_511(-1144282354, Global_35, 0, 0);
			}
		}
		if (*uParam0 == 0)
		{
			*uParam0 = iVar0;
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
		func_512(-1);
		func_513(-1);
	}
	if (!func_329(*uParam0, 8388608))
	{
		func_330(1);
	}
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!func_329(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_329(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_329(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_329(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_329(*uParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam1, 1);
	}
	if (!func_329(*uParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!func_329(*uParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!func_329(*uParam0, 4) && !func_329(*uParam0, 2))
	{
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(-1679307491);
	}
	if (!func_329(*uParam0, 2048))
	{
		func_514(0);
	}
	if (func_329(*uParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
	}
	if (func_329(*uParam0, 256))
	{
		WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
	}
	if (func_329(*uParam0, 8192))
	{
		func_515();
	}
	if (!func_329(*uParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!func_329(*uParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!func_329(*uParam0, 1024))
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
		if (!func_329(*uParam0, 16))
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
						if (func_516() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (func_140(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_517(&vVar3, 50, 10, 0, 0);
					}
					vVar3.f_2 = (vVar3.z + 10f);
					if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar3, &(vVar3.f_2), 1))
					{
					}
					PED::_0xED00D72F81CF7278(iVar7, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_518(2);
						func_519(-1);
						func_520(vVar3);
						func_522(func_521());
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
	if (!func_329(*uParam0, 4096))
	{
		func_318(Global_35);
	}
	if (!func_329(*uParam0, 1048576))
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!func_329(*uParam0, 2097152) && !func_208(136))
	{
		if (func_523() || PED::_0x50F124E6EF188B22(Global_35))
		{
			func_524(1);
		}
	}
	*uParam0 = 0;
}

void func_436(var uParam0, vector3 vParam1)
{
	uParam0->f_265 = { vParam1 };
}

void func_437(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (func_278(uParam0, 2048) && !func_140(func_525(uParam0)))
	{
		bVar0 = VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4);
		iVar1 = PED::_0x4C8B59171957BCF7(Global_35);
		if ((!ENTITY::IS_ENTITY_DEAD(iVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar1, uParam0->f_4, true, 0)) || func_278(uParam0, -2147483648))) && PED::GET_MOUNT(Global_35) != iVar1)
		{
			func_494(iVar1, func_525(uParam0), func_526(uParam0), 2, 1073741824);
		}
		iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar2) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar2, uParam0->f_4, true, 0)) || func_278(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar2, true))
		{
			func_494(iVar2, func_525(uParam0), func_526(uParam0), 2, 1073741824);
		}
	}
}

void func_438(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if ((func_278(uParam0, 268435456) && !func_140(func_525(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { func_525(uParam0) };
			func_494(iVar0, vVar1, func_527(vVar1, Global_36, 1), 2, 1073741824);
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
	if (func_140(vParam1))
	{
		func_69(uParam0, 2048, 1);
	}
	else
	{
		func_204(uParam0, 2048);
		if (bParam5)
		{
			func_204(uParam0, -2147483648);
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
					if (!func_315(uParam0->f_17[iVar0 /*12*/], 8))
					{
						if (func_529(func_528(iVar1, 0, 1, 0)))
						{
							if (!func_530(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("weapon_unarmed"), true, 0, false, false);
							}
						}
						if (func_529(func_528(iVar1, 1, 1, 0)))
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
	else if (!func_415(uParam0->f_264, 256))
	{
		func_531(Global_35, &(Global_1951131->f_1657.f_1[28 /*3*/]), 0, -735900586, 1, 1, 0, 1, 0, 0, 1);
		func_206(&(uParam0->f_264), 256);
	}
	Global_14 = !bParam1;
}

int func_442(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_532(14, iParam1, 0, 0, 0);
		}
		else
		{
			func_532(14, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_533(0))
	{
	}
	func_534(&(Global_1951131->f_1657), iParam0, 1, iParam1, 1, iParam3, 1, 1);
	return 1;
}

void func_443(var uParam0)
{
	StringCopy(&(uParam0->f_192), "", 128);
	func_535(uParam0);
	func_536(uParam0);
	func_537(uParam0);
}

void func_444(var uParam0)
{
	uParam0->f_11 = 0;
}

void func_445(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_414(uParam0->f_17[iVar0 /*12*/], iParam1);
		iVar0++;
	}
}

void func_446(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
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
		func_416();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

void func_448(int iParam0)
{
	func_538();
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

void func_450(bool bParam0)
{
	if (bParam0)
	{
		Global_1949749->f_1381 = (Global_1949749->f_1381 - Global_1949749->f_1381 & 2);
	}
	else
	{
		Global_1949749->f_1381 |= 2;
	}
	func_539(bParam0);
}

int func_451(int iParam0)
{
	struct<2> Var0;
	
	if (!func_510(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_452(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_540(iParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_541(iParam1);
	return func_454(iParam0, iVar0, bParam2, bParam2, bParam4);
}

int func_453(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_1951131->f_2706.f_1)
	{
		if (&Global_1951131->f_2706.f_43[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_454(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (bParam4)
	{
		iVar0 = 8192;
	}
	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_532(15, iParam1, iVar0, 0, 0);
		}
		else
		{
			func_532(15, iParam1, iVar0 | 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_542(bParam4))
	{
	}
	func_534(&(Global_1951131->f_1657), iParam0, 1, iParam1, 1, iParam3, 1, 1);
	return 1;
}

bool func_455(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_456(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 598430796;
		
		case 1:
			return 690901814;
		
		case 3:
			return 2083323686;
		
		case 2:
			return 474191950;
		
		case 4:
			return 128623374;
		
		case 6:
			return -993263478;
		
		case 7:
			return 1344742130;
		
		case 8:
			return 537169871;
		
		case 9:
			return -1763610107;
		
		case 10:
			return 68203906;
		
		case 11:
			return 253418738;
		
		case 12:
			return 433996714;
		
		case 13:
			return 999578278;
	}
	return 0;
}

void func_457(int iParam0)
{
	Global_1954462->f_1331.f_2 = 0f;
	Global_1954462->f_1331.f_1 = iParam0;
}

void func_458(float fParam0)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	MISC::CLEAR_AREA(vVar1, fParam0, 65536);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(vVar1, fParam0);
}

int func_459()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

void func_460()
{
	Global_1939221->f_1433.f_7962 = 0;
	Global_1939221->f_1433.f_7963 = MISC::GET_GAME_TIMER() + 1000;
}

bool func_461(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (((*Global_1949749)[iParam0 /*23*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iParam0 /*23*/])->f_3);
}

void func_462(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam2 && !func_461(iParam0))
	{
		return;
	}
	iVar0 = func_543(iParam0);
	if (bParam1)
	{
		func_544(iParam0, 4);
		if (bParam3)
		{
			func_545(iVar0, 1);
		}
		func_546(iVar0, 1);
	}
	else
	{
		func_547(iParam0, 4);
		func_546(iVar0, 0);
	}
}

void func_463(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 && !func_461(iParam0))
	{
		return;
	}
	iVar0 = func_543(iParam0);
	func_545(iVar0, iParam1);
}

void func_464(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 && !func_461(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_543(*uParam0);
	if (((*Global_1949749)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_548(iVar0);
	*uParam0 = 0;
}

void func_465(int iParam0)
{
	if (Global_1099293->f_26.f_19 == iParam0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Global_1099293->f_26.f_19 = 0;
		return;
	}
	if (iParam0 == func_549(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1099293->f_26.f_21))
		{
			iParam0 = Global_1099293->f_26.f_21;
		}
	}
	Global_1099293->f_26.f_19 = iParam0;
}

void func_466(int iParam0)
{
	Global_1099293->f_26.f_3 = iParam0;
}

void func_467(vector3 vParam0)
{
	float fVar0;
	vector3 vVar1;
	
	if (!Global_1939168->f_6)
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, vParam0) };
		fVar0 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar0, 1065353216);
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
		return -1871534317;
	}
	if (fParam0 >= 1f && fParam0 < 2f)
	{
		return -668482597;
	}
	if (fParam0 >= 2f && fParam0 < 3f)
	{
		return -530524;
	}
	if (fParam0 == 3f)
	{
		return -1115154469;
	}
	return -1871534317;
}

bool func_470(var uParam0)
{
	return (Global_1099293->f_26.f_9 && uParam0) != 0;
}

char* func_471(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return "Arthur";
		
		case -1464743433:
			return "Abe";
		
		case -1418951751:
			return "ABERDEENPIGFARMER";
		
		case 2029634351:
			return "ABERDEENSISTER";
		
		case -288068792:
			return "AbigailRoberts";
		
		case 513427234:
			return "AlbertMason";
		
		case -121985991:
			return "ArchieDown";
		
		case -205121720:
			return "Baptiste";
		
		case -77509825:
			return "BartholomewBraithwaite";
		
		case -55633154:
			return "CS_BEATENUPCAPTAIN";
		
		case 1266159496:
			return "BeauGray";
		
		case -2045269112:
			return "PenelopeBraithwaite";
		
		case 2070393450:
			return "BillWilliamson";
		
		case 477547053:
			return "BraithwaiteServant";
		
		case 1382164045:
			return "CatherineBraithwaite";
		
		case 1407031519:
			return "CharlesSmith";
		
		case -754733870:
			return "CS_CIGCARDGUY";
		
		case 1253299569:
			return "CS_DINOBONESLADY";
		
		case -464684897:
			return "Cleet";
		
		case -820975767:
			return "ColmODriscoll";
		
		case -1765531164:
			return "CreoleGuy";
		
		case -820854800:
			return "SDDoctor_01";
		
		case 382040614:
			return "DaleMaroney";
		
		case 1944593012:
			return "Dutch";
		
		case -450226655:
			return "EdithDown";
		
		case -1920451728:
			return "Fussar";
		
		case 1514128030:
			return "cs_fishcollector";
		
		case -1865855539:
			return "Bronte";
		
		case -1629501717:
			return "GuidoMartelli";
		
		case -1208814201:
			return "U_M_M_NBXBRONTEGOON_01";
		
		case 1478983280:
			return "G_M_M_UNIBRONTEGOONS_01";
		
		case -1769295812:
			return "GarethBraithwaite";
		
		case 1020041649:
			return "GenStoryFemale";
		
		case -639059862:
			return "GenStoryMale";
		
		case -920985758:
			return "Leon";
		
		case -1154137714:
			return "GeraldBraithwaite";
		
		case 1225208808:
			return "HoseaMatthews";
		
		case 1912073755:
			return "JackMarston";
		
		case -631664452:
			return "JackMarston_Teen";
		
		case 4991732:
			return "Jamie";
		
		case 1843625996:
			return "JavierEscuella";
		
		case 1815090590:
			return "JimCalloway";
		
		case -446093729:
			return "Joe";
		
		case 95866989:
			return "JohnMarston";
		
		case 2100656433:
			return "CS_JOHNWEATHERS";
		
		case 1006468445:
			return "JosiahTrelawny";
		
		case -1707202053:
			return "Karen";
		
		case 358502875:
			return "MrsAdler";
		
		case 1939579094:
			return "Kieran";
		
		case -100461901:
			return "LeoStrauss";
		
		case 1304311224:
			return "LondonderrySon";
		
		case -1690877284:
			return "MaryBeth";
		
		case 1051047356:
			return "MaryLinton";
		
		case -566878875:
			return "MicahBell";
		
		case -346700962:
			return "MollyOshea";
		
		case -272634447:
			return "CS_MrLinton";
		
		case 984264800:
			return "MrPearson";
		
		case 1367851675:
			return "MrsLondonderry";
		
		case -2075588078:
			return "Mud2BigGuy";
		
		case 2115504616:
			return "ProfessorBell";
		
		case 1618031732:
			return "RevSwanson";
		
		case -265719023:
			return "CS_Samaritan";
		
		case -1483559144:
			return "StrDeputy_01";
		
		case -572941403:
			return "StrDeputy_02";
		
		case -2081966149:
		case 2012148102:
			return "StrSheriff_01";
		
		case 1695129705:
			return "SusanGrimshaw";
		
		case 1407740785:
			return "TavishGray";
		
		case 1231309423:
			return "TheodoreLevin";
		
		case 65010948:
			return "ThomasDown";
		
		case 1038525765:
			return "Tilly";
		
		case -969464097:
			return "Uncle";
		
		case 1057570823:
			return "G_M_M_UniCriminals_01";
		
		case 347599949:
			return "G_M_M_UNIDUSTER_01";
		
		case -1884146832:
			return "CS_VALSHERIFF";
		
		case 826385717:
			return "S_M_M_MARSHALLSRURAL_01";
		
		case -831368594:
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
		
		case -522739022:
			return "Sean";
		
		case -122790003:
			return "Lenny";
		
		case 1276534479:
			return "Hercule";
		
		case -781994133:
			return "CreoleCaptain";
		
		case -628794682:
			return "U_M_M_CREOLECAPTAIN_01";
		
		case 1999476738:
			return "RingMaster";
		
		case -1221341425:
			return "U_M_M_VALBARTENDER_01";
		
		case -439429058:
			return "A_M_M_EMRFARMHAND_01";
		
		case -1646366239:
			return "A_M_M_GriSurvivalist_01";
		
		case 1439158431:
			return "LillyMillet";
		
		case -1384606398:
			return "A_F_M_STRTOWNFOLK_01";
		
		case 1127589605:
			return "A_M_M_STRTOWNFOLK_01";
		
		case 413771941:
			return "S_M_M_STRLUMBERJACK_01";
		
		case -1990962020:
			return "G_M_M_UniCriminals_02";
		
		case -1818007055:
			return "G_M_M_UNICORNWALLGOONS_01";
		
		case 79156795:
			return "A_M_M_NBXUPPERCLASS_01";
		
		case -1039531072:
			return "A_F_M_NBXUPPERCLASS_01";
		
		case 525529657:
			return "A_M_M_VALFARMER_01";
		
		case -2087759666:
			return "A_M_M_VALTOWNFOLK_01";
		
		case -1789856687:
			return "A_M_M_VALTOWNFOLK_02";
		
		case -161027961:
			return "A_F_M_VALTOWNFOLK_01";
		
		case 518339740:
			return "U_M_M_NBXBARTENDER_01";
		
		case 2041494024:
			return "NBXExecuted";
		
		case -944019243:
			return "RHODEPUTY_01";
		
		case -949242502:
			return "RHDSHERIFF_01";
		
		case -1745321414:
			return "LeighGray";
		
		case -1038436471:
			return "Horse_01";
		
		case 273671859:
			return "U_M_M_StrGenStoreOwner_01";
		
		case -1161832176:
			return "TomDickens";
		
		case -1632694866:
			return "DavidGeddes";
		
		case 1446935015:
			return "ANSEL_ATHERTON";
		
		case -1101883765:
			return "CS_Wrobel";
		
		case joaat("a_c_cow"):
			return "COW";
		
		case 195700131:
			return "BULL";
		
		case 686051865:
			return "ALBERTCAKEESQUIRE";
		
		case 1767420034:
			return "U_M_O_BLWGENERALSTOREOWNER_01";
		
		case -1033903759:
			return "A_C_DOGCATAHOULACUR_01";
		
		case 1591685812:
			return "A_C_DOGRUFUS_01";
		
		case -896926592:
			return "A_C_DOGLION_01";
		
		case -695175124:
			return "Handler";
		
		case 1891548111:
			return "VALAUCTIONBOSS_01";
		
		case -1049237750:
			return "NbxReceptionist_01";
		
		case -1206299098:
			return "U_M_M_BiVForeman_01";
		
		case -532378284:
			return "U_M_M_RACFOREMAN_01";
		
		case -2075028835:
			return "CHAINPRISONER_01";
		
		case -211291960:
			return "CHAINPRISONER_02";
		
		case -692960126:
			return "U_M_M_ValPokerPlayer_01";
		
		case 60202542:
			return "U_M_M_ValPokerPlayer_02";
		
		case -1614719852:
			return "DUNCANGEDDES";
		
		case -167880668:
			return "ANGUSGEDDES";
		
		case 743219360:
			return "EvelynMiller";
		
		case -2086875988:
			return "SISTERCALDERON";
		
		case -46607261:
			return "EDGARROSS";
		
		case 54030454:
			return "U_M_M_GriSurvivalist_01";
		
		case -378814141:
			return "U_F_M_RKSHOMESTEADTENANT_01";
		
		case -140869950:
			return "U_F_M_RKSHOMESTEADTENANT_01";
		
		case 1726657594:
			return "U_M_M_BHT_STRAWBERRYDUEL";
		
		case 1057932105:
			return "StationWorker";
		
		case 1294255258:
			return "LEVISIMON";
		
		case -384354290:
			return "S_M_M_GULFUSSARS_01";
		
		case 1772321403:
			return "A_C_DONKEY_01";
		
		case 223197487:
			return "S_M_M_ISPWORKER_01";
		
		case 355963118:
			return "S_M_M_ISPWORKER_02";
		
		case -1874017143:
			return "U_M_O_ValBartender_01";
		
		case 219322615:
			return "U_M_M_NBXBARTENDER_02";
		
		case -2014377075:
			return "CS_UNIDUSTERJAIL_01";
		
		case 977834008:
			return "A_M_M_RHDTOWNFOLK_01";
		
		case 2052768310:
			return "U_M_M_UNIBOUNTYHUNTER_01";
		
		case -1332334928:
			return "U_M_M_UNIBOUNTYHUNTER_02";
		
		case 482703333:
			return "BrotherDorkins";
		
		case 731029607:
			return "G_M_M_UniBraithwaites_01";
		
		case -1918128574:
			return "A_M_M_GAMHIGHSOCIETY_01";
		
		case 292812873:
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
		
		case -1772051411:
			return "EagleFlies";
		
		case -2046943672:
			return "CS_RAINSFALL";
		
		case 830712509:
			return "A_M_M_WapWarriors_01";
		
		case 264503396:
			return "A_M_Y_NBXSTREETKIDS_01";
		
		case -2044758506:
			return "U_M_M_BHT_SHACKESCAPE";
		
		case -1445135526:
			return "A_M_M_HTLROUGHTRAVELLERS_01";
		
		case 988668512:
			return "LemiuxAssistant";
		
		case -1608851079:
			return "p_keys01x";
		
		case 624882545:
			return "CS_BALLOONOPERATOR";
		
		case -1820002752:
			return "Worker1";
		
		case 1624257462:
			return "U_M_M_BHT_MINEFOREMAN";
		
		case 1453686794:
			return "A_M_M_NbxSlums_01";
		
		case -454661055:
			return "U_M_M_NBXPRIEST_01";
		
		case -1124266369:
			return "A_C_BEAR_01";
		
		case 960530301:
			return "MARSHALL_THURWELL";
		
		case 1347320453:
			return "CS_FAMOUSGUNSLINGER_02";
		
		case -290265603:
			return "cs_sd_streetkid_01";
		
		case 1861707396:
			return "cs_sd_streetkid_02";
		
		case 68512371:
			return "ObediahHinton";
		
		case 774211111:
			return "PoisonWellShaman";
		
		case 1923327795:
			return "A_M_M_EMRFARMHAND_01";
		
		case 722156226:
			return "u_m_m_bht_benedictallbright";
		
		case -1258801034:
			return "Jules";
		
		case -1466017978:
			return "MRDEVON";
		
		case 1101050871:
			return "MRWAYNE";
		
		case -1135378761:
			return "PAYTAH";
		
		case 1812458547:
			return "CS_VALDEPUTY_01";
		
		case 167491564:
			return "MES_SADIE5_MALES_01^1";
		
		case -310853585:
			return "A_M_M_NBXDOCKWORKERS_01";
		
		case -1817144219:
			return "U_M_M_VALSHERIFF_01";
		
		case -363708904:
			return "P_C_HORSE_01";
	}
	return "";
}

int func_472(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_473(int iParam0)
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_A_PLAYER(iVar0))
		{
			return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		}
	}
	return 255;
}

void func_474(int iParam0, int iParam1)
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
	if (!func_550(&(Global_1951131->f_1776), &uVar1, iParam1, -1, 0, 0, iVar6, 0))
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

int func_475(int iParam0, int iParam1)
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
	if (!func_550(&(Global_1951131->f_1895), &uVar0, iParam1, -1, 0, 0, iVar2, 0))
	{
		return 0;
	}
	func_551(iParam0, &(Global_1951131->f_1895));
	iVar3 = 0;
	while (iVar3 < 39)
	{
		if (!func_553(iVar3, 8))
		{
		}
		else
		{
			func_554(iParam0, iVar3, 1);
		}
		iVar3++;
	}
	func_534(&(Global_1951131->f_1895), iParam0, 1, 8, 1, 0, 1, 0);
	return 1;
}

int func_476()
{
	int iVar0;
	
	if (Global_1951131->f_2795 <= 0)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1951131->f_2795)
	{
		if (!PED::_0xB0B2C6D170B0E8E5((Global_1951131->f_2795.f_1[iVar0 /*2*/])->f_1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_477(int iParam0)
{
	var uVar0;
	
	if (!func_555(32))
	{
		func_556(&(Global_1951131->f_2228));
		func_557(32);
	}
	if (iParam0->f_1 == 0)
	{
		if (!func_558(*iParam0))
		{
			if (func_555(32))
			{
				func_559(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1);
			}
			return 0;
		}
		func_560(&(Global_1951131->f_2228));
		if (!func_561(&(Global_1951131->f_1538), *iParam0, &uVar0, 0, 1, 0, 0, 0))
		{
			if (func_555(32))
			{
				func_559(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1);
			}
			return 0;
		}
		func_562(&(Global_1951131->f_1538));
	}
	func_532(33, Global_1131373->f_5509.f_4, 0, 0, 0);
	Global_1131373->f_5509.f_4 = *iParam0;
	Global_1131373->f_5509 = iParam0->f_1;
	func_532(30, 0, 0, 0, 0);
	func_532(27, 0, 0, 0, 0);
	func_532(32, Global_1131373->f_5509.f_4, 0, 0, 0);
	return 1;
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

int func_479(var uParam0, int iParam1, bool bParam2, int iParam3, var uParam4)
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
						iVar3 = (uParam0->f_14[iVar1 /*21*/])->f_1.f_2;
					}
					else
					{
						iVar3 = (uParam0->f_14[iVar1 /*21*/])->f_1.f_1;
					}
					if (iParam1 != iVar3)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 966820754;
						return 1;
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
						iVar4 = (uParam0->f_500[iVar1 /*13*/])->f_2;
					}
					else
					{
						iVar4 = (uParam0->f_500[iVar1 /*13*/])->f_1;
					}
					if (iParam1 != iVar4)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = -1821507459;
						return 1;
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
						iVar5 = (uParam0->f_99[iVar1 /*20*/])->f_2;
					}
					else
					{
						iVar5 = (uParam0->f_99[iVar1 /*20*/])->f_1;
					}
					if (iParam1 != iVar5)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 1627542854;
						return 1;
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
						iVar7 = (uParam0->f_1089[iVar1 /*14*/])->f_2;
					}
					else
					{
						iVar7 = (uParam0->f_1089[iVar1 /*14*/])->f_1;
					}
					if (iParam1 != iVar7)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 465509728;
						return 1;
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
						iVar8 = (uParam0->f_761[iVar1 /*13*/])->f_2;
					}
					else
					{
						iVar8 = (uParam0->f_761[iVar1 /*13*/])->f_1;
					}
					if (iParam1 != iVar8)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 1135537454;
						return 1;
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
			iVar9 = (uParam0->f_1104[iVar1 /*15*/])->f_2;
		}
		else
		{
			iVar9 = (uParam0->f_1104[iVar1 /*15*/])->f_1;
		}
		if (iParam1 != iVar9)
		{
		}
		else
		{
			*iParam3 = iVar1;
			*uParam4 = 0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_480(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (uParam1->f_1465 == -1)
	{
		return -1;
	}
	if (uParam1->f_1465 >= 24)
	{
		uParam1->f_1465 = -1;
	}
	iVar0 = uParam1->f_1465;
	uParam1->f_1465++;
	iVar1 = ENTITY::GET_ENTITY_TYPE(iParam0);
	(uParam1->f_1104[iVar0 /*15*/])->f_1 = iParam0;
	(uParam1->f_1104[iVar0 /*15*/])->f_13 = uParam2;
	(uParam1->f_1104[iVar0 /*15*/])->f_14 = uParam3;
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

void func_482(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_563(iParam0, iParam1);
	iVar1 = 0;
	while (iVar1 <= (29 - 1))
	{
		iVar2 = ((29 - 1) - iVar1);
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, false, iVar2, false))
		{
			if (iVar0 != joaat("weapon_unarmed"))
			{
				if (iVar2 == 1)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 116, true);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iParam1, iVar0, true, iVar2, false, false);
			}
		}
		iVar1++;
	}
}

int func_483(int iParam0, int iParam1, int* iParam2)
{
	bool bVar0;
	
	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return 0;
	}
	if (PED::_0xA0BC8FAED8CFEB3C(iParam1))
	{
		if (!func_84(*iParam2, 5))
		{
			PED::_0xD710A5007C2AC539(iParam1, -1229581779, 1);
			bVar0 = true;
			func_26(iParam2, 5);
		}
		if (bVar0)
		{
			PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, 0);
			return 0;
		}
		return 1;
	}
	return 0;
}

bool func_484(int iParam0)
{
	return ((PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) || PED::IS_PED_ON_MOUNT(iParam0)) || (!PED::IS_PED_RAGDOLL(iParam0) && PED::IS_PED_ON_VEHICLE(iParam0, false)));
}

int func_485(var uParam0, int iParam1, int iParam2, var uParam3)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	switch (iParam2)
	{
		case 966820754:
			if (iParam1 >= 4)
			{
				return 0;
			}
			*uParam3 = { (uParam0->f_14[iParam1 /*21*/])->f_1 };
			return 1;
		
		case 1627542854:
			if (iParam1 >= 20)
			{
				return 0;
			}
			*uParam3 = { *(uParam0->f_99[iParam1 /*20*/]) };
			return 1;
		
		case -1821507459:
			if (iParam1 >= 20)
			{
				return 0;
			}
			*uParam3 = { *(uParam0->f_500[iParam1 /*13*/]) };
			return 1;
		
		case 465509728:
			if (iParam1 >= 1)
			{
				return 0;
			}
			*uParam3 = { *(uParam0->f_1089[iParam1 /*14*/]) };
			return 1;
		
		case 1135537454:
			if (iParam1 >= 10)
			{
				return 0;
			}
			*uParam3 = { *(uParam0->f_761[iParam1 /*13*/]) };
			return 1;
		
		case 422112462:
			if (iParam1 >= 10)
			{
				return 0;
			}
			*uParam3 = { *(uParam0->f_892[iParam1 /*13*/]) };
			return 1;
		
		case -230450704:
			if (iParam1 >= 5)
			{
				return 0;
			}
			*uParam3 = { *(uParam0->f_1023[iParam1 /*13*/]) };
			return 1;
		
		case 0:
			if (iParam1 >= 24)
			{
				return 0;
			}
			*uParam3 = { *(uParam0->f_1104[iParam1 /*15*/]) };
			return 1;
		
		default:
			break;
	}
	return 0;
}

bool func_486(var uParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
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
				*uParam4 = (uParam0->f_1104[iParam1 /*15*/])->f_2;
			}
			else
			{
				*uParam4 = (uParam0->f_1104[iParam1 /*15*/])->f_1;
			}
			break;
		
		case 966820754:
			if (iParam1 >= 4)
			{
				return false;
			}
			if (bParam3)
			{
				*uParam4 = (uParam0->f_14[iParam1 /*21*/])->f_1.f_2;
			}
			else
			{
				*uParam4 = (uParam0->f_14[iParam1 /*21*/])->f_1.f_1;
			}
			break;
		
		case 1627542854:
			if (iParam1 >= 20)
			{
				return false;
			}
			if (bParam3)
			{
				*uParam4 = (uParam0->f_99[iParam1 /*20*/])->f_2;
			}
			else
			{
				*uParam4 = (uParam0->f_99[iParam1 /*20*/])->f_1;
			}
			break;
		
		case -1821507459:
			if (iParam1 >= 20)
			{
				return false;
			}
			if (bParam3)
			{
				*uParam4 = (uParam0->f_500[iParam1 /*13*/])->f_2;
			}
			else
			{
				*uParam4 = (uParam0->f_500[iParam1 /*13*/])->f_1;
			}
			break;
		
		case 1135537454:
			if (iParam1 >= 10)
			{
				return false;
			}
			if (bParam3)
			{
				*uParam4 = (uParam0->f_761[iParam1 /*13*/])->f_2;
			}
			else
			{
				*uParam4 = (uParam0->f_761[iParam1 /*13*/])->f_1;
			}
			break;
		
		case 422112462:
			if (iParam1 >= 10)
			{
				return false;
			}
			if (bParam3)
			{
				*uParam4 = (uParam0->f_892[iParam1 /*13*/])->f_2;
			}
			else
			{
				*uParam4 = (uParam0->f_892[iParam1 /*13*/])->f_1;
			}
			break;
		
		case -230450704:
			if (iParam1 >= 5)
			{
				return false;
			}
			if (bParam3)
			{
				*uParam4 = (uParam0->f_1023[iParam1 /*13*/])->f_2;
			}
			else
			{
				*uParam4 = (uParam0->f_1023[iParam1 /*13*/])->f_1;
			}
			break;
		
		case 465509728:
			if (iParam1 >= 1)
			{
				return false;
			}
			if (bParam3)
			{
				*uParam4 = (uParam0->f_1089[iParam1 /*14*/])->f_2;
			}
			else
			{
				*uParam4 = (uParam0->f_1089[iParam1 /*14*/])->f_1;
			}
			break;
	}
	return ENTITY::DOES_ENTITY_EXIST(*uParam4);
}

int func_487(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = joaat("weapon_unarmed");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

struct<4> func_488()
{
	struct<4> Var0;
	
	return Var0;
}

int func_489(int iParam0, var uParam1)
{
	bool bVar0;
	
	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return 0;
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
		if (func_84(uParam1->f_6, 2))
		{
			if (PED::_0xFB4891BD7578CDC1(iParam0, 1963323202))
			{
				PED::_0xD710A5007C2AC539(iParam0, 1963323202, 1);
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
			return 0;
		}
		return 1;
	}
	return 0;
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
	int iVar5;
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
		iVar5 = VEHICLE::_0x3C9628A811CBD724(iVar1);
		iVar6 = VEHICLE::_0xC239DBD9A57D2A71(iParam1, vVar2, iVar5, 0, 0, 0);
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

int func_492(var uParam0, var uParam1)
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
		func_181(uParam1, *uParam0, 1135537454, &uVar20, &uVar21, &iVar22);
		if (iVar22 != 0)
		{
			PROPSET::_0xD80FAF919A2E56EA(iVar19, iVar22);
		}
		func_394(iVar19, 1);
		uParam0->f_2 = iVar19;
	}
	if (!VEHICLE::_0xEA44E97849E9F3DD(iVar13))
	{
		return 1;
	}
	else if (!func_84(uParam0->f_4, 2))
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
			iVar28 = VEHICLE::_0xA8BA0BAE0173457B(iVar25, iVar27);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar28))
			{
			}
			else
			{
				iVar29 = VEHICLE::_0xA8BA0BAE0173457B(iVar13, iVar27);
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
				iVar31 = VEHICLE::_0xA8BA0BAE0173457B(iVar25, iVar27);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar31))
				{
				}
				else
				{
					iVar32 = VEHICLE::_0xA8BA0BAE0173457B(iVar13, iVar27);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar32) || PED::IS_PED_INJURED(iVar32))
					{
						func_564(&iVar31);
					}
				}
				iVar27++;
			}
			func_26(&(uParam0->f_4), 2);
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

void func_494(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_0xD5FE956C70FF370B(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_549(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_314(iParam0))
	{
		if (func_565(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_566(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_494(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_494(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_566(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_566(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_566(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_566(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_566(iParam5, 129))
	{
		if (func_566(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::_0x0918E3565C20F03C(iParam0, vParam1, fParam4, func_566(iParam5, 32), 1);
	}
	else
	{
		ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_566(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_566(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, 0);
		}
		if (func_314(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_566(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_566(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

bool func_495()
{
	return (Global_1915170->f_20135 || Global_1915170->f_21989.f_1);
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
		case 1468884243:
			return "CANOE";
		
		case -283162583:
			return "WAGON02X";
		
		case 1874711736:
			return "WAGON04X";
		
		case -1758092337:
			return "WAGON05X";
		
		case 1596452133:
			return "CHUCKWAGON000X";
		
		case -293448458:
			return "WAGONCIRCUS02X";
		
		case 1761016051:
			return "COACH2";
		
		case 1192745176:
			return "PRIVATECOALCAR01X";
		
		case 703203753:
			return "NORTHPASSENGER01X";
		
		case 89913743:
			return "PRIVATESTEAMER01X";
		
		case 572854005:
			return "PRIVATEDINING01X";
		
		case 822759307:
			return "UTILLIWAG";
		
		case -623113369:
			return "SKIFF";
		
		case 1493442814:
			return "HANDCART";
		
		case -397513868:
			return "ROWBOATSWAMP";
		
		case -258491284:
			return "ROWBOATSWAMP02";
	}
	return "";
}

bool func_498(int iParam0)
{
	return iParam0 != 0;
}

bool func_499(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949749)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

int func_500(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_499(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_568(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_501(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 && !func_461(iParam0))
	{
		return;
	}
	iVar0 = func_543(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_0xF4A5C4509BF923B1(((*Global_1949749)[iVar0 /*23*/])->f_3, iParam1);
}

float func_502(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 && !func_461(iParam0))
	{
		return 0f;
	}
	iVar0 = func_543(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1949749)[iVar0 /*23*/])->f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(((*Global_1949749)[iVar0 /*23*/])->f_3);
	}
	return HUD::_0x81801291806DBC50(((*Global_1949749)[iVar0 /*23*/])->f_3);
}

bool func_503(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (iParam1 && !func_461(iParam0))
	{
		return false;
	}
	iVar0 = func_543(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(((*Global_1949749)[iVar0 /*23*/])->f_3))
	{
		if (((*Global_1949749)[iVar0 /*23*/])->f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(((*Global_1949749)[iVar0 /*23*/])->f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(((*Global_1949749)[iVar0 /*23*/])->f_3))
		{
			iVar3 = (iVar1 - ((*Global_1949749)[iVar0 /*23*/])->f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(((*Global_1949749)[iVar0 /*23*/])->f_18) * (1f - ((*Global_1949749)[iVar0 /*23*/])->f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			((*Global_1949749)[iVar0 /*23*/])->f_21 = iVar1;
			((*Global_1949749)[iVar0 /*23*/])->f_22 = uVar2;
		}
	}
	if (HUD::_0xCD072523791DDC1B(((*Global_1949749)[iVar0 /*23*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1949749)[iVar0 /*23*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1949749)[iVar0 /*23*/])->f_3);
}

bool func_504(var uParam0)
{
	struct<8> Var0;
	struct<8> Var8;
	
	Var0 = { func_241(uParam0) };
	Var8 = { func_295(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(&Var0, &Var8);
}

int func_505(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1938407->f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(((*Global_1938407)[iVar0 /*16*/])->f_10)))
		{
			func_569(iVar0);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_506(var uParam0, char* sParam1)
{
	struct<8> Var0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	Var0 = { func_241(uParam0) };
	if ((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam1) && ANIMSCENE::_0xA9016536015DE29D(uParam0->f_208, sParam1)) && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_208, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_208, sParam1);
	}
}

void func_507(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_508(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_509(var uParam0)
{
	if (-1829635046 == func_570(81053684))
	{
		if (func_571(uParam0))
		{
			return 1;
		}
	}
	else if (func_572(-525676072, uParam0))
	{
		if (func_571(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_510(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_511(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_573(iParam0, iParam1, bParam2, bParam3);
}

void func_512(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0x16F2C8C084AB2092(iVar0);
	}
	iVar1 = func_574(2);
	func_575(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_513(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_576(2);
	func_577(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_514(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_529(iVar3) && WEAPON::_0x705BE297EEBDB95D(iVar3))
			{
				if (bParam0)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3) < WEAPON::_0xD3750CCC00635FC2(iVar3) * 4)
					{
						WEAPON::_0x106A811C6D3035F3(Global_35, WEAPON::_0x5C2EA6C44F515F34(iVar3), (WEAPON::_0xD3750CCC00635FC2(iVar3) * 4 - WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_35, iVar3))), 752097756);
					}
				}
				iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3);
				if (iVar0 > WEAPON::_0xD3750CCC00635FC2(iVar3))
				{
					iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					WEAPON::SET_AMMO_IN_CLIP(Global_35, iVar3, iVar1);
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
	int iVar0;
	
	iVar0 = func_528(Global_35, 9, 1, 0);
	if (func_529(iVar0))
	{
		return;
	}
	iVar0 = func_528(Global_35, 7, 1, 0);
	if (func_529(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_528(Global_35, 0, 1, 0);
	if (func_529(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_528(Global_35, 1, 1, 0);
	if (func_529(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_528(Global_35, 18, 1, 0);
	if (func_529(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_578();
	if (func_529(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 1))
		{
			func_579(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_580(3072, 0);
	if (func_529(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 1))
		{
			func_579(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_516()
{
	return Global_1903006->f_379;
}

int func_517(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	if (func_378(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bParam4)
	{
		vVar4 = { *uParam0 };
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_518(int iParam0)
{
	Global_40.f_277.f_3019.f_1 = iParam0;
}

void func_519(int iParam0)
{
	Global_40.f_277.f_3019 = iParam0;
}

void func_520(vector3 vParam0)
{
	Global_40.f_277.f_3019.f_19 = { vParam0 };
}

var func_521()
{
	return &Global_1902688;
}

void func_522(var uParam0)
{
	Global_40.f_277.f_3019.f_2 = uParam0;
}

var func_523()
{
	return (func_581() || func_582());
}

void func_524(bool bParam0)
{
	if (bParam0)
	{
		Global_1938998->f_9 = 0f;
	}
	Global_1938998->f_8 = 0f;
	Global_1938998->f_15.f_1 = 0f;
	Global_1938998->f_15 = 0f;
	Global_1938998->f_15.f_9 = 0f;
	Global_1938998->f_15.f_8 = 0f;
	Global_1938998->f_15.f_10 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		PED::_0x06D26A96CA1BCA75(Global_35, 10, 0f, 0);
		AUDIO::SET_PED_IS_DRUNK(Global_35, false);
		PED::_0x406CCF555B04FAD3(Global_35, 0, 0f);
	}
	func_583(0f);
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_584();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

Vector3 func_525(var uParam0)
{
	return uParam0->f_268;
}

float func_526(var uParam0)
{
	return uParam0->f_271;
}

float func_527(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_528(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_529(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_530(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_17[iVar0 /*12*/])) && &uParam0->f_17[iVar0 /*12*/] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_531(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	struct<5> Var0;
	int iVar5;
	
	if (iParam3 == -358215195)
	{
		Var0 = { func_585(iParam1, 1, 0) };
		iParam3 = func_586(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_588(iParam1, iParam2, func_587(iParam3, 1), bParam4, 1))
	{
		return 0;
	}
	func_589(1, bParam5, bParam9, 1);
	if (bParam10)
	{
		if (func_590(iParam1, 0))
		{
			func_591(&(Global_1951131->f_1657.f_1[func_587(iParam3, 1) /*3*/]), 0);
		}
		else
		{
			func_591(iParam1, 1);
		}
	}
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (iParam7 && iParam1 != &Global_1951131->f_81[func_587(iParam3, 1) /*12*/])
			{
				func_532(27, 0, 0, 0, 0);
			}
			break;
		
		case 1108822547:
			if (func_555(32768))
			{
				func_592();
				func_532(21, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_593(iParam3);
	if (bParam8)
	{
		func_594(&iVar5, 4);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_532(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_532(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_532(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	
	if (bParam4)
	{
		func_557(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_595(Var0);
}

int func_533(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1951131->f_2706.f_1 <= 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_596(iVar0, 1);
		if (func_597(iVar2, 2))
		{
		}
		else if (&Global_1951131->f_2706.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (iParam0 && func_598(iVar0) == -1)
			{
				func_599(iVar0, 0);
				func_600(Global_1951131->f_2760.f_2[(Global_1951131->f_2760 - 1) /*2*/], 2, 6);
			}
			func_601(iVar2, 2, 6);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return 1;
	}
	return 0;
}

void func_534(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Global_1951131->f_923 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(iParam1);
		if (bParam7)
		{
			iVar0 = 0;
			while (iVar0 < 39)
			{
				PED::_0x5653AB26C82938CF(iParam1, &(Global_1951131->f_2[iVar0 /*2*/]), (Global_1951131->f_2[iVar0 /*2*/])->f_1);
				iVar0++;
			}
			if (Global_1951131->f_3249 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1951131->f_3249);
			}
			if (Global_1954462->f_1331.f_106 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1954462->f_1331.f_106);
			}
		}
	}
	else
	{
		bParam6 = false;
	}
	if ((func_555(32768) && func_597(1108822547, 8)) && func_553(10, iParam3))
	{
		func_602(iParam1, 0, 1, 0);
	}
	iVar1 = 0;
	while (iVar1 < Global_1951131->f_590)
	{
		iVar2 = &Global_1951131->f_550[iVar1];
		iVar0 = func_587(iVar2, 1);
		if (func_597(iVar2, 8))
		{
		}
		else if (&(Global_1951131->f_81[iVar0 /*12*/])->f_3[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
		{
		}
		else if (!func_553(iVar0, iParam3))
		{
		}
		else if ((func_597(iVar2, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1951131->f_81[iVar0 /*12*/]) || (uParam0->f_1[iVar0 /*3*/])->f_1 == 289238755)
		{
			if (!func_597(iVar2, 1) || bParam2)
			{
				Global_1951131->f_923++;
				if (!bParam6)
				{
					func_554(iParam1, iVar0, 1);
				}
				if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 289238755)
				{
					(Global_1951131->f_2627[iVar0 /*2*/])->f_1 = 289238755;
				}
				func_601(iVar2, 1, 6);
			}
		}
		else
		{
			if (!bParam6)
			{
				if ((!bParam2 && &uParam0->f_1[iVar0 /*3*/] == &Global_1951131->f_2627[iVar0 /*2*/]) && (uParam0->f_1[iVar0 /*3*/])->f_1 == (Global_1951131->f_2627[iVar0 /*2*/])->f_1)
				{
				}
				else
				{
					func_554(iParam1, iVar0, 1);
					Global_1951131->f_2627[iVar0 /*2*/] = &uParam0->f_1[iVar0 /*3*/];
					(Global_1951131->f_2627[iVar0 /*2*/])->f_1 = (uParam0->f_1[iVar0 /*3*/])->f_1;
					if (func_597(iVar2, 1))
					{
						func_603(iVar2, 1, 6);
					}
					Global_1951131->f_923++;
					PED::_SET_PED_COMPONENT_ENABLED(iParam1, &(uParam0->f_1[iVar0 /*3*/]), false, true, false);
					if ((uParam0->f_1[iVar0 /*3*/])->f_1 != 0)
					{
						PED::_0x66B957AAC2EAAEAB(iParam1, &(uParam0->f_1[iVar0 /*3*/]), (uParam0->f_1[iVar0 /*3*/])->f_1, 0, 1, 1);
					}
				}
				iVar1++;
				if (Global_1951131->f_923 <= 0)
				{
					return;
				}
				if (bParam4)
				{
					PED::_0xAAB86462966168CE(iParam1, 1);
					PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, iParam5);
				}
			}
		}
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
	func_604(&(uParam0->f_263), 4194304);
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

void func_538()
{
	Global_1912968 = 1;
}

void func_539(bool bParam0)
{
	Global_1939057->f_19 = !bParam0;
}

int func_540(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	if (Global_1951131->f_2706.f_1 <= 0)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		Global_1951131->f_2706.f_2 = 0;
		Global_1951131->f_2706.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			*(Global_1951131->f_2706.f_43[iVar0 /*2*/]) = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1951131->f_2706.f_3[iVar1] = 0;
			iVar1++;
		}
		return 1;
	}
	iVar0 = func_453(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	Global_1951131->f_2706.f_2 = (Global_1951131->f_2706.f_2 - (Global_1951131->f_2706.f_2 && (Global_1951131->f_2706.f_43[iVar0 /*2*/])->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_605(iVar1, (Global_1951131->f_2706.f_43[iVar0 /*2*/])->f_1))
		{
			func_606(iVar1, (Global_1951131->f_2706.f_43[iVar0 /*2*/])->f_1);
		}
		iVar1++;
	}
	Global_1951131->f_2706.f_1 = (Global_1951131->f_2706.f_1 - 1);
	*(Global_1951131->f_2706.f_43[iVar0 /*2*/]) = { *(Global_1951131->f_2706.f_43[Global_1951131->f_2706.f_1 /*2*/]) };
	(Global_1951131->f_2706.f_43[Global_1951131->f_2706.f_1 /*2*/])->f_1 = 0;
	Global_1951131->f_2706.f_43[Global_1951131->f_2706.f_1 /*2*/] = 0;
	return 1;
}

int func_541(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	
	Var1 = -961687407;
	if (func_30() == -1)
	{
		Var1 = 1444744190;
	}
	Var1.f_1 = iParam0;
	Var1.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var1);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		return 0;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var1, -624749060))
	{
		return 0;
	}
	return func_607(iVar0);
}

bool func_542(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_596(iVar0, 1);
		if (!func_597(iVar2, 2))
		{
		}
		else if (&Global_1951131->f_2706.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0 && func_598(iVar0) == -1)
			{
				func_599(iVar0, 0);
				func_600(Global_1951131->f_2760.f_2[(Global_1951131->f_2760 - 1) /*2*/], 2, 6);
			}
			func_603(iVar2, 3, 6);
			Global_1951131->f_2627[iVar0 /*2*/] = 0;
			(Global_1951131->f_2627[iVar0 /*2*/])->f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

int func_543(int iParam0)
{
	return iParam0;
}

void func_544(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949749)[iParam0 /*23*/])->f_1 = (((*Global_1949749)[iParam0 /*23*/])->f_1 - (((*Global_1949749)[iParam0 /*23*/])->f_1 && iParam1));
}

void func_545(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949749)[iParam0 /*23*/])->f_5 == 5 && !func_499(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949749)[iParam0 /*23*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949749)[iParam0 /*23*/])->f_3, iParam1);
		}
	}
}

void func_546(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949749)[iParam0 /*23*/])->f_3, iParam1);
	}
}

void func_547(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949749)[iParam0 /*23*/])->f_1 = (((*Global_1949749)[iParam0 /*23*/])->f_1 || iParam1);
}

void func_548(int iParam0)
{
	if (!func_608(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1949749)[iParam0 /*23*/])->f_3);
	}
	((*Global_1949749)[iParam0 /*23*/])->f_4 = 0;
	(*Global_1949749)[iParam0 /*23*/] = 1;
	((*Global_1949749)[iParam0 /*23*/])->f_16 = 0;
	((*Global_1949749)[iParam0 /*23*/])->f_1 = 0;
	((*Global_1949749)[iParam0 /*23*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1949749)[iParam0 /*23*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1949749)[iParam0 /*23*/])->f_9 = 0f;
	((*Global_1949749)[iParam0 /*23*/])->f_10 = 0;
	((*Global_1949749)[iParam0 /*23*/])->f_11 = 0;
	((*Global_1949749)[iParam0 /*23*/])->f_2 = 1;
	((*Global_1949749)[iParam0 /*23*/])->f_15 = -1f;
}

int func_549(int iParam0)
{
	return iParam0;
}

int func_550(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (iParam2 == 1378879298)
	{
		if (!func_609(uParam0, iParam2))
		{
			return 0;
		}
	}
	else if (!func_610(uParam0, iParam3, iParam2) && !func_561(uParam0, iParam2, uParam1, 0, bParam4, 0, iParam6, bParam7))
	{
		return 0;
	}
	iVar0 = 10;
	if (func_555(32768) && iParam6 == 0)
	{
		if (!*uParam1 || (*uParam1 && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/]))
		{
			func_611(1108822547);
		}
		else
		{
			func_612(1108822547);
		}
	}
	if (bParam5)
	{
		func_613(2);
	}
	return 1;
}

void func_551(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	iVar4 = PED::_0x90403E8107B60E81(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		iVar1 = PED::_0x77BA37622E22023B(iParam0, iVar0, 1, &uVar3, &uVar2);
		switch (func_451(iVar1))
		{
			case -1961188419:
				uParam1->f_1[0 /*3*/] = iVar1;
				break;
			
			case 1033860813:
				uParam1->f_1[26 /*3*/] = iVar1;
				break;
			
			case 1589583617:
				uParam1->f_1[27 /*3*/] = iVar1;
				break;
			
			case 153430294:
				uParam1->f_1[28 /*3*/] = iVar1;
				break;
			
			case -130218241:
			case 629735563:
				uParam1->f_1[8 /*3*/] = iVar1;
				break;
			
			case -709696437:
			case -702721097:
				uParam1->f_1[9 /*3*/] = iVar1;
				break;
			
			case -1839668642:
			case -1415811768:
				uParam1->f_1[1 /*3*/] = iVar1;
				break;
			
			case -986397773:
				uParam1->f_1[2 /*3*/] = iVar1;
				break;
			
			case -1674363638:
				uParam1->f_1[3 /*3*/] = iVar1;
				break;
			
			case 231148558:
				uParam1->f_1[4 /*3*/] = iVar1;
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

bool func_553(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return ((Global_1951131->f_81[iParam0 /*12*/])->f_10 && iParam1) != 0;
}

void func_554(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 < (Global_1951131->f_81[iParam1 /*12*/])->f_1)
		{
			PED::_0xDF631E4BCE1B1FC4(iParam0, &((Global_1951131->f_81[iParam1 /*12*/])->f_3[iVar0]), 0, 1);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < (Global_1951131->f_81[iParam1 /*12*/])->f_1)
		{
			PED::_0xD710A5007C2AC539(iParam0, &((Global_1951131->f_81[iParam1 /*12*/])->f_3[iVar0]), 0);
			iVar0++;
		}
	}
}

bool func_555(int iParam0)
{
	return (Global_1951131 && iParam0) != 0;
}

void func_556(var uParam0)
{
	int iVar0;
	
	*uParam0 = Global_1951131->f_1657;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(uParam0->f_1[iVar0 /*3*/]) = { *(Global_1951131->f_1657.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

void func_557(int iParam0)
{
	Global_1951131 = (Global_1951131 || iParam0);
}

bool func_558(var uParam0)
{
	struct<4> Var0;
	
	Var0 = func_614(0);
	Var0.f_1 = uParam0;
	Var0.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	return DATAFILE::_0xED4413CEE1BF142C(&Var0);
}

void func_559(int iParam0, bool bParam1)
{
	if (!func_555(32))
	{
		return;
	}
	func_532(33, Global_1131373->f_5509.f_4, 0, 0, 0);
	func_615(32);
	func_592();
	Global_1131373->f_5509.f_4 = 0;
	Global_1131373->f_5509 = 0;
	func_562(&(Global_1951131->f_2228));
	func_560(&(Global_1951131->f_2228));
	func_616(4);
	if (bParam1)
	{
		func_617(iParam0, 1, 1);
	}
	func_532(27, 0, 2, 0, 0);
}

void func_560(var uParam0)
{
	int iVar0;
	
	Global_1951131->f_1538 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1951131->f_1538.f_1[iVar0 /*3*/]) = { *(uParam0->f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_561(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	int iVar11;
	
	iVar11 = 0;
	Var4 = func_614(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return 0;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*uParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_618(uParam0, func_607(iVar0), 1, 1, bParam7);
	}
	if (bVar2 && DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, -1212855483))
	{
		iVar11 = func_607(iVar0);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_587(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1373051002))
			{
			}
			else
			{
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bVar2 && iVar11 != 0)
				{
					func_601(iVar3, 16, 6);
				}
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 1155669136;
					}
					else
					{
						Jump @361; //curOff = 296
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_619(iVar3) && func_620(&(uParam0->f_1[iVar1 /*3*/]), iVar3, &iVar0))
							{
								(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
							}
						}
						else
						{
							(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
						}
					}
					if (bVar2 && iVar11 != 0)
					{
						func_622(uParam0, iVar11, func_621(iParam1) != 0);
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return 1;
				}
			}
		}
	}

void func_562(var uParam0)
{
	int iVar0;
	
	Global_1951131->f_1657 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1951131->f_1657.f_1[iVar0 /*3*/]) = { *(uParam0->f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

void func_563(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;
	
	iVar0 = INVENTORY::_0x13D234A2A3F66E63(iParam0);
	iVar1 = INVENTORY::_0x13D234A2A3F66E63(iParam1);
	if (!INVENTORY::_0x886DFD3E185C8A89(iVar0, &uVar6, 923904168, -740156546, &uVar2))
	{
	}
	INVENTORY::_0xC04F47D488EF9EBA(iVar0, iVar1, &uVar2, 0);
}

void func_564(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

int func_565(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x34D6AC1157C8226C(iParam0, -1805387726))
	{
		return 1;
	}
	return 0;
}

bool func_566(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

char* func_567(int iParam0)
{
	switch (iParam0)
	{
		case -1698780291:
			return "P_CS_LEDGER01X";
		
		case -2049014994:
			return "P_CS_ROPE01X";
		
		case -1005172683:
			return "P_DOOR01X";
		
		case 325782917:
			return "P_DOOR03X";
		
		case 430302479:
			return "p_door12x";
		
		case -1819321039:
			return "P_DOOR13X";
		
		case -1899748000:
			return "p_door45x";
		
		case -1734239985:
			return "p_chairvictorian01x";
		
		case 1561132816:
			return "p_crate03x";
		
		case -607235640:
			return "p_cs_jug01x";
		
		case -243150339:
			return "p_cs_wagon02x";
		
		case -1497029950:
			return "P_DOOR37X";
		
		case -1957055091:
			return "p_door_val_genstore";
		
		case -1676410507:
			return "p_doorstrawberry01x";
		
		case 913112519:
			return "p_doorfrench01l";
		
		case -1004594895:
			return "p_doorfrench01r";
		
		case -546124888:
			return "p_doormansiongate01x";
		
		case 367033685:
			return "p_doornbd39x";
		
		case -398894636:
			return "p_doorsaloon02x";
		
		case -882474373:
			return "P_DOORVH_SALOON_L";
		
		case 376903871:
			return "P_DOORVH_SALOON_R";
		
		case -447184114:
			return "p_cigarlit01x";
		
		case -502353725:
			return "p_pebble01x";
		
		case 1590781012:
			return "p_cs_rope03x";
		
		case 98154799:
			return "P_CARDS01X";
		
		case 1834866537:
			return "P_CS_POKERHAND01X";
		
		case 1770671818:
			return "P_CS_POKERHAND02X";
		
		case -827620392:
			return "P_CS_HOLDEMHAND01X";
		
		case 343238651:
			return "P_CS_HOLDEMHAND02X";
		
		case -197909103:
			return "P_CS_BUCKET01X";
		
		case 574905658:
			return "p_cs_syringe01x";
		
		case -1971689092:
			return "p_bottleJD01x";
		
		case 1085457901:
			return "p_rag02x";
		
		case 1826097446:
			return "p_magneto02x";
		
		case -789465252:
			return "p_magneto01x";
		
		case -238490359:
			return "p_cs_wantedalive01x";
		
		case -997503794:
			return "P_CS_RCRIDETHELIGHTNING";
		
		case -1473388640:
			return "p_pen01x";
		
		case -1135604739:
			return "p_cs_letter01a_x";
		
		case 201002005:
			return "p_cs_electricchair01x";
		
		case -451122991:
			return "p_cs_generator01x";
		
		case -580353882:
			return "p_cs_electricHelmet01x";
		
		case -330691926:
			return "p_cs_gag01x";
		
		case -832187622:
			return "p_door_sha_man01x";
		
		case -2104766853:
			return "p_stool01x";
		
		case -1937484496:
			return "p_stool02x";
		
		case -156777810:
			return "p_jugglingball01x";
		
		case -1025740342:
			return "p_chair02x";
		
		case 998759471:
			return "p_chair04x";
		
		case -182450036:
			return "p_crate15x";
		
		case 539662086:
			return "p_cleaver01x";
		
		case 401116463:
			return "p_bottle003x";
		
		case -940999254:
			return "p_cs_book02x";
		
		case -1502733730:
			return "p_stickydymt_single";
		
		case -776888393:
			return "p_cs_fusedynamite01x";
		
		case -1901975761:
			return "p_dynamite01x";
		
		case 1170245472:
			return "p_cs_fusespool01x";
		
		case 1996775400:
			return "p_cs_detonator01x";
		
		case -2058893965:
			return "p_cs_bedrollclsd01x";
		
		case -967333571:
			return "P_CIGARETTE_CS01X";
		
		case -1413776846:
			return "P_MATCHES01X";
		
		case 617552302:
			return "P_MATCHSTICK01X";
		
		case -1321878957:
			return "P_WOODENCHAIR01X";
		
		case 1230724566:
			return "P_CHAIR_CRATE02X";
		
		case 164271545:
			return "p_knittingneedle01x";
		
		case -458984299:
			return "p_knittingsquare01x";
		
		case -1055906010:
			return "p_cs_rabbitMeat01x";
		
		case 622322952:
			return "p_cs_rabbitMeat02x";
		
		case -890087611:
			return "p_bottle03x";
		
		case -1281909308:
			return "p_cs_billstack01x";
		
		case 1711925122:
			return "p_cs_billSingle01x";
		
		case 2514129:
			return "p_binoculars01x";
		
		case -1866470762:
			return "p_doorrhosheriff02x";
		
		case -2021274799:
			return "P_BARSTOOL01X";
		
		case -491019543:
			return "p_cs_shotglass01x";
		
		case 1698150819:
			return "p_lamp18x";
		
		case -1963197288:
			return "p_clock06x";
		
		case 1527379014:
			return "p_bottle02x";
		
		case 876316748:
			return "p_cs_lootSack01x";
		
		case 1767344357:
			return "p_wineBox01x";
		
		case 822933632:
			return "p_strongBox01x";
		
		case 1497470487:
			return "P_CLOCKTABLE02X";
		
		case -1149199295:
			return "p_gen_statue03b";
		
		case 1186910594:
			return "P_STOOLWINTER01X";
		
		case 1954479996:
			return "P_CS_BARRAG01X";
		
		case 2003418568:
			return "P_PLATE01X";
		
		case 624070311:
			return "P_KNIFE01X";
		
		case 1547859810:
			return "P_KNIFE02X";
		
		case -1710894930:
			return "P_CS_CATFISH_WHOLE01X";
		
		case 431926707:
			return "P_CS_CATFISH_WHOLE01BX";
		
		case -1419711042:
			return "P_WOODWHITTLE01X";
		
		case 1810315535:
			return "P_STICKFIREPOKER01X";
		
		case 266900228:
			return "P_CS_WOODPILE01X";
		
		case 382293518:
			return "P_FORK01X";
		
		case 389673974:
			return "P_KNIFE04X";
		
		case -1874205952:
			return "p_knife03x";
		
		case 1983379698:
			return "P_CS_BOTTLESLIM01X";
		
		case 1246822101:
			return "P_CS_BLANKET01X";
		
		case 1496261474:
			return "P_BEDROLLCLOSED01X";
		
		case -1342227326:
			return "P_CS_KINDLING01X";
		
		case -1402507254:
			return "P_CIGARTHIN01X";
		
		case 1081626861:
			return "p_door_wglass01x";
		
		case 663716280:
			return "p_broom02x";
		
		case joaat("p_amb_clipboard_01"):
			return "P_AMB_CLIPBOARD_01";
		
		case -384257010:
			return "P_CHAIR07X";
		
		case 628727561:
			return "p_cs_cratetnt01x";
		
		case -1809617345:
			return "p_cs_flourbag01x";
		
		case 1521462563:
			return "p_cs_supplies01x";
		
		case -589352772:
			return "p_cs_supplies02x";
		
		case 1376394832:
			return "p_cs_supplies03x";
		
		case -542955242:
			return "p_door04x";
		
		case -29643421:
			return "p_door11x";
		
		case -856676249:
			return "p_doorrhosaloon01_l";
		
		case -1333989503:
			return "p_doorrhosaloon01_r";
		
		case -1403420972:
			return "P_VAL_GATE2M02X";
		
		case -1205874435:
			return "P_CS_STMDNKY01X";
		
		case 2051399415:
			return "P_CS_HOOKPULLEY01X";
		
		case 1932781590:
			return "P_CHAIR_CS05X";
		
		case 1489783104:
			return "P_CHAIR_18X";
		
		case -1581225876:
			return "P_CHAIR19X";
		
		case -895862876:
			return "P_CHAIR20X";
		
		case -289651159:
			return "P_CHAIR05X";
		
		case 1407600554:
			return "p_chair22x";
		
		case 986312695:
			return "p_glass01x";
		
		case -93693274:
			return "P_DININGCHAIRS01X";
		
		case 325252933:
			return "P_WINDSORCHAIR03X";
		
		case 1328906077:
			return "P_WINDSORCHAIR02X";
		
		case 1045059103:
			return "p_door_val_jail02x";
		
		case -155999274:
			return "P_CRATETNT01X";
		
		case -1956230403:
			return "P_CRATETNT02X";
		
		case -62869733:
			return "P_MONEYSTACK01X";
		
		case -422220273:
			return "P_AXE01X";
		
		case 2065139134:
			return "P_HOE01X";
		
		case 1170674247:
			return "P_SHOVEL01X";
		
		case 49937914:
			return "P_SHOVEL04X";
		
		case -296963090:
			return "P_BROOM01X";
		
		case -811821899:
			return "P_PITCHFORK01X";
		
		case 1993810557:
			return "P_SCYTHE01X";
		
		case 1472170582:
			return "P_SKIFF02x";
		
		case 673153214:
			return "p_door_nbx_doc01x_l";
		
		case 132005948:
			return "p_door_nbx_doc01x_r";
		
		case 1661843942:
			return "p_cs_camera";
		
		case 1765047802:
			return "p_cs_cameratripod";
		
		case -1329546951:
			return "p_cs_camerabag01x";
		
		case -569131374:
			return "p_cameraflash01x";
		
		case -1509314938:
			return "p_cs_shutterrelease";
		
		case -397513868:
			return "rowboatswamp";
		
		case -1399874861:
			return "P_CHAIR25X";
		
		case 1064769829:
			return "P_DOORBRAIT01BX";
		
		case -50604564:
			return "P_CS_MAP01X";
		
		case 1058703817:
			return "p_hammer03x";
		
		case -238593141:
			return "p_cs_nailbarrel01x";
		
		case 1210783447:
			return "p_cs_book04x";
		
		case -2118240499:
			return "p_cs_Fan01x";
		
		case -862949069:
			return "p_cs_ledgerSmall01x";
		
		case -1311208351:
			return "p_cs_envelope01x";
		
		case 826392697:
			return "p_wrappedmeat01x";
		
		case 1455710720:
			return "P_CS_LETTER02X";
		
		case -2102031605:
			return "p_cs_book03x";
		
		case 1955831280:
			return "p_cs_giftBox01x";
		
		case 305182125:
			return "p_boiler01x";
		
		case 888504590:
			return "p_boiler02x";
		
		case -82199229:
			return "p_mugCoffee01x";
		
		case -1174489568:
			return "p_glasstallbeer01x";
		
		case 1022056778:
			return "p_pitcher02x";
		
		case 155128635:
			return "p_tray03x";
		
		case 1971611315:
			return "p_sit_chairwicker01b";
		
		case -449688053:
			return "S_INV_ORLEANDER01CX";
		
		case -703216761:
			return "S_INV_ORLEANDER01DX";
		
		case -1700686082:
			return "P_LADLE02X";
		
		case -889047922:
			return "P_CS_POT01X";
		
		case 519549403:
			return "P_CHAIRDINING03X";
		
		case -755866836:
			return "P_SPOON01X";
		
		case 196631385:
			return "P_BOWL03X";
		
		case -569447711:
			return "P_CS_BRIDECATALOGUE01X";
		
		case -535756918:
			return "P_JEWELRYBOX02BX";
		
		case 2044431266:
			return "P_CS_LETTERFOLDED01X";
		
		case -583569159:
			return "P_CS_ARTHURHAT01X";
		
		case 578898429:
			return "P_OAR03X";
		
		case -765914358:
			return "P_DOOR_VAL_BANKVAULT";
		
		case -1190396102:
			return "P_DOOR_COMBANK01X";
		
		case -436606401:
			return "P_CS_DONATION01X";
		
		case 1592327736:
			return "p_door_nbx_bank03x_R";
		
		case -1006516120:
			return "p_door_nbx_bank03x_L";
		
		case -1078696833:
			return "p_camp_plate_02x";
		
		case -974192123:
			return "p_stewplate02x";
		
		case 120221819:
			return "p_cs_log01x";
		
		case -1814268450:
			return "p_ndb_hotelplank01x";
		
		case 314775562:
			return "p_glass06x";
		
		case -1594634038:
			return "p_cs_rag01x";
		
		case 819493639:
			return "p_inkwell01x";
		
		case -548150401:
			return "p_cigar02x";
		
		case 1843407141:
			return "p_bottleBeer01x";
		
		case -1883578190:
			return "p_beermugglass01x";
		
		case 851401507:
			return "p_nutBowl01x";
		
		case 1610236838:
			return "p_cs_sacklarge01x";
		
		case 633326690:
			return "p_cs_dressbox01x";
		
		case -300816757:
			return "p_bell05x";
		
		case 342335375:
			return "p_woodendeskchair01x";
		
		case -1443906703:
			return "p_chair06x";
		
		case -1031399461:
			return "p_jug01x";
		
		case -1907186363:
			return "S_INV_MEDICINE01X";
		
		case 2067968977:
			return "S_INV_MEDICINE_FTY";
		
		case -434431529:
			return "S_INV_Milkweed01bx";
		
		case -2051048367:
			return "p_bottleslim01x";
		
		case 1267814678:
			return "p_cs_journal01x";
		
		case -503626004:
			return "p_mortarpestle02x";
		
		case 197307092:
			return "s_inv_burdock01dx";
		
		case 604616887:
			return "p_cs_ropeLegSplit";
		
		case 2038507899:
			return "p_cs_ropeHandsSplit";
		
		case 388126459:
			return "p_fishingpole01x";
		
		case -1367341904:
			return "P_FISHINGPOLE02X";
		
		case -1629442620:
			return "p_cs_flowernecklace";
		
		case -475791515:
			return "P_CS_FLOWERS01X";
		
		case -1018099626:
			return "s_inv_yarrow01cx";
		
		case 1210527888:
			return "P_CS_FISHINGPOLEBAG01X";
		
		case 1785480577:
			return "P_STICK02X";
		
		case 1789147356:
			return "P_CS_SOCK01X";
		
		case 169503210:
			return "P_DOOR_VAL_BANK00_RX";
		
		case 160636303:
			return "P_DOOR_VAL_BANK00_RX";
		
		case -1456646750:
			return "p_can10x";
		
		case 1010765128:
			return "p_cs_rabbitgut";
		
		case -142576910:
			return "p_cs_rabbitheadless";
		
		case 2055623882:
			return "p_cs_rabbitfeetless";
		
		case -808559472:
			return "p_kettle03x";
		
		case -804436865:
			return "s_che_woodbin01x";
		
		case 1833396091:
			return "s_lootablepoorcase";
		
		case -1494278633:
			return "P_CS_BOOKHARDCV01X";
		
		case -1643891339:
			return "P_LETTERBUNDLE_01X";
		
		case -459043872:
			return "P_LETTERENVELOPE_CS01X";
		
		case 1825744405:
			return "P_PACKAGE08X";
		
		case 1713200946:
			return "P_CIGARBOX02X";
		
		case 1663122464:
			return "p_crucifix02x";
		
		case 934706428:
			return "p_bottleCrate01x";
		
		case -554014433:
			return "p_can05x";
		
		case -1682372069:
			return "p_cs_suitcase04x";
		
		case 69604629:
			return "p_cs_bagstrauss01x";
		
		case 29998454:
			return "P_BOTTLE008X";
		
		case 161697289:
			return "P_BOTTLE009X";
		
		case 1045394246:
			return "P_BOTTLE010X";
		
		case 1623781586:
			return "p_pocketMirror01x";
		
		case -1671495534:
			return "P_CIGARETTE01X";
		
		case 1207272102:
			return "P_TRAVELTRUNK02X";
		
		case -294963065:
			return "P_CHAIRWHITE01X";
		
		case -1947027049:
			return "P_JOURNAL_OPEN01X";
		
		case -1945229292:
			return "p_table42_cs";
		
		case -1028267229:
			return "p_cs_newspaper_02x";
		
		case -1537933036:
			return "P_CS_POTATOSLICE01X";
		
		case -1035439448:
			return "S_APLSD_LOG";
		
		case 1410968406:
			return "S_APLSD_HRSATT";
		
		case -1216485179:
			return "p_spittoon01x";
		
		case 787211696:
			return "p_woodbowl01x";
		
		case -1167561544:
			return "p_pencil01x";
		
		case 1467658477:
			return "P_SPOONMID01X";
		
		case -624124479:
			return "P_PAN01X";
		
		case 1211525499:
			return "P_Pipe01x";
		
		case 666597548:
			return "p_cs_railroadbond01x";
		
		case -989609930:
			return "p_sharpeningstone01x";
		
		case 1540392720:
			return "p_treestump02x";
		
		case -1638036806:
			return "p_plate17x";
		
		case -1566727213:
			return "p_cs_newspaper_01x";
		
		case 1783964157:
			return "p_sadiehat01x";
		
		case -1093732866:
			return "p_door_bla_jail_l_01x";
		
		case 784094203:
			return "p_door_bla_jail_r_01x";
		
		case 441245663:
			return "p_mashedPotato02x";
	}
	return "";
}

void func_568(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;
	
	((*Global_1949749)[iParam0 /*23*/])->f_4 = iParam1;
	(*Global_1949749)[iParam0 /*23*/] = iParam4;
	((*Global_1949749)[iParam0 /*23*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1949749)[iParam0 /*23*/])->f_2 = iParam5;
	((*Global_1949749)[iParam0 /*23*/])->f_6 = { vParam6 };
	((*Global_1949749)[iParam0 /*23*/])->f_9 = fParam9;
	((*Global_1949749)[iParam0 /*23*/])->f_10 = iParam10;
	((*Global_1949749)[iParam0 /*23*/])->f_11 = iParam11;
	((*Global_1949749)[iParam0 /*23*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1949749)[iParam0 /*23*/])->f_5 = iParam12;
	((*Global_1949749)[iParam0 /*23*/])->f_1 = 2;
	((*Global_1949749)[iParam0 /*23*/])->f_17 = -1;
	((*Global_1949749)[iParam0 /*23*/])->f_18 = iParam16;
	((*Global_1949749)[iParam0 /*23*/])->f_19 = iParam15;
	((*Global_1949749)[iParam0 /*23*/])->f_20 = bParam25;
	((*Global_1949749)[iParam0 /*23*/])->f_22 = 0f;
	if (bParam25)
	{
		((*Global_1949749)[iParam0 /*23*/])->f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		((*Global_1949749)[iParam0 /*23*/])->f_21 = MISC::_GET_SYSTEM_TIME();
	}
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		
		case 7:
			HUD::_0xA3F2149AA24F3D8E(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		
		case 8:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		
		case 9:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		
		case 14:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		
		case 16:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		
		case 11:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		
		case 13:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		
		case 15:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1949749)[iParam0 /*23*/])->f_3 = iVar0;
	func_545(iParam0, 1);
	func_546(iParam0, 1);
	func_547(iParam0, 128);
}

void func_569(int iParam0)
{
	struct<16> Var0;
	
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1938407)[iParam0 /*16*/])->f_10)))
	{
		return;
	}
	*((*Global_1938407)[iParam0 /*16*/]) = { Var0 };
	Global_1938407->f_161 = (Global_1938407->f_161 - 1);
	if (Global_1938407->f_161 < 0)
	{
		Global_1938407->f_161 = 0;
	}
}

int func_570(int iParam0)
{
	int iVar0;
	
	iVar0 = func_587(func_623(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1951131->f_1657.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_571(var uParam0)
{
	if (func_572(81053684, uParam0))
	{
		return 1;
	}
	if (func_572(-525676072, uParam0))
	{
		return 1;
	}
	return 0;
}

int func_572(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_587(func_623(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1951131->f_1657.f_1[iVar1 /*3*/] != 0 && &Global_1951131->f_1657.f_1[iVar1 /*3*/] != &Global_1951131->f_81[iVar1 /*12*/])
	{
		iVar0 = &Global_1951131->f_1657.f_1[iVar1 /*3*/];
		if (func_451(iVar0) == iParam0 || (iParam0 == 81053684 && func_624(iVar0, -1348134986)))
		{
			*uParam1 = iVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_573(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (Global_1951131->f_2706.f_1 >= 5)
	{
		return 0;
	}
	if (!func_625(uParam0))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_541(uParam0);
	return func_442(iParam1, iVar0, bParam2, 1);
}

int func_574(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_626(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954462->f_1446;
		
		case 1:
			return Global_1954462->f_1465.f_136;
		
		default:
			break;
	}
	return -1;
}

void func_575(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1273882->f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_0x835F131E7DC8F97A(iParam1, fParam0, 0, 0);
}

int func_576(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_626(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954462->f_1446.f_2;
		
		case 1:
			return Global_1954462->f_1465.f_136.f_2;
		
		default:
			break;
	}
	return -1;
}

void func_577(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1273882->f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	PED::_0xC3D4B754C0E86B9E(iParam1, fParam0);
}

int func_578()
{
	if (!func_529(Global_1939168->f_39))
	{
		return joaat("weapon_unarmed");
	}
	return Global_1939168->f_39;
}

bool func_579(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	
	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -1212426201:
		case -1101297303:
		case -594562071:
		case 416676503:
		case 860033945:
		case 970310034:
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
			break;
		
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			bVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(bVar0) || WEAPON::_0x959383DCD42040DA(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, WEAPON::_0x89CF5FF3D363311E(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_26387 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_529(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_26387)
						{
							if (func_529(iVar4) && iVar4 != bVar0)
							{
								bVar0 = iVar4;
							}
						}
						else if (iVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_30() == -1 && !func_627(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, 0) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == bVar0 && !Global_26387) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
		}
	}
	if (bVar0 == joaat("weapon_unarmed") && iParam1 == joaat("weapon_unarmed"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("weapon_unarmed"))
	{
		switch (iParam1)
		{
			case -1101297303:
			case 416676503:
				bVar0 = 379542007;
				break;
			
			case -1212426201:
			case -594562071:
			case 860033945:
			case 970310034:
				if (func_627(-183018591))
				{
					bVar0 = -183018591;
				}
				else
				{
					bVar0 = 379542007;
				}
				break;
			
			default:
				bVar0 = 379542007;
				break;
		}
	}
	else if (bVar0 == -164645981 && iParam0 == Global_35)
	{
		bVar0 = 1247405313;
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_529(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_0x959383DCD42040DA(bVar0) && bVar0 != joaat("weapon_unarmed")) && !WEAPON::_0x79407D33328286C6(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::_0xD3750CCC00635FC2(bVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (iParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_628(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_629(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_630(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, iParam4);
	}
	return bVar0;
}

int func_580(int iParam0, int iParam1)
{
	var uVar0;
	
	return func_631(&uVar0, iParam0, iParam1);
}

bool func_581()
{
	return &Global_1938998 == 1;
}

bool func_582()
{
	return &Global_1938998 == 2;
}

void func_583(float fParam0)
{
}

void func_584()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1938998->f_15 = 0f;
}

struct<5> func_585(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;
	
	Var0 = { func_632(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_633(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_634(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			break;
		
		case -427144552:
			Var0 = { func_635(bParam1) };
			if (iParam2 && func_636(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_637(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_637(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_638(iParam0, &Var6, 1728382685))
				{
					Var0.f_4 = 1728382685;
				}
				else
				{
					Var0.f_4 = -649335959;
				}
			}
			else
			{
				Var0.f_4 = 1728382685;
			}
			break;
		
		case joaat("coach"):
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		
		case -1650247667:
			Var0.f_4 = -1591664384;
			Var0 = { func_639(bParam1) };
			switch (func_451(iParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				
				case -1057349201:
					Var0.f_4 = 1473261684;
					break;
				
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		
		case -2130996531:
		case -1962314949:
			if (func_640(iParam0, -1823706425))
			{
				Var0 = { func_634(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_640(iParam0, -1483207246))
			{
				Var0 = { func_634(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1911121386))
			{
				Var0 = { func_634(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_640(iParam0, -1653629781))
			{
				Var0 = { func_634(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			break;
		
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!func_641(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_640(iParam0, -1653629781))
			{
				Var0 = { func_634(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_586(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1951131->f_81[iVar0 /*12*/])->f_9 == iParam0)
		{
			return func_596(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_587(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		
		case -1889597427:
			return 0;
		
		case -1884748965:
			return 32;
		
		case -1586649372:
			return 33;
		
		case -1505978566:
			return 22;
		
		case -1489346253:
			return 38;
		
		case -1364808185:
			return 19;
		
		case -1292426046:
			return 8;
		
		case -1197751823:
			return 20;
		
		case -1176744536:
			return 24;
		
		case -1130865351:
			return 31;
		
		case -1130352927:
			return 1;
		
		case -893163968:
			return 17;
		
		case -735900586:
			return 28;
		
		case -676503695:
			return 6;
		
		case -450913544:
			return 18;
		
		case -426430150:
			return 29;
		
		case -358215195:
			return 39;
		
		case -338487716:
			return 11;
		
		case -207860920:
			return 26;
		
		case 99217379:
			return 27;
		
		case 304805134:
			return 21;
		
		case 383349088:
			return 7;
		
		case 389988485:
			return 2;
		
		case 673166414:
			return 25;
		
		case 735520874:
			return 5;
		
		case 788010710:
			return 34;
		
		case 1108822547:
			return 10;
		
		case 1145151482:
			return 23;
		
		case 1250092473:
			return 16;
		
		case 1367443060:
			return 4;
		
		case 1422688607:
			return 9;
		
		case 1600962399:
			return 13;
		
		case 1672288269:
			return 15;
		
		case 1742327865:
			return 12;
		
		case 1780904876:
			return 3;
		
		case 1788623170:
			return 30;
		
		case 1849504272:
			return 14;
		
		case 1900541263:
			return 37;
		
		case 1958421083:
			return 35;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_588(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	
	func_642();
	if (iParam2 == 39)
	{
		Var0 = { func_585(iParam0, 1, 0) };
		iParam2 = func_587(func_586(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_555(32768) && iParam2 == 10)
	{
		func_611(1108822547);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_643(iParam2);
	func_599(iParam2, iVar5);
	func_644(Global_1951131->f_1538.f_1[iParam2 /*3*/], 4, 6);
	func_644(Global_1951131->f_1657.f_1[iParam2 /*3*/], 4, 6);
	func_645(&(Global_1951131->f_1538), iParam0, iParam2, bParam4);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1951131->f_1538.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1951131->f_1538.f_1[iParam2 /*3*/] = iParam0;
	(Global_1951131->f_1538.f_1[iParam2 /*3*/])->f_1 = func_646(iParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1951131->f_2760)
		{
			if (&Global_1951131->f_2760.f_2[iVar6 /*2*/] >= 0 && &Global_1951131->f_2760.f_2[iVar6 /*2*/] < 39)
			{
				Global_1951131->f_2627[&Global_1951131->f_2760.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1951131->f_2627[&Global_1951131->f_2760.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_603(func_596(&(Global_1951131->f_2760.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_589(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_647(&(Global_1951131->f_2760), bParam0, bParam1, bParam2, bParam3);
}

int func_590(int iParam0, bool bParam1)
{
	if (!func_510(iParam0, 0))
	{
	}
	if (!bParam1 && (iParam0 == -1713496139 || iParam0 == -598283164))
	{
		return 0;
	}
	if (func_624(iParam0, 265372629))
	{
		return 1;
	}
	return 0;
}

int func_591(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<5> Var4;
	int iVar9;
	
	Var4 = { func_585(iParam0, 0, 0) };
	if (func_590(iParam0, 0))
	{
		iVar9 = func_648(Var4, Var4.f_4, 0, -1);
		if (iVar9 != 0)
		{
			Var4 = { func_585(iVar9, 0, 0) };
			Var0 = { func_634(iVar9, Var4, Var4.f_4, 0) };
			return func_649(Var0, 0);
		}
		return 1;
	}
	Var0 = { func_634(iParam0, Var4, Var4.f_4, 0) };
	return func_649(Var0, iParam1);
}

void func_592()
{
	Global_1951131->f_3235 = 0;
	Global_1951131->f_3235.f_1 = 0;
	Global_1951131->f_3235.f_8 = 0;
	Global_1951131->f_3235.f_2 = 0;
	Global_1951131->f_3235.f_3[0] = 0;
	Global_1951131->f_3235.f_3[1] = 0;
	Global_1951131->f_3235.f_3[2] = 0;
	Global_1951131->f_3235.f_3[3] = 0;
	Global_1951131->f_3235.f_9 = 0;
	Global_1951131->f_3235.f_10 = 0;
	Global_1951131->f_3235.f_11 = 0;
	if (Global_1951131->f_3235.f_12)
	{
		PED::_0x13E7320C762F0477(Global_1951131->f_3235.f_13);
	}
	Global_1951131->f_3235.f_12 = 0;
	func_615(32768);
	func_603(1108822547, 8, 6);
}

int func_593(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_587(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1951131->f_1657.f_1[iVar1 /*3*/] == &Global_1951131->f_81[iVar1 /*12*/] || &Global_1951131->f_1538.f_1[iVar1 /*3*/] == &Global_1951131->f_81[iVar1 /*12*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_594(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_595(struct<4> Param0)
{
	int iVar0;
	int iVar1;
	
	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
			if (Global_1951131->f_916 >= 25)
			{
				return;
			}
			if (func_650(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1951131->f_916)
				{
					iVar1 = ((Global_1951131->f_921 + iVar0) % 25);
					if ((&Global_1951131->f_734[iVar1 /*4*/] == Param0 && (Global_1951131->f_734[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1951131->f_734[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_651(Param0);
			*(Global_1951131->f_734[Global_1951131->f_922 /*4*/]) = { Param0 };
			Global_1951131->f_916++;
			Global_1951131->f_922 = (Global_1951131->f_922 + 1 % 25);
			func_557(8);
			break;
		
		case 23:
		case 24:
		case 25:
			if (Global_1951131->f_917 >= 25)
			{
				return;
			}
			if (func_650(Param0))
			{
				return;
			}
			func_651(Param0);
			*(Global_1951131->f_633[Global_1951131->f_917 /*4*/]) = { Param0 };
			Global_1951131->f_917++;
			func_557(8);
			break;
		
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1951131->f_918 >= 20)
			{
				return;
			}
			if (func_650(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1951131->f_918)
				{
					iVar1 = ((Global_1951131->f_919 + iVar0) % 20);
					if ((&Global_1951131->f_835[iVar1 /*4*/] == Param0 && (Global_1951131->f_835[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1951131->f_835[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_651(Param0);
			*(Global_1951131->f_835[Global_1951131->f_920 /*4*/]) = { Param0 };
			Global_1951131->f_918++;
			Global_1951131->f_920 = (Global_1951131->f_920 + 1 % 20);
			func_557(8);
			break;
			break;
	}
}

int func_596(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		
		case 1:
			return -1130352927;
		
		case 2:
			return 389988485;
		
		case 3:
			return 1780904876;
		
		case 4:
			return 1367443060;
		
		case 5:
			return 735520874;
		
		case 6:
			return -676503695;
		
		case 7:
			return 383349088;
		
		case 8:
			return -1292426046;
		
		case 9:
			return 1422688607;
		
		case 10:
			return 1108822547;
		
		case 11:
			return -338487716;
		
		case 12:
			return 1742327865;
		
		case 13:
			return 1600962399;
		
		case 14:
			return 1849504272;
		
		case 15:
			return 1672288269;
		
		case 16:
			return 1250092473;
		
		case 17:
			return -893163968;
		
		case 18:
			return -450913544;
		
		case 19:
			return -1364808185;
		
		case 20:
			return -1197751823;
		
		case 21:
			return 304805134;
		
		case 22:
			return -1505978566;
		
		case 23:
			return 1145151482;
		
		case 24:
			return -1176744536;
		
		case 25:
			return 673166414;
		
		case 26:
			return -207860920;
		
		case 27:
			return 99217379;
		
		case 28:
			return -735900586;
		
		case 29:
			return -426430150;
		
		case 30:
			return 1788623170;
		
		case 31:
			return -1130865351;
		
		case 32:
			return -1884748965;
		
		case 33:
			return -1586649372;
		
		case 34:
			return 788010710;
		
		case 35:
			return 1958421083;
		
		case 36:
			return -1944638739;
		
		case 37:
			return 1900541263;
		
		case 38:
			return -1489346253;
		
		case 39:
			return -358215195;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_597(int iParam0, int iParam1)
{
	return ((Global_1951131->f_81[func_587(iParam0, 1) /*12*/])->f_11 && iParam1) != 0;
}

int func_598(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_1951131->f_2760)
	{
		if (&Global_1951131->f_2760.f_2[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_599(int iParam0, int iParam1)
{
	func_652(&(Global_1951131->f_2760), iParam0, iParam1);
}

void func_600(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_601(int iParam0, int iParam1, int iParam2)
{
	(Global_1951131->f_81[func_587(iParam0, 1) /*12*/])->f_11 = ((Global_1951131->f_81[func_587(iParam0, 1) /*12*/])->f_11 || iParam1);
}

void func_602(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 10;
	if (func_597(1108822547, 6) || iParam3)
	{
		if (iParam2 || iParam3)
		{
			func_554(iParam0, iVar0, 0);
			func_601(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(iParam0, Global_1951131->f_3235.f_1, &(Global_1951131->f_3235.f_3[0]), &(Global_1951131->f_3235.f_3[1]), &(Global_1951131->f_3235.f_3[2]), Global_1951131->f_3235.f_8, Global_1951131->f_3235.f_9, Global_1951131->f_3235.f_10, Global_1951131->f_3235.f_11);
		func_603(1108822547, 1, 6);
	}
	Global_1951131->f_923++;
	if (!bParam1)
	{
		return;
	}
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
}

void func_603(int iParam0, int iParam1, int iParam2)
{
	(Global_1951131->f_81[func_587(iParam0, 1) /*12*/])->f_11 = ((Global_1951131->f_81[func_587(iParam0, 1) /*12*/])->f_11 - ((Global_1951131->f_81[func_587(iParam0, 1) /*12*/])->f_11 && iParam1));
}

void func_604(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_605(int iParam0, var uParam1)
{
	return (Global_1951131->f_2706.f_3[iParam0] && uParam1) != 0;
}

void func_606(int iParam0, var uParam1)
{
	Global_1951131->f_2706.f_3[iParam0] = (&Global_1951131->f_2706.f_3[iParam0] - (Global_1951131->f_2706.f_3[iParam0] && uParam1));
}

int func_607(int iParam0)
{
	switch (iParam0)
	{
		case 708211766:
			return 1;
		
		case -1815871154:
			return 2;
		
		case 1053922635:
			return 4;
		
		case -1248203249:
			return 8;
		
		case -1275860049:
			return 16;
		
		case -473313046:
			return 32;
		
		case 1009605579:
			return 64;
		
		case -92538845:
			return 256;
		
		case 350097565:
			return 512;
		
		case 346761890:
			return 1024;
		
		case -915377750:
			return 2048;
		
		case -1283403230:
			return 4096;
		
		case 1024778115:
			return 8192;
		
		case 75507907:
			return 16384;
		
		case -1678578495:
			return 32768;
		
		case -1925540957:
			return 65536;
		
		case -1932005642:
			return 131072;
		
		case -803648582:
			return 128;
		
		case 351949263:
			return 262144;
		
		case -597281578:
			return 524288;
		
		case 465720259:
			return 1048576;
		
		case -376594188:
			return -1;
		
		case -663436545:
			return 112;
		
		case 1042019528:
			return 2160;
		
		case -141044514:
			return 8304;
		
		case 884232794:
			return 16496;
		
		case 836721350:
			return 40960;
		
		case -1062102573:
			return 65601;
		
		case -884591393:
			return 96;
		
		case -1886898087:
			return 32880;
		
		case -1629261761:
			return 2049;
		
		case -366477279:
			return 0;
		
		default:
			break;
	}
	return 0;
}

bool func_608(int iParam0)
{
	return func_499(iParam0, 2);
}

int func_609(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_618(uParam0, -1, 1, 1, 0);
	iVar0 = 16;
	iVar1 = 34;
	iVar2 = func_653((Global_1951131->f_81[iVar1 /*12*/])->f_9);
	iVar3 = func_653((Global_1951131->f_81[iVar0 /*12*/])->f_9);
	if (iVar2 == 0)
	{
		return 0;
	}
	else
	{
		uParam0->f_1[iVar1 /*3*/] = iVar2;
	}
	if (iVar3 == 0)
	{
		if (func_654() == 24043185)
		{
			return 0;
		}
	}
	else
	{
		uParam0->f_1[iVar0 /*3*/] = iVar3;
	}
	*uParam0 = iParam1;
	return 1;
}

int func_610(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam2 != 0 && func_655(iParam1) != iParam2)
	{
		return 0;
	}
	if (func_656(2, iParam1))
	{
		func_657(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void func_611(int iParam0)
{
	func_603(iParam0, 8, 6);
}

void func_612(int iParam0)
{
	func_601(iParam0, 8, 6);
}

void func_613(int iParam0)
{
	Global_1951131->f_1054 = iParam0;
}

int func_614(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_654();
	}
	if (iParam0 == 2026485318)
	{
		return -1806335803;
	}
	else if (iParam0 == 24043185)
	{
		return -971050805;
	}
	return 0;
}

void func_615(int iParam0)
{
	Global_1951131 = (&Global_1951131 - (Global_1951131 && iParam0));
}

void func_616(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_658(iVar0, iParam0))
		{
			func_659(iVar0, iParam0, 6);
		}
		iVar0++;
	}
}

void func_617(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 2;
	}
	if (iParam2 && Global_1951131->f_2706 != 0)
	{
		func_540(Global_1951131->f_2706);
		func_542(0);
		Global_1951131->f_2706 = 0;
	}
	if (func_555(32768))
	{
		func_612(1108822547);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		iParam0 = 0;
		func_660(&(Global_1951131->f_1657.f_1[1 /*3*/]), -1811760631, &(Global_1951131->f_1055), &(Global_1951131->f_1055.f_9), 1);
		func_660(&(Global_1951131->f_1657.f_1[4 /*3*/]), -2118203104, &(Global_1951131->f_1055), &(Global_1951131->f_1055.f_9), 1);
		func_532(2, 0, iVar0, 0, 0);
		func_532(4, 0, 0, 0, 0);
		func_532(5, 0, 0, 0, 0);
	}
	else
	{
		iVar0 |= 1;
		func_532(2, 0, iVar0, iParam0, 0);
	}
	func_661();
}

void func_618(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_662(uParam0->f_1[iVar0 /*3*/], 2))
		{
			if (func_553(iVar0, iParam1))
			{
				vVar4 = { func_663(iVar0, -1) };
				if (((!bParam4 && vVar4.x != &Global_1951131->f_81[iVar0 /*12*/]) && vVar4.x != 0) && (&uParam0->f_1[iVar0 /*3*/] != vVar4.x || (uParam0->f_1[iVar0 /*3*/])->f_1 != vVar4.y))
				{
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar4 };
				}
				if (func_658(iVar0, 4))
				{
					func_659(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_664(iVar0, 4, 6);
				}
				Jump @205; //curOff = 171
				if (bParam2)
				{
					vVar1.x = &Global_1951131->f_81[iVar0 /*12*/];
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar1 };
				}
			}
			iVar0++;
		}
	}

int func_619(int iParam0)
{
	int iVar0;
	var uVar1;
	
	Global_1951131->f_1040.f_2 = 0;
	iVar0 = 1226838104;
	func_665(&(Global_1951131->f_1040), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1951131->f_1040));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1951131->f_1040), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_620(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return 1;
}

int func_621(int iParam0)
{
	var uVar0[5];
	int iVar6;
	
	if (!func_510(iParam0, 0))
	{
		return 0;
	}
	iVar6 = UNK_0x8870895BA5ED9385(iParam0, 761377030, &uVar0);
	if (iVar6 > 0)
	{
		return &(uVar0[0]);
	}
	return 0;
}

void func_622(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (func_624(&(uParam0->f_1[34 /*3*/]), -166674229))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (&(Global_1951131->f_81[iVar0 /*12*/])->f_3[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
		{
		}
		else if (!bParam2 && func_621(&(uParam0->f_1[iVar0 /*3*/])) != 0)
		{
		}
		else if (!func_553(iVar0, iParam1))
		{
		}
		else if (func_658(iVar0, 16))
		{
			func_659(iVar0, 16, 6);
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
			(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
		}
		iVar0++;
	}
}

int func_623(int iParam0)
{
	int iVar0;
	
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_586(iVar0);
}

int func_624(int iParam0, int iParam1)
{
	if (!func_510(iParam0, 0))
	{
		return func_667(func_666(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_625(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var3;
	
	Var3 = -961687407;
	if (func_30() == -1)
	{
		Var3 = 1444744190;
	}
	Var3.f_1 = uParam0;
	Var3.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var3);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var3))
	{
		return 0;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var3, -2008906477))
	{
		return 0;
	}
	uVar2 = func_668(uParam0);
	if (func_669(iVar0, &iVar1))
	{
		func_670(iVar1, uVar2);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var3))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var3, -2008906477))
		{
		}
		else if (!func_669(iVar0, &iVar1))
		{
		}
		else
		{
			func_670(iVar1, uVar2);
		}
	}
	return 1;
}

int func_626(int iParam0)
{
	return func_672(func_671(iParam0));
}

int func_627(int iParam0)
{
	int iVar0;
	
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_628(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;
	
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
	{
		Var0 = { func_585(iParam0, 0, 1) };
		if (func_637(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_638(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_634(iParam0, Var0, Var0.f_4, 0) };
				func_673(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_674(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
		{
			return 0;
		}
		func_675(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
		func_676(iParam0, iParam1);
		return 1;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
	{
		return 0;
	}
	if (iParam1 > 0)
	{
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return 1;
}

void func_629(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar1)
	{
		case -1273613561:
		case -776789570:
		case -763072541:
		case -486390692:
		case 50483426:
		case 215164947:
		case 247176142:
		case 347599949:
		case 852072701:
		case 861896523:
		case 1017000466:
		case 1245530084:
		case 1336863290:
		case 1485366395:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		
		case -969819655:
		case -628956517:
		case -355385988:
		case 300505615:
		case 466209020:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		
		case 363815774:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		
		case -1910990966:
		case -1421951598:
		case 1921874948:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		
		case -1090280091:
		case -1076294934:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		
		case -1011228908:
		case -1008616424:
		case 424175505:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		
		case -1208814201:
		case -390289284:
		case 1112571710:
		case 1478983280:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_630(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

int func_631(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;
	
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_677(uParam1, 128);
	if (func_678("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_679(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_529(Var4.f_4))
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
				if (((WEAPON::_0x0556E9D2ECF39D01(Var4.f_4) && (!WEAPON::_0xC75386174ECE95D5(Var4.f_4) || func_677(uParam1, 16))) && (!WEAPON::_0x6AD66548840472E5(Var4.f_4) || func_677(uParam1, 4))) && (!func_680(Var4.f_4) || func_677(uParam1, 8)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_681(iVar1);
	}
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	return iVar0;
}

struct<4> func_632(bool bParam0)
{
	int iVar0;
	
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_682(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1270479))
			{
				*Global_1270479 = { func_634(1328661203, func_488(), -1591664384, bParam0) };
			}
			return *Global_1270479;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1270479->f_12)))
			{
				Global_1270479->f_12 = { func_634(1328661203, func_488(), -1591664384, 0) };
			}
			return Global_1270479->f_12;
		}
	}
	return func_634(1328661203, func_488(), -1591664384, bParam0);
}

int func_633(int iParam0)
{
	vector3 vVar0;
	
	if (!func_510(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_634(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;
	
	if (!func_510(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_682(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_635(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_682(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1270479->f_4)))
		{
			Global_1270479->f_4 = { func_634(923904168, func_632(bParam0), -740156546, bParam0) };
		}
		return Global_1270479->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1270479->f_16)))
		{
			Global_1270479->f_16 = { func_634(923904168, func_632(bParam0), -740156546, 0) };
		}
		return Global_1270479->f_16;
	}
	return func_634(923904168, func_632(bParam0), -740156546, 0);
}

int func_636(int iParam0, bool bParam1)
{
	if (func_451(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_683();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_637(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_684(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

int func_638(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	
	if (func_685(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_639(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_682(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1270479->f_8)))
		{
			Global_1270479->f_8 = { func_634(271701509, func_632(bParam0), 12999093, 0) };
		}
		return Global_1270479->f_8;
	}
	return func_634(271701509, func_632(bParam0), 12999093, 0);
}

int func_640(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_451(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_686(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_641(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_687(&uParam0, uParam4, bParam5, bParam6, iParam7);
}

void func_642()
{
	int iVar0;
	
	Global_1951131->f_1538 = Global_1951131->f_1657;
	Global_1951131->f_1534 = Global_1951131->f_1536;
	Global_1951131->f_1534.f_1 = Global_1951131->f_1536.f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1951131->f_1538.f_1[iVar0 /*3*/]) = { *(Global_1951131->f_1657.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

void func_643(int iParam0)
{
	func_688(&(Global_1951131->f_2760), iParam0);
}

void func_644(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_645(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar2 = 0;
	iVar3 = iParam1;
	iVar4 = func_451(iVar3);
	iVar5 = 0;
	if (func_654() == 24043185)
	{
		iVar2 = 1;
	}
	if (bParam3)
	{
		iVar5 = 3;
	}
	switch (iVar4)
	{
		case 1297434125:
			if (iParam1 == &Global_1951131->f_81[iParam2 /*12*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
				{
					if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 0 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1155669136)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
					}
					else
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 1334603721;
					}
					func_599(iVar0, iVar5);
				}
				Jump @3216; //curOff = 253
				if (iParam1 == &Global_1951131->f_81[iParam2 /*12*/])
				{
				}
				else
				{
					iVar0 = 34;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 1155669136;
						func_599(iVar0, iVar5);
					}
					iVar0 = 36;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
						func_599(iVar0, iVar5);
					}
					iVar0 = 37;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && func_624(iVar3, -1278198125))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_599(iVar0, iVar5);
					}
					iVar0 = 18;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
					{
						iVar1 = &uParam0->f_1[iVar0 /*3*/];
						if (912453393 == func_451(iVar1) && (uParam0->f_1[iVar0 /*3*/])->f_1 != -2081918609)
						{
							(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							func_599(iVar0, iVar5);
						}
					}
					Jump @3216; //curOff = 543
					if (iParam1 == &Global_1951131->f_81[iParam2 /*12*/])
					{
					}
					else
					{
						iVar0 = 36;
						func_599(iVar0, iVar5);
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && func_624(iVar3, -1473580422))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (func_624(iVar1, 1469783911))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							}
							else if (func_689(&(uParam0->f_1[iVar0 /*3*/]), iVar2, -2081918609) != -1)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							}
							else
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 1155669136;
							}
						}
						iVar0 = 18;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && func_624(iVar3, 1583165364))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (func_451(iVar1) == 912453393)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
								func_599(iVar0, iVar5);
							}
						}
						iVar0 = 35;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && func_624(iVar3, -1650340550))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (func_451(iVar1) == 1769055947)
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_599(iVar0, iVar5);
							}
						}
						Jump @3216; //curOff = 918
						if (iParam1 == &Global_1951131->f_81[iParam2 /*12*/])
						{
						}
						else
						{
							iVar0 = 36;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && func_624(iVar3, 1718965018))
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 1155669136;
							}
							func_599(iVar0, iVar5);
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_599(iVar0, iVar5);
							}
							iVar0 = 20;
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if ((&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && func_624(iVar1, 1090938458)) && func_624(iVar3, 475297062))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_599(iVar0, iVar5);
							}
							Jump @3216; //curOff = 1171
							func_599(36, iVar5);
							iVar0 = 18;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_599(iVar0, iVar5);
							}
							iVar0 = 17;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_599(iVar0, iVar5);
							}
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && 1769055947 == func_451(&(uParam0->f_1[iVar0 /*3*/])))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_599(iVar0, iVar5);
							}
							iVar0 = 29;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_599(iVar0, iVar5);
							}
							Jump @3216; //curOff = 1454
							func_599(16, iVar5);
							if (func_590(iVar3, 0))
							{
							}
							else
							{
								iVar0 = 29;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && func_624(iVar3, 1126863852))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									func_599(iVar0, iVar5);
								}
								iVar0 = 16;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && func_624(iVar3, -985549034))
								{
									if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
									{
										(uParam0->f_1[iVar0 /*3*/])->f_1 = 1155669136;
									}
									else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
									{
										(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
									}
								}
								iVar0 = 12;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && func_624(iVar3, -1527414429))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									func_599(iVar0, iVar5);
								}
								Jump @3216; //curOff = 1747
								if (func_590(iVar3, 0))
								{
								}
								else
								{
									iVar0 = 12;
									if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && func_624(iVar3, -1527414429))
									{
										uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
										(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
										func_599(iVar0, iVar5);
									}
									iVar0 = 16;
									if (((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721) && func_624(iVar3, -985549034))
									{
										if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = 1155669136;
											func_599(iVar0, iVar5);
										}
										else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
											func_599(iVar0, iVar5);
										}
									}
									Jump @3216; //curOff = 1988
									if (func_590(iVar3, 0))
									{
									}
									else
									{
										iVar0 = 17;
										if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
										{
											uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
											(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
											func_599(iVar0, iVar5);
										}
										if ((uParam0->f_1[iParam2 /*3*/])->f_1 != -2081918609)
										{
											iVar0 = 34;
											iVar1 = &uParam0->f_1[iVar0 /*3*/];
											if (func_624(iVar1, 1583165364))
											{
												(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
												func_599(iParam2, iVar5);
											}
											else
											{
												iVar0 = 35;
												iVar1 = &uParam0->f_1[iVar0 /*3*/];
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && 1769055947 == func_451(iVar1))
												{
													(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
													func_599(iParam2, iVar5);
												}
											}
										}
										Jump @3216; //curOff = 2214
										if (func_590(iVar3, 0))
										{
										}
										else
										{
											iVar0 = 12;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_599(iVar0, iVar5);
											}
											iVar0 = 13;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_599(iVar0, iVar5);
											}
											iVar0 = 25;
											if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && func_624(iVar3, 675650051))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_599(iVar0, iVar5);
											}
											Jump @3216; //curOff = 2438
											if (iParam1 == &Global_1951131->f_81[iParam2 /*12*/])
											{
												iVar0 = 37;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_599(iVar0, iVar5);
												}
												iVar0 = 38;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_599(iVar0, iVar5);
												}
												iVar0 = 35;
												if (-923693316 == func_451(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_599(iVar0, iVar5);
												}
											}
											else
											{
												iVar0 = 35;
												iVar1 = &uParam0->f_1[iVar0 /*3*/];
												if ((func_624(iVar3, 813132419) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/]) && func_451(iVar1) == -923693316)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_599(iVar0, iVar5);
												}
												if ((func_624(iVar3, -1650340550) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/]) && func_451(iVar1) == 1769055947)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_599(iVar0, iVar5);
												}
												iVar0 = 37;
												if (func_624(iVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_599(iVar0, iVar5);
												}
											}
											Jump @3216; //curOff = 2921
											iVar0 = 37;
											if (func_624(iVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_599(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3003
											iVar0 = 10;
											if (-525676072 == func_451(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_599(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3067
											iVar0 = 12;
											if (81053684 == func_451(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_599(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3131
											if (!func_624(iVar3, -1348134986))
											{
											}
											else
											{
												iVar0 = 10;
												if (-525676072 == func_451(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_599(iVar0, iVar5);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			switch (func_596(iParam2, 1))
			{
				case -207860920:
					if (func_690(99217379) && func_624(iVar3, -1230785684))
					{
						iVar0 = 27;
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_599(iVar0, iVar5);
					}
					break;
				
				case 1742327865:
					iVar0 = 16;
					if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 1155669136;
						func_599(iVar0, iVar5);
					}
					else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
						func_599(iVar0, iVar5);
					}
					break;
				
				case 1250092473:
					iVar0 = 12;
					if (2056714954 == PED::_0x5FF9A878C3D115B8(&(uParam0->f_1[iVar0 /*3*/]), iVar2, 1))
					{
						if ((iParam1 == &Global_1951131->f_81[iParam2 /*12*/] || func_624(iVar3, 1872585553)) || iVar4 == 1882579758)
						{
							uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
							(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							func_599(iVar0, iVar5);
						}
					}
					iVar0 = 17;
					if (!func_590(&(uParam0->f_1[iVar0 /*3*/]), 0) && func_624(iVar3, 1467402774))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_599(iVar0, iVar5);
					}
					iVar0 = 29;
					if (!func_590(&(uParam0->f_1[iVar0 /*3*/]), 0) && func_624(iVar3, 1126863852))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_599(iVar0, iVar5);
					}
					break;
				
				case -1130352927:
					if (iParam1 == -230310728 || iParam1 == 1326838792)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = 289238755;
					}
					else if ((uParam0->f_1[iParam2 /*3*/])->f_1 == 289238755)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = 1155669136;
					}
					break;
				
				case 1367443060:
					if (iParam1 == 1733464892)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = 289238755;
					}
					else if ((uParam0->f_1[iParam2 /*3*/])->f_1 == 289238755)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = 1155669136;
					}
					break;
			}
		}

int func_646(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_654() == 24043185)
	{
		iVar0 = 1;
	}
	if (iParam2 == 289238755)
	{
		return 289238755;
	}
	if (iParam2 != 0 && func_689(iParam0, iVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_620(iParam0, func_596(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_647(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	
	if (*uParam0 <= 0)
	{
		return;
	}
	if (func_555(4718592))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_691(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (bParam4)
	{
		bVar1 = false;
		if (Global_1951131->f_1657 != 491602716 || !func_656(2, -1))
		{
			bVar1 = true;
		}
		else if (!func_624(Global_1951131->f_1657, -166674229) && (Global_1951131->f_1657 != 491602716 || !func_656(2, -1)))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			Global_1951131->f_1657 = 491602716;
			Global_1951131->f_1538 = 491602716;
			func_692(-1, 0, 6);
			func_532(27, 0, 0, 0, 0);
		}
	}
	if (bParam3)
	{
		func_693(0, 1);
	}
}

int func_648(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_694(&uParam0, iParam4, bParam5, iParam6);
}

int func_649(struct<4> Param0, int iParam4)
{
	struct<11> Var0;
	
	if (!func_674(0))
	{
		return func_695(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_641(Param0, &Var0, 0, 0, -1))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_682(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

bool func_650(int iParam0)
{
	return &Global_1951131->f_593[iParam0] > 0;
}

void func_651(int iParam0)
{
	Global_1951131->f_593[iParam0] = &Global_1951131->f_593[iParam0] + 1;
}

void func_652(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_696(uParam0, 1))
	{
		func_697(uParam0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_2[iVar0 /*2*/] == iParam1)
		{
			(uParam0->f_2[iVar0 /*2*/])->f_1 = uParam2;
			return;
		}
		if ((Global_1951131->f_81[&uParam0->f_2[iVar0 /*2*/] /*12*/])->f_2 > (Global_1951131->f_81[iParam1 /*12*/])->f_2)
		{
			iVar1 = *uParam0;
			while (iVar1 >= iVar0 + 1)
			{
				*(uParam0->f_2[iVar1 /*2*/]) = { *(uParam0->f_2[(iVar1 - 1) /*2*/]) };
				iVar1 = (iVar1 + -1);
			}
			uParam0->f_2[iVar0 /*2*/] = iParam1;
			(uParam0->f_2[iVar0 /*2*/])->f_1 = uParam2;
			*uParam0++;
			return;
		}
		iVar0++;
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = uParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

int func_653(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	
	iVar2 = 0;
	Var3 = { func_698(0, -1591664384, iParam0, -1591664384, 0, 0, 0) };
	if (func_699(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_700(iVar0, iVar1);
		}
		func_681(iVar0);
	}
	return iVar2;
}

int func_654()
{
	return Global_1951131->f_1;
}

int func_655(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_701();
	}
	return (Global_17173.f_54.f_644.f_32[iParam0 /*120*/])->f_1;
}

int func_656(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17173.f_54.f_644.f_1776;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		return (Global_17173.f_54.f_644.f_32[iParam1 /*120*/] && iParam0) != 0;
	}
	return 0;
}

void func_657(var uParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = Global_17173.f_54.f_644.f_1776;
	}
	*uParam0 = (Global_17173.f_54.f_644.f_32[iParam1 /*120*/])->f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(uParam0->f_1[iVar0 /*3*/]) = { *((Global_17173.f_54.f_644.f_32[iParam1 /*120*/])->f_1.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

bool func_658(int iParam0, int iParam1)
{
	return ((Global_1951131->f_81[iParam0 /*12*/])->f_11 && iParam1) != 0;
}

void func_659(int iParam0, int iParam1, int iParam2)
{
	(Global_1951131->f_81[iParam0 /*12*/])->f_11 = ((Global_1951131->f_81[iParam0 /*12*/])->f_11 - ((Global_1951131->f_81[iParam0 /*12*/])->f_11 && iParam1));
}

int func_660(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<15> Var3;
	struct<18> Var21;
	
	if (func_702(&(Global_1951131->f_1055), 2))
	{
		return 0;
	}
	if (iParam1 == -2118203104)
	{
		iVar0 = func_703(iParam0);
	}
	else if (iParam1 == -1811760631)
	{
		iVar0 = func_704(iParam0);
	}
	else
	{
		return 0;
	}
	iVar1 = func_705(uParam3, iParam1);
	bVar2 = func_706(iVar0) != false;
	if (iVar1 == -1 && bVar2)
	{
		return 0;
	}
	if (bVar2)
	{
		if (bParam4)
		{
			func_707(uParam2, uParam3, iParam1);
		}
		else
		{
			func_708(uParam2, uParam3, iVar1);
		}
		return 1;
	}
	if (bParam4)
	{
		Var3.f_2 = -1;
		Var3.f_13 = 1065353216;
		Var3.f_14 = 1065353216;
		if (!func_709(&Var3, iVar0, 0, 1, 6))
		{
			return 0;
		}
		if (iVar1 != -1 && Var3.f_3 == ((*uParam3)[iVar1 /*18*/])->f_3)
		{
			return 0;
		}
		func_710(uParam2, uParam3, &Var3);
	}
	else if (iVar1 == -1)
	{
		func_711(uParam2, uParam3, iVar0, 0, 1);
	}
	else
	{
		Var21.f_2 = -1;
		Var21.f_13 = 1065353216;
		Var21.f_14 = 1065353216;
		if (!func_709(&Var21, iVar0, 0, 1, 6))
		{
			return 0;
		}
		*((*uParam3)[iVar1 /*18*/]) = { Var21 };
	}
	return 1;
}

void func_661()
{
	Global_1951131->f_1054 = 0;
}

bool func_662(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

Vector3 func_663(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17173.f_54.f_644.f_1776;
	}
	return *((Global_17173.f_54.f_644.f_32[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
}

void func_664(int iParam0, int iParam1, int iParam2)
{
	(Global_1951131->f_81[iParam0 /*12*/])->f_11 = ((Global_1951131->f_81[iParam0 /*12*/])->f_11 || iParam1);
}

void func_665(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = uParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

int func_666(int iParam0)
{
	return iParam0;
}

int func_667(int iParam0, int iParam1)
{
	if (!func_712(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_668(var uParam0)
{
	int iVar0;
	
	Global_1951131->f_2706.f_43[Global_1951131->f_2706.f_1 /*2*/] = uParam0;
	iVar0 = Global_1951131->f_2706.f_2 ^ -1;
	iVar0 = (iVar0 && -iVar0);
	Global_1951131->f_2706.f_2 = (Global_1951131->f_2706.f_2 || iVar0);
	(Global_1951131->f_2706.f_43[Global_1951131->f_2706.f_1 /*2*/])->f_1 = iVar0;
	Global_1951131->f_2706.f_1++;
	return iVar0;
}

int func_669(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == -696754231)
	{
		iVar0 = 1742327865;
		if (func_451(func_713(iVar0)) != 81053684 && !func_624(func_713(iVar0), -1348134986))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	*iParam1 = func_587(iVar0, 1);
	return 1;
}

void func_670(int iParam0, var uParam1)
{
	Global_1951131->f_2706.f_3[iParam0] = (Global_1951131->f_2706.f_3[iParam0] || uParam1);
}

bool func_671(int iParam0)
{
	return func_104(&(Global_1954462->f_1465), iParam0, 1);
}

int func_672(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_673(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	struct<13> Var15;
	struct<16> Var31;
	
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_714(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_641(*uParam1, &Var0, bParam6, 0, -1))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_674(bParam6))
	{
		iVar14 = -1;
		if (func_30() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_715(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_716(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_682(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_674(bool bParam0)
{
	if (func_30() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_682(bParam0));
}

int func_675(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_717(iParam0))
	{
		return 0;
	}
	if (!func_674(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_676(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar2 = func_718(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_35, &iVar1, iParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_35, iParam0, iVar1);
		}
	}
}

bool func_677(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_678(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_682(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_679(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_680(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

int func_681(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_682(bool bParam0)
{
	if (func_30() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

bool func_683()
{
	return (func_719(-1185145312, 0, 0, 0) > 0 && func_648(func_634(889965687, func_632(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_684(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;
	
	if (!func_510(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_720(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_634(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_682(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_682(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_685(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_682(0);
	*uParam1 = { func_634(iParam0, func_635(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_686(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (UNK_0xAA29A5F13B2C20B2(iParam1, -455129387) == -1925887917)
		{
			return 0;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iParam2);
}

int func_687(var uParam0, var uParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_682(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, uParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

void func_688(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	
	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_721(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_721(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_600(uParam0->f_2[iVar0 /*2*/], 2, 6);
				}
				*(Var4[iVar1 /*2*/]) = { *(uParam0->f_2[iVar0 /*2*/]) };
				iVar1++;
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { *(Var4[iVar0 /*2*/]) };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}

int func_689(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(uParam0, iParam1, 1))
	{
		if (PED::_0x6243635AF2F1B826(uParam0, iVar0, iParam1, 1) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_690(int iParam0)
{
	return &Global_1951131->f_1657.f_1[func_587(iParam0, 1) /*3*/] != &Global_1951131->f_81[func_587(iParam0, 1) /*12*/];
}

void func_691(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1951131->f_1657.f_1[iParam0 /*3*/]) = { *(Global_1951131->f_1538.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	func_722(Global_1951131->f_1657.f_1[iParam0 /*3*/], iParam0, Global_17173.f_54.f_644.f_1776);
}

void func_692(int iParam0, bool bParam1, int iParam2)
{
	func_723(&(Global_1951131->f_1538), iParam0);
	func_724(2, iParam0, 6);
	if (bParam1)
	{
		func_693(0, 1);
	}
}

void func_693(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_661();
	}
	if (bParam0)
	{
		func_557(8);
		func_557(512);
	}
	else
	{
		func_557(8);
		func_557(16);
	}
}

int func_694(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;
	
	Var0.f_9 = -1591664384;
	if (func_725(uParam0, uParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_695(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<28> Var16;
	struct<25> Var44;
	struct<17> Var69;
	struct<16> Var86;
	
	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_641(Param0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_633(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_726(Param0, 1, 0) };
		Var16.f_10 = iParam4;
		iVar0 = func_727(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("coach"))
	{
		Var44 = { func_728(Param0, 1, 0) };
		Var44.f_10 = iParam4;
		iVar0 = func_729(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var69 = { func_730(Param0, 1, 0) };
		Var69.f_10 = iParam4;
		iVar0 = func_731(-1230526146, &Var69, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_732(&Var1, 0) };
		Var86.f_10 = iParam4;
		iVar0 = func_715(-1230526146, &Var86, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_696(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_697(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

struct<14> func_698(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<14> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

int func_699(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_682(bParam3), uParam0, iParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_700(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	int iVar15;
	
	Var1.f_9 = -1591664384;
	iVar15 = 0;
	if (func_654() == 24043185)
	{
		iVar15 = 1;
	}
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (!func_679(&Var1, iVar0, iParam0, iParam1))
		{
		}
		else if (PED::_0x5FF9A878C3D115B8(Var1.f_4, iVar15, 1) == 0)
		{
			if ((Var1.f_4 != 1733464892 && Var1.f_4 != 1326838792) && Var1.f_4 != -230310728)
			{
			}
			else if (func_621(Var1.f_4) != 0)
			{
			}
			else if (func_624(Var1.f_4, -166674229))
			{
			}
			else
			{
				return Var1.f_4;
			}
			iVar0++;
			return 0;
		}
	}

int func_701()
{
	return Global_17173.f_54.f_644.f_1776;
}

bool func_702(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

int func_703(int iParam0)
{
	if (iParam0 == 1733464892)
	{
		return -236468550;
	}
	return -28107610;
}

int func_704(int iParam0)
{
	if (iParam0 == -230310728 || iParam0 == 1326838792)
	{
		return -1551826771;
	}
	switch (iParam0)
	{
		case -157559400:
			return -25348444;
		
		case 465258498:
			return -25348444;
		
		case -533110106:
			return -25348444;
		
		case -393465732:
			return -25348444;
		
		case 74351192:
			return -25348444;
		
		case 116074515:
			return -25348444;
		
		case 1618144916:
			return -25348444;
		
		case 1785263689:
			return -25348444;
		
		case -906745111:
			return -25348444;
		
		case 373001057:
			return -25348444;
		
		case -1414997496:
			return -25348444;
		
		case -1466370865:
			return -25348444;
		
		case -428747163:
			return -25348444;
		
		case 539445454:
			return -25348444;
		
		case 1893781991:
			return -25348444;
		
		case -156560189:
			return -25348444;
		
		case -1337137168:
			return -25348444;
		
		case 1529984470:
			return 129780002;
		
		case 163973342:
			return 129780002;
		
		case 1242718228:
			return 129780002;
		
		case 471104751:
			return 129780002;
		
		case 2093241299:
			return 129780002;
		
		case 1900264118:
			return 129780002;
		
		case 1226668975:
			return 129780002;
		
		case -1054967705:
			return 129780002;
		
		case 664756881:
			return 129780002;
		
		case -1196414963:
			return 129780002;
		
		case -549784028:
			return 129780002;
		
		case -1114404061:
			return 129780002;
		
		case 1998608299:
			return 129780002;
		
		case -1905369120:
			return 129780002;
		
		case -2125350662:
			return 129780002;
		
		case 1734235879:
			return 129780002;
		
		case 675995216:
			return 129780002;
		
		case -1713496139:
			return 1687431937;
		
		default:
			break;
	}
	return 1661173679;
	return 1687431937;
}

int func_705(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (((*uParam0)[iVar0 /*18*/])->f_1 == -1 || ((*uParam0)[iVar0 /*18*/])->f_17 == 0)
		{
		}
		else
		{
			if (((*uParam0)[iVar0 /*18*/])->f_17 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_706(int iParam0)
{
	switch (iParam0)
	{
		case -577270367:
			return 241235545;
		
		case 194818087:
			return 1827902148;
		
		case -845885815:
			return 1301555144;
		
		case -1869018428:
			return -2056583192;
		
		case 1710247623:
			return 1015239729;
		
		case 1964684696:
			return -340627321;
		
		case -2087489409:
			return -875805376;
		
		case -860557048:
			return -768760704;
		
		case -28107610:
			return -2118203104;
		
		case -896045342:
			return 1285634184;
		
		case -643819742:
			return -559080197;
		
		case -1504407916:
			return -1180698265;
		
		case -1386156083:
			return -487028314;
		
		case 1687431937:
			return -1811760631;
		
		case 1613216286:
			return 1858448324;
		
		default:
			break;
	}
	return 0;
}

int func_707(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_705(uParam1, iParam2);
	if (iVar0 == -1)
	{
		return 0;
	}
	PED::_0x96C349DE04C49011(*uParam0, ((*uParam1)[iVar0 /*18*/])->f_2);
	func_708(uParam0, uParam1, iVar0);
	return 1;
}

void func_708(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam0->f_6 = (uParam0->f_6 - 1);
	iVar0 = iParam2;
	while (iVar0 <= uParam0->f_6)
	{
		if (iVar0 + 1 >= 22)
		{
		}
		else
		{
			*((*uParam1)[iVar0 /*18*/]) = { *((*uParam1)[iVar0 + 1 /*18*/]) };
			((*uParam1)[iVar0 /*18*/])->f_2 = (((*uParam1)[iVar0 /*18*/])->f_2 - 1);
			iVar0++;
		}
	}
}

int func_709(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	struct<5> Var0;
	
	Var0 = 660625468;
	Var0.f_1 = -756385367;
	Var0.f_2 = 459292749;
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (!func_733(&Var0, uParam0, 0, bParam2, iParam3, iParam4))
	{
		return 0;
	}
	*uParam0 = iParam1;
	return 1;
}

void func_710(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if ((!func_702(uParam0, 1) || func_702(uParam0, 2)) || uParam0->f_6 < 0)
	{
		return;
	}
	if (uParam2->f_17 == -1177453988)
	{
		if (uParam2->f_3 == 0)
		{
			uParam2->f_3 = uParam0->f_2;
		}
		if (uParam2->f_4 == 0)
		{
			uParam2->f_4 = uParam0->f_3;
		}
		if (uParam2->f_5 == 0)
		{
			uParam2->f_5 = uParam0->f_4;
		}
		func_734(uParam0, uParam2->f_3, uParam2->f_4, uParam2->f_5);
	}
	else
	{
		iVar0 = func_705(uParam1, uParam2->f_17);
		if (iVar0 <= -1)
		{
			if (uParam0->f_6 >= 22)
			{
				return;
			}
			*((*uParam1)[uParam0->f_6 /*18*/]) = { *uParam2 };
			uParam0->f_6++;
			func_735(uParam0, uParam1, (uParam0->f_6 - 1));
		}
		else
		{
			uParam2->f_2 = ((*uParam1)[iVar0 /*18*/])->f_2;
			*((*uParam1)[iVar0 /*18*/]) = { *uParam2 };
			func_736(uParam0, (*uParam1)[iVar0 /*18*/], 1);
		}
	}
}

int func_711(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	struct<18> Var0;
	int iVar18;
	struct<18> Var19;
	
	Var0.f_2 = -1;
	Var0.f_13 = 1065353216;
	Var0.f_14 = 1065353216;
	if (!func_709(&Var0, iParam2, bParam3, iParam4, 6))
	{
		return 0;
	}
	if (uParam0->f_6 >= 22)
	{
		return 0;
	}
	*((*uParam1)[uParam0->f_6 /*18*/]) = { Var0 };
	uParam0->f_6++;
	Var19.f_2 = -1;
	Var19.f_13 = 1065353216;
	Var19.f_14 = 1065353216;
	iVar18 = (uParam0->f_6 - 1);
	while (iVar18 >= 1)
	{
		if (((*uParam1)[iVar18 /*18*/])->f_1 < ((*uParam1)[(iVar18 - 1) /*18*/])->f_1)
		{
			Var19 = { *((*uParam1)[iVar18 /*18*/]) };
			*((*uParam1)[iVar18 /*18*/]) = { *((*uParam1)[(iVar18 - 1) /*18*/]) };
			*((*uParam1)[(iVar18 - 1) /*18*/]) = { Var19 };
		}
	else
	{
		}
		else
		{
			iVar18 = (iVar18 + -1);
		}
	}
	return 1;
}

int func_712(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

int func_713(int iParam0)
{
	return &(Global_1951131->f_1657.f_1[func_587(iParam0, 1) /*3*/]);
}

int func_714(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_715(int iParam0, var* uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_737(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_738(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16), iVar0, uParam1);
		}
	}
	else
	{
		return func_739(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_716(int iParam0, struct<16> Param1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1270479->f_20)
	{
		if (&Global_1270479->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1270479->f_20.f_1[iVar0 /*20*/])->f_1 == 1 || (Global_1270479->f_20.f_1[iVar0 /*20*/])->f_1 == 5)
			{
				(Global_1270479->f_20.f_1[iVar0 /*20*/])->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

bool func_717(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_718(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_719(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_717(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_682(bParam1), iParam0, iParam3);
}

int func_720(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

bool func_721(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_722(var uParam0, int iParam1, int iParam2)
{
	*((Global_17173.f_54.f_644.f_32[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
}

void func_723(var uParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = Global_17173.f_54.f_644.f_1776;
	}
	(Global_17173.f_54.f_644.f_32[iParam1 /*120*/])->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_722(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_724(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17173.f_54.f_644.f_1776;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		Global_17173.f_54.f_644.f_32[iParam1 /*120*/] = (Global_17173.f_54.f_644.f_32[iParam1 /*120*/] || iParam0);
	}
}

int func_725(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4)
{
	var uVar0;
	
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_682(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, uParam1, &uVar0))
	{
		return 0;
	}
	if (!func_687(&uVar0, uParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

struct<28> func_726(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<28> Var0;
	struct<29> Var28;
	
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_682(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_732(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_727(int iParam0, var* uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_737(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_738(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 28), iVar0, uParam1);
		}
	}
	else
	{
		return func_739(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_728(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<25> Var0;
	struct<24> Var25;
	
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_682(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_732(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_729(int iParam0, var* uParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_738(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 25), iVar0, uParam1);
		}
	}
	else
	{
		return func_739(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_730(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<17> Var0;
	struct<15> Var17;
	
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_682(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_732(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_731(int iParam0, var* uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_737(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_738(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 17), iVar0, uParam1);
		}
	}
	else
	{
		return func_739(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_732(var uParam0, bool bParam1)
{
	struct<16> Var0;
	
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_720(uParam0->f_4, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_488() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_733(var uParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, var uParam5)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (DATAFILE::_0x44B3A36933AC009C(&uVar2, uParam0, -480981886))
	{
		uParam1->f_17 = uVar2;
	}
	else if (!bParam2)
	{
		return 0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, -925732223))
	{
		uParam1->f_3 = iVar0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, 1330140418))
	{
		uParam1->f_4 = iVar0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, 2055530431))
	{
		uParam1->f_5 = iVar0;
	}
	if (DATAFILE::_0xB2B42607F7867576(&uVar4, uParam0, 2018964076))
	{
		uParam1->f_13 = uVar4;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, 723829617))
	{
		uParam1->f_16 = func_740(iVar0);
	}
	if (DATAFILE::_0xB2B42607F7867576(&uVar4, uParam0, 1802626656))
	{
		uParam1->f_15 = uVar4;
	}
	if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, 939944711))
	{
		uParam1->f_6 = uVar3;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, 917806888))
	{
		uParam1->f_7 = iVar0;
		if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, 1922465595))
		{
			uParam1->f_8 = uVar3;
		}
		if (DATAFILE::_0xB2B42607F7867576(&uVar4, uParam0, -1979206779))
		{
			uParam1->f_14 = uVar4;
		}
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, 333547134))
	{
		uParam1->f_9 = iVar0;
		if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, 1223307134))
		{
			uParam1->f_10 = uVar3;
		}
		if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, 915180227))
		{
			uParam1->f_11 = uVar3;
		}
		if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, -1231156504))
		{
			uParam1->f_12 = uVar3;
		}
	}
	uParam0->f_1 = 1777366913;
	uParam0->f_2 = 459292749;
	uParam0->f_3 = 1;
	uParam0->f_4 = uVar2;
	DATAFILE::_0x91DED5DD64BB2691(uParam0);
	if (DATAFILE::_0x52FC26D2D2FC2987(&uVar1, uParam0, -1118674339))
	{
		uParam1->f_1 = uVar1;
	}
	if (bParam3)
	{
		func_741(uParam1, uParam4);
	}
	return 1;
}

void func_734(var uParam0, var uParam1, var uParam2, var uParam3)
{
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	uParam0->f_4 = uParam3;
	PED::_0x253A63B5BADBC398(*uParam0, 0, uParam0->f_2, uParam0->f_3, uParam0->f_4);
}

void func_735(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 > 0 && ((*uParam1)[(iParam2 - 1) /*18*/])->f_1 > ((*uParam1)[iParam2 /*18*/])->f_1)
	{
		func_742(uParam0, uParam1);
	}
	else
	{
		func_743(uParam0, (*uParam1)[iParam2 /*18*/]);
	}
}

void func_736(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		PED::_0x253A63B5BADBC398(*uParam0, uParam1->f_2, uParam1->f_3, uParam1->f_4, uParam1->f_5);
	}
	if (uParam1->f_9 != 0)
	{
		PED::_0x1ED8588524AC9BE1(*uParam0, uParam1->f_2, uParam1->f_9);
		PED::_0x2DF59FFE6FFD6044(*uParam0, uParam1->f_2, uParam1->f_10, uParam1->f_11, uParam1->f_12);
	}
	if (uParam1->f_7 != 0)
	{
		PED::_0xF2EA041F1146D75B(*uParam0, uParam1->f_2, uParam1->f_7, uParam1->f_14, uParam1->f_8);
	}
	if (uParam1->f_15 > 0f)
	{
		PED::_0x057C4F092E2298BE(*uParam0, uParam1->f_2, uParam1->f_15);
	}
	PED::_0x3329AAE2882FC8E4(*uParam0, uParam1->f_2, uParam1->f_6);
	PED::_0x6C76BC24F8BB709A(*uParam0, uParam1->f_2, uParam1->f_13);
}

int func_737(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if (func_566(iVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_566(iVar0, 8))
	{
		return 0;
	}
	else if (func_566(iVar0, 16))
	{
		return 0;
	}
	else if (func_566(iVar0, 65536))
	{
		return 0;
	}
	return 1;
}

int func_738(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_744(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_744(iParam1, 2, 0, 0);
	return -1;
}

int func_739(bool bParam0, int iParam1, var* uParam2)
{
	if (bParam0)
	{
		func_744(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_740(int iParam0)
{
	switch (iParam0)
	{
		case 377740851:
			return 0;
		
		case -897347426:
			return 1;
		
		case -409773112:
			return 2;
		
		default:
			break;
	}
	return 0;
}

void func_741(var uParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	int iVar18;
	struct<4> Var19;
	
	Var1.f_9 = 1;
	Var1.f_11 = -1591664384;
	iVar0 = func_745(uParam0->f_17);
	if (iVar0 == 0)
	{
		return;
	}
	iVar18 = *uParam0;
	Var19 = { func_634(889965687, func_632(1), 1034665895, 1) };
	if (uParam1 && iVar18 != func_648(Var19, iVar0, 1, -1))
	{
		return;
	}
	Var1 = { func_730(func_634(iVar18, Var19, iVar0, 1), 1, 0) };
	if (Var1.f_16 <= 0)
	{
		return;
	}
	uParam0->f_13 = func_746(Var1.f_16);
}

void func_742(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<18> Var2;
	
	iVar1 = (uParam0->f_6 - 1);
	Var2.f_2 = -1;
	Var2.f_13 = 1065353216;
	Var2.f_14 = 1065353216;
	iVar0 = (uParam0->f_6 - 1);
	while (iVar0 >= 1)
	{
		if (((*uParam1)[iVar0 /*18*/])->f_1 < ((*uParam1)[(iVar0 - 1) /*18*/])->f_1)
		{
			PED::_0x96C349DE04C49011(*uParam0, ((*uParam1)[(iVar0 - 1) /*18*/])->f_2);
			Var2 = { *((*uParam1)[iVar0 /*18*/]) };
			*((*uParam1)[iVar0 /*18*/]) = { *((*uParam1)[(iVar0 - 1) /*18*/]) };
			*((*uParam1)[(iVar0 - 1) /*18*/]) = { Var2 };
			iVar1 = (iVar0 - 1);
		}
	else
	{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	iVar0 = iVar1;
	while (iVar0 <= (uParam0->f_6 - 1))
	{
		func_743(uParam0, (*uParam1)[iVar0 /*18*/]);
		iVar0++;
	}
}

void func_743(var uParam0, var uParam1)
{
	uParam1->f_2 = PED::_0x86BB5FF45F193A02(*uParam0, uParam1->f_3, uParam1->f_4, uParam1->f_5, uParam1->f_16, uParam1->f_13, uParam1->f_6);
	func_736(uParam0, uParam1, 0);
}

void func_744(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1270479->f_20)
	{
		if (&Global_1270479->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1270479->f_20.f_1[iVar0 /*20*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1270479->f_20.f_1[iVar0 /*20*/])->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				(Global_1270479->f_20.f_1[iVar0 /*20*/])->f_2 = iParam2;
				(Global_1270479->f_20.f_1[iVar0 /*20*/])->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_747(iParam0, iParam1, iParam2, iParam3);
}

int func_745(int iParam0)
{
	switch (iParam0)
	{
		case 12857284:
			return -1990383629;
		
		case 299749022:
			return -101524555;
		
		case -1180698265:
			return -1915385310;
		
		case -487028314:
			return 1315162488;
		
		case 241235545:
			return 727393558;
		
		case 1827902148:
			return -1228057307;
		
		case 1301555144:
			return 1712094016;
		
		case -2056583192:
			return -1248299493;
		
		case 1015239729:
			return -451359317;
		
		case -340627321:
			return -2041626192;
		
		case -875805376:
			return -1371514637;
		
		case -768760704:
			return 1547608292;
		
		case 1089431066:
			return -361152079;
		
		case -2118203104:
			return -1994943603;
		
		case 1285634184:
			return 1011151573;
		
		case -559080197:
			return 892816668;
		
		case -1811760631:
			return -246340825;
		
		case 1858448324:
			return -1839865333;
		
		default:
			break;
	}
	return 0;
}

float func_746(int iParam0)
{
	return (BUILTIN::TO_FLOAT(iParam0) / 10000f);
}

void func_747(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<20> Var1;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1270479->f_20 < 20)
	{
		Global_1270479->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1270479->f_20.f_1[iVar0 /*20*/]) = { *(Global_1270479->f_20.f_1[iVar0 + 1 /*20*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1.f_4.f_7 = -142743235;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Var1.f_2 = iParam2;
		Var1.f_3 = iParam3;
	}
	*(Global_1270479->f_20.f_1[(Global_1270479->f_20 - 1) /*20*/]) = { Var1 };
}


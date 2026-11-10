/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01465780; name: FUN_01465780
 */


void FUN_01465780(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  undefined8 local_28;
  
  lVar2 = FUN_01467f18(*(undefined8 *)(param_1 + 0x4c8),"ItemChangeView");
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x750) == 0) {
      FUN_00d7331c(lVar2,1);
      FUN_00d7331c(lVar2,5);
      *(undefined4 *)(lVar2 + 0x750) = 2;
    }
    lVar2 = FUN_0146819c();
    if (lVar2 != 0) {
      FUN_00d42690(lVar2,0,1);
    }
    lVar2 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
    if (lVar2 != 0) {
      FUN_0148cc94(lVar2,3);
      if (*(char *)(lVar2 + 0x1200) == '\0') {
        *(char *)(lVar2 + 0x1200) = '\x01';
      }
      *(undefined2 *)(param_1 + 0x6a0) = 0;
      bVar1 = FUN_0195323c(1);
      *(byte *)(param_1 + 0x6a3) = bVar1 & 1;
      lVar2 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
      if (lVar2 != 0) {
        lVar2 = *(long *)(lVar2 + 0x3f50);
        if (*(char *)(lVar2 + 0x40) != '\0') {
          *(undefined1 *)(lVar2 + 0x40) = 0;
          local_50 = DAT_042116c8;
          pcStack_48 = PTR_s_anime_L_ns_time_00_wake_042116d0;
          local_40 = DAT_042116d8;
          local_38 = (long *)0x0;
          FUN_0146119c(lVar2,&local_50);
          if (local_38 != (long *)0x0) {
            (**(code **)(*local_38 + 0x20))();
          }
          local_50 = DAT_042116b0;
          pcStack_48 = PTR_s_anime_L_ns_time_00_close_042116b8;
          local_40 = DAT_042116c0;
          local_38 = (long *)0x0;
          lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + 0x148);
          if (lVar2 != 0) {
            FUN_0283b1e8(lVar2,&local_50);
          }
        }
        FUN_014673e0();
        lVar2 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
        if (lVar2 != 0) {
          FUN_0148fa5c();
          FUN_01491734(lVar2 + 0x2810);
          FUN_0148cc94(lVar2,0);
          FUN_0148cc94(lVar2,1);
          FUN_0148cc94(lVar2,2);
          if (*(char *)(lVar2 + 0x7b0) == '\0') {
            *(undefined1 *)(lVar2 + 0x7b0) = 1;
          }
          if (*(char *)(lVar2 + 0xb20) == '\0') {
            *(undefined1 *)(lVar2 + 0xb20) = 1;
          }
          if (*(char *)(lVar2 + 0xe90) == '\0') {
            *(undefined1 *)(lVar2 + 0xe90) = 1;
          }
          local_50 = 0x9104efa44142b95e;
          pcStack_48 = "GuideView";
          local_40 = 9;
          local_38 = (long *)0x0;
          lVar2 = FUN_0147071c(*(undefined8 *)(param_1 + 0x4c8),&local_50);
          if (local_38 != (long *)0x0) {
            (**(code **)(*local_38 + 0x20))();
          }
          if (lVar2 != 0) {
            FUN_014757a4(lVar2);
            local_50 = 0x6bcce3c5c48c59a;
            pcStack_48 = "NotifyView_0";
            local_40 = 0xc;
            local_38 = (long *)0x0;
            lVar2 = FUN_014703a4(*(undefined8 *)(param_1 + 0x4c8),&local_50);
            if (local_38 != (long *)0x0) {
              (**(code **)(*local_38 + 0x20))();
            }
            if (lVar2 != 0) {
              if (*(long *)(lVar2 + 0x668) != 0) {
                FUN_0147b82c(lVar2);
              }
              local_28 = 0;
              local_50 = 0x75e8a7ee10d4a80;
              pcStack_48 = "PokedexView";
              local_40 = 0xb;
              local_38 = (long *)0x0;
              lVar2 = FUN_01470c50(*(undefined8 *)(param_1 + 0x4c8),&local_50);
              if (local_38 != (long *)0x0) {
                (**(code **)(*local_38 + 0x20))();
              }
              if (lVar2 != 0) {
                FUN_01480448(lVar2,&local_28);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}



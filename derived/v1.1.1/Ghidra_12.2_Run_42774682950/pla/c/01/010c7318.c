/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c7318; name: FUN_010c7318
 */


void FUN_010c7318(undefined8 param_1,ulong param_2,long *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  uVar2 = param_2;
  if ((DAT_043ba580 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_043ba580);
    uVar2 = param_2 & 0xffffffff;
    if (iVar1 != 0) {
      FUN_00947cf8(&DAT_043ba510,"ha_area00");
      DAT_043ba518 = 0x2fa8e96b046ad519;
      FUN_00947cf8(&DAT_043ba520,"ha_area01");
      DAT_043ba528 = 0x2fa8e86b046ad366;
      FUN_00947cf8(&DAT_043ba530,"ha_area02");
      DAT_043ba538 = 0x2fa8e76b046ad1b3;
      FUN_00947cf8(&DAT_043ba540,"ha_area03");
      DAT_043ba548 = 0x2fa8e66b046ad000;
      FUN_00947cf8(&DAT_043ba550,"ha_area04");
      DAT_043ba558 = 0x2fa8ed6b046adbe5;
      FUN_00947cf8(&DAT_043ba560,"ha_area05");
      DAT_043ba568 = 0x2fa8ec6b046ada32;
      FUN_00947cf8(&DAT_043ba570,"ha_area06");
      DAT_043ba578 = 0x2fa8eb6b046ad87f;
      FUN_00100250(&LAB_010c7640,0,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043ba580);
      uVar2 = param_2 & 0xffffffff;
    }
  }
  plVar5 = (long *)PTR_DAT_04379c88;
  if (*param_3 != 0) {
    plVar5 = (long *)(*param_3 + 0x58);
  }
  lVar4 = *plVar5;
  plVar5 = (long *)PTR_DAT_04379c88;
  if (DAT_043ba510 != 0) {
    plVar5 = (long *)(DAT_043ba510 + 0x58);
  }
  if (lVar4 == *plVar5) {
    lVar4 = 0;
  }
  else {
    plVar5 = (long *)PTR_DAT_04379c88;
    if (DAT_043ba520 != 0) {
      plVar5 = (long *)(DAT_043ba520 + 0x58);
    }
    if (lVar4 == *plVar5) {
      lVar4 = 1;
    }
    else {
      plVar5 = (long *)PTR_DAT_04379c88;
      if (DAT_043ba530 != 0) {
        plVar5 = (long *)(DAT_043ba530 + 0x58);
      }
      if (lVar4 == *plVar5) {
        lVar4 = 2;
      }
      else {
        if (DAT_043ba540 == 0) {
          plVar5 = (long *)PTR_DAT_04379c88;
        }
        else {
          plVar5 = (long *)(DAT_043ba540 + 0x58);
        }
        if (lVar4 == *plVar5) {
          lVar4 = 3;
        }
        else {
          if (DAT_043ba550 == 0) {
            plVar5 = (long *)PTR_DAT_04379c88;
          }
          else {
            plVar5 = (long *)(DAT_043ba550 + 0x58);
          }
          if (lVar4 == *plVar5) {
            lVar4 = 4;
          }
          else {
            if (DAT_043ba560 == 0) {
              plVar5 = (long *)PTR_DAT_04379c88;
            }
            else {
              plVar5 = (long *)(DAT_043ba560 + 0x58);
            }
            if (lVar4 == *plVar5) {
              lVar4 = 5;
            }
            else {
              if (DAT_043ba570 == 0) {
                plVar5 = (long *)PTR_DAT_04379c88;
              }
              else {
                plVar5 = (long *)(DAT_043ba570 + 0x58);
              }
              if (lVar4 != *plVar5) {
                uVar3 = 0xfade0ba571fd5390;
                goto LAB_010c7464;
              }
              lVar4 = 6;
            }
          }
        }
      }
    }
  }
  uVar3 = (&DAT_043ba518)[lVar4 * 2];
LAB_010c7464:
  FUN_010c7198(param_1,uVar2,uVar3);
  return;
}



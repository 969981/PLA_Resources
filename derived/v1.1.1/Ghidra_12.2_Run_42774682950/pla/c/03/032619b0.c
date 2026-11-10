/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032619b0; name: FUN_032619b0
 */


void FUN_032619b0(uint param_1,uint param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [528];
  
  uVar7 = 0x10000 - (param_1 | 0x40004000);
  uVar1 = 0x10000 - (param_2 | 0x40004000);
  uVar7 = param_1 + 0x10001 >> 0xb & 8 | param_1 + 0x10001 >> 0x1c & 4 | uVar7 >> 0xd & 2 |
          uVar7 >> 0x1e & 1;
  uVar1 = param_2 + 0x10001 >> 0xb & 8 | param_2 + 0x10001 >> 0x1c & 4 | uVar1 >> 0xd & 2 |
          uVar1 >> 0x1e & 1;
  if ((uVar7 != 0 && uVar1 != 0) && (uVar1 & uVar7) < 9) {
    switch(uVar1 & uVar7) {
    case 0:
      break;
    default:
      if (param_2 <= param_1) {
        return;
      }
      break;
    case 2:
    case 4:
      if (param_1 <= param_2) {
        return;
      }
      break;
    case 3:
    case 5:
    case 6:
    case 7:
      goto switchD_03261a44_caseD_3;
    }
    do {
      uVar5 = uVar7 - 1;
      if ((uVar5 < 0xc) && ((0x9afU >> (ulong)(uVar5 & 0x1f) & 1) != 0)) {
        uVar6 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
        uVar4 = *(undefined4 *)(&BYTE_03aaa9cc + uVar6);
        uVar7 = *(uint *)(&DAT_03aaa9fc + uVar6);
        uVar5 = *(uint *)(&DAT_03aaaa2c + uVar6);
      }
      else {
        FUN_0331fefc(auStack_280,auStack_270,0x200);
        FUN_0332448c(auStack_280,"unexpected side mask");
        iVar3 = FUN_03320b30(0xfdb72ff4,auStack_270,
                             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Ai/Internal/FaceCutter/hkaiFaceCutterInput.cpp"
                             ,0x14a);
        if (iVar3 != 0) {
          CallSupervisor(0x26);
        }
        FUN_0331ff7c(auStack_280);
        uVar4 = 0;
        uVar5 = 0;
      }
      lVar2 = param_3[1];
      *(undefined4 *)(*param_3 + (long)(int)lVar2 * 4) = uVar4;
      *(int *)(param_3 + 1) = (int)lVar2 + 1;
    } while ((uVar5 & uVar1) == 0);
  }
switchD_03261a44_caseD_3:
  return;
}



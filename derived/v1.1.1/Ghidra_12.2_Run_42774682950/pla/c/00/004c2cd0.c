/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c2cd0; name: FUN_004c2cd0
 */


ulong FUN_004c2cd0(long param_1,undefined4 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  
  uVar7 = (uint)param_3;
  switch(param_2) {
  case 0x10:
    *(long **)(param_1 + 0xc0) = param_4;
    return 1;
  default:
                    /* WARNING: Could not recover jumptable at 0x004c2fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(*(long *)(param_1 + 8) + 0x80))(param_1);
    return uVar6;
  case 0x21:
    uVar7 = *(uint *)(param_1 + 0x5d0) | uVar7;
    *(uint *)(param_1 + 0x5d0) = uVar7;
    return (ulong)uVar7;
  case 0x28:
    return (long)*(int *)(param_1 + 0x800);
  case 0x29:
    iVar5 = *(int *)(param_1 + 0x800);
    *(uint *)(param_1 + 0x800) = uVar7;
    return (long)iVar5;
  case 0x32:
    return *(ulong *)(param_1 + 0x5e0);
  case 0x33:
    if (-1 < (long)param_3) {
      uVar6 = *(ulong *)(param_1 + 0x5e0);
      *(ulong *)(param_1 + 0x5e0) = param_3;
      return uVar6;
    }
    break;
  case 0x34:
    if (param_3 - 0x200 < 0x3e01) {
      *(ulong *)(param_1 + 0x5f8) = param_3;
      if (*(ulong *)(param_1 + 0x5f0) <= param_3) {
        return 1;
      }
LAB_004c2f74:
      *(ulong *)(param_1 + 0x5f0) = param_3;
      return 1;
    }
    break;
  case 0x4c:
    if (*(long *)(param_1 + 0xa8) != 0) {
      return (long)*(int *)(*(long *)(param_1 + 0xa8) + 0x3d8);
    }
    break;
  case 0x4e:
    uVar7 = *(uint *)(param_1 + 0x5d0) & ~uVar7;
    *(uint *)(param_1 + 0x5d0) = uVar7;
    return (ulong)uVar7;
  case 99:
    uVar7 = *(uint *)(*(long *)(param_1 + 0x488) + 0x1c) | uVar7;
    *(uint *)(*(long *)(param_1 + 0x488) + 0x1c) = uVar7;
    return (ulong)uVar7;
  case 100:
    uVar7 = *(uint *)(*(long *)(param_1 + 0x488) + 0x1c) & ~uVar7;
    *(uint *)(*(long *)(param_1 + 0x488) + 0x1c) = uVar7;
    return (ulong)uVar7;
  case 0x6e:
    if (param_4 == (long *)0x0) {
      return 2;
    }
    lVar8 = *(long *)(*(long *)(param_1 + 0xa8) + 0x2a8);
    if (lVar8 != 0) {
      *param_4 = lVar8;
      return (long)*(int *)(*(long *)(param_1 + 0xa8) + 0x2b0);
    }
    break;
  case 0x7a:
    if (((*(long *)(param_1 + 0x508) == 0) || (iVar5 = FUN_004c9920(param_1), iVar5 != 0)) ||
       (iVar5 = FUN_004c9a40(param_1), iVar5 != 0)) {
      return 0xffffffffffffffff;
    }
    return (ulong)*(uint *)(*(long *)(param_1 + 0x508) + 0x2a0) & 1;
  case 0x7b:
    uVar3 = *(uint *)(param_1 + 0x5d8);
    uVar1 = uVar7 & 0xffffff00;
    uVar2 = uVar3 & 0xffffff00;
    if ((((uVar3 == 0) || (uVar7 != 0x100 && uVar1 != 0xfe00)) || (uVar3 == 0x100)) ||
       (uVar2 == 0xfe00)) {
      if ((uVar7 == 0) || (uVar3 != 0x100 && uVar2 != 0xfe00 || (uVar7 == 0x100 || uVar1 == 0xfe00))
         ) {
        if ((uVar7 != 0x100 && uVar1 != 0xfe00) && (uVar3 != 0x100 && uVar2 != 0xfe00)) {
          if (((uVar7 != 0) && ((int)uVar7 < 0x300)) && (uVar3 == 0 || 0x2ff < (int)uVar3)) {
            return 0;
          }
        }
        uVar4 = *(undefined4 *)**(undefined8 **)(param_1 + 0x598);
        param_1 = param_1 + 0x5d4;
LAB_004c2f48:
        iVar5 = FUN_004dae60(uVar4,param_3 & 0xffffffff,param_1);
        return (ulong)(iVar5 != 0);
      }
    }
    break;
  case 0x7c:
    uVar3 = *(uint *)(param_1 + 0x5d4);
    uVar1 = uVar3 & 0xffffff00;
    uVar2 = uVar7 & 0xffffff00;
    if ((((uVar7 == 0) || (uVar3 != 0x100 && uVar1 != 0xfe00)) || (uVar7 == 0x100)) ||
       (uVar2 == 0xfe00)) {
      if (((uVar3 == 0) ||
          (uVar7 != 0x100 && uVar2 != 0xfe00 || (uVar3 == 0x100 || uVar1 == 0xfe00))) &&
         ((((uVar7 == 0x100 || uVar2 == 0xfe00) || (uVar3 == 0x100 || uVar1 == 0xfe00) ||
           ((uVar7 != 0 && (int)uVar7 < 0x300 || (uVar3 == 0)))) || (0x2ff < (int)uVar3)))) {
        uVar4 = *(undefined4 *)**(undefined8 **)(param_1 + 0x598);
        param_1 = param_1 + 0x5d8;
        goto LAB_004c2f48;
      }
    }
    break;
  case 0x7d:
    if (param_3 - 1 < *(ulong *)(param_1 + 0x5f8)) goto LAB_004c2f74;
    break;
  case 0x7e:
    if (0x1f < param_3 - 1) {
      return 0;
    }
    *(ulong *)(param_1 + 0x600) = param_3;
    if ((long)param_3 < 2) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x800) = 1;
    return 1;
  case 0x82:
    return (long)*(int *)(param_1 + 0x5d4);
  case 0x83:
    return (long)*(int *)(param_1 + 0x5d8);
  }
  return 0;
}



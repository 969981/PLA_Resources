/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025fe880; name: FUN_025fe880
 */


void FUN_025fe880(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint local_64;
  
  uVar2 = (uint)param_2;
  local_64 = uVar2;
  if (8 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_026006b0();
  }
  uVar6 = *(ulong *)(param_1 + 0x1f0);
  uVar3 = 1L << (param_2 & 0x3f);
  param_2 = param_2 & 0xffffffff;
  if ((param_3 & 1) == 0) {
    *(ulong *)(param_1 + 0x1f0) = uVar6 & (uVar3 ^ 0xffffffffffffffff);
    switch(uVar2) {
    case 1:
      *(undefined1 *)(param_1 + 0x250) = 0;
      *(undefined8 *)(param_1 + 0x248) = 0;
    default:
      lVar1 = *(long *)(param_1 + 0x200);
      break;
    case 2:
      *(undefined1 *)(param_1 + 0x280) = 0;
      *(undefined8 *)(param_1 + 0x278) = 0;
      lVar1 = *(long *)(param_1 + 0x200);
      break;
    case 3:
      *(undefined1 *)(param_1 + 0x2b0) = 0;
      *(undefined8 *)(param_1 + 0x2a8) = 0;
      *(undefined4 *)(param_1 + 0x2b4) = 0x3f800000;
      lVar1 = *(long *)(param_1 + 0x200);
      break;
    case 4:
      *(undefined1 *)(param_1 + 0x2e0) = 0;
      *(undefined8 *)(param_1 + 0x2d8) = 0;
      *(undefined4 *)(param_1 + 0x2e4) = 0x3f800000;
      lVar1 = *(long *)(param_1 + 0x200);
      break;
    case 5:
      *(undefined1 *)(param_1 + 0x310) = 0;
      *(undefined8 *)(param_1 + 0x308) = 0;
      *(undefined4 *)(param_1 + 0x314) = 0x3f800000;
      lVar1 = *(long *)(param_1 + 0x200);
      break;
    case 6:
      *(undefined1 *)(param_1 + 0x340) = 0;
      *(undefined8 *)(param_1 + 0x338) = 0;
      *(undefined4 *)(param_1 + 0x344) = 0x3f800000;
      lVar1 = *(long *)(param_1 + 0x200);
      break;
    case 7:
      *(undefined1 *)(param_1 + 0x370) = 0;
      *(undefined8 *)(param_1 + 0x368) = 0;
      lVar1 = *(long *)(param_1 + 0x200);
      break;
    case 8:
      *(undefined1 *)(param_1 + 0x3a8) = 0;
      *(undefined8 *)(param_1 + 0x3a0) = 0;
      lVar1 = *(long *)(param_1 + 0x200);
    }
  }
  else {
    *(ulong *)(param_1 + 0x1f0) = uVar6 | uVar3;
    if ((uVar6 & uVar3) == 0) {
      uVar7 = 2;
      if (param_2 != 2) goto LAB_025fea80;
      while (uVar7 = uVar7 + 1, uVar7 != 9) {
        if (param_2 != uVar7) {
LAB_025fea80:
          uVar4 = 1L << (uVar7 & 0x3f);
          if ((*(ulong *)(param_1 + 0x1f0) & uVar4) != 0) {
            *(ulong *)(param_1 + 0x1f0) = *(ulong *)(param_1 + 0x1f0) & (uVar4 ^ 0xffffffffffffffff)
            ;
            switch((int)uVar7) {
            case 1:
              *(undefined1 *)(param_1 + 0x250) = 0;
              *(undefined8 *)(param_1 + 0x248) = 0;
              lVar1 = *(long *)(param_1 + 0x200);
              break;
            case 2:
              puVar5 = (undefined8 *)(param_1 + 0x278);
              goto LAB_025feb54;
            case 3:
              *(undefined1 *)(param_1 + 0x2b0) = 0;
              *(undefined8 *)(param_1 + 0x2a8) = 0;
              *(undefined4 *)(param_1 + 0x2b4) = 0x3f800000;
              lVar1 = *(long *)(param_1 + 0x200);
              break;
            case 4:
              *(undefined1 *)(param_1 + 0x2e0) = 0;
              *(undefined8 *)(param_1 + 0x2d8) = 0;
              *(undefined4 *)(param_1 + 0x2e4) = 0x3f800000;
              lVar1 = *(long *)(param_1 + 0x200);
              break;
            case 5:
              *(undefined1 *)(param_1 + 0x310) = 0;
              *(undefined8 *)(param_1 + 0x308) = 0;
              *(undefined4 *)(param_1 + 0x314) = 0x3f800000;
              lVar1 = *(long *)(param_1 + 0x200);
              break;
            case 6:
              *(undefined1 *)(param_1 + 0x340) = 0;
              *(undefined8 *)(param_1 + 0x338) = 0;
              *(undefined4 *)(param_1 + 0x344) = 0x3f800000;
              lVar1 = *(long *)(param_1 + 0x200);
              break;
            case 7:
              puVar5 = (undefined8 *)(param_1 + 0x368);
LAB_025feb54:
              *(undefined1 *)(puVar5 + 1) = 0;
              *puVar5 = 0;
              lVar1 = *(long *)(param_1 + 0x200);
              break;
            case 8:
              *(undefined1 *)(param_1 + 0x3a8) = 0;
              *(undefined8 *)(param_1 + 0x3a0) = 0;
            default:
              lVar1 = *(long *)(param_1 + 0x200);
            }
            if (lVar1 != 0) {
              FUN_025ff800(lVar1,uVar7 | 0x100000000);
            }
          }
        }
      }
    }
    *(uint *)(param_1 + 0x1fc) = uVar2;
    *(undefined1 *)(param_1 + 0x1f8) = 1;
    FUN_025ff548(param_1,&local_64);
    lVar1 = *(long *)(param_1 + 0x200);
  }
  if (lVar1 == 0) {
    return;
  }
  FUN_025ff800(lVar1,(ulong)(param_3 & 1) << 0x28 | param_2 | (ulong)((uVar6 & uVar3) != 0) << 0x20,
               *(undefined8 *)(param_1 + 0x1f0));
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016ad0a8; name: FUN_016ad0a8
 */


void FUN_016ad0a8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong *puVar9;
  undefined1 *local_68;
  long local_60;
  long local_58;
  
  puVar9 = *(ulong **)(param_1 + 0x100);
  puVar1 = *(ulong **)(param_1 + 0x108);
  if (puVar9 == puVar1) {
    return;
  }
LAB_016ad0fc:
  uVar5 = *(ulong *)(param_1 + 0xa0);
  if (uVar5 != 0) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar4 = *puVar9;
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = uVar5 - 1 & uVar4;
    }
    else if (uVar4 < uVar5) {
      uVar7 = uVar4;
    }
    else {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar4 / uVar5;
      }
      uVar7 = uVar4 - uVar7 * uVar5;
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x98) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar8[1] == uVar4) {
            if (plVar8[2] == uVar4) goto LAB_016ad1a8;
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar7) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar8[1];
          if (uVar6 == uVar4) {
            if (plVar8[2] == uVar4) goto LAB_016ad1a8;
          }
          else {
            if (uVar5 <= uVar6) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar2 * uVar5;
            }
            if (uVar6 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  goto LAB_016ad1ec;
LAB_016ad1a8:
  local_68 = (undefined1 *)plVar8[3];
  local_60 = plVar8[4];
  local_58 = plVar8[5];
  if (((local_68 != (undefined1 *)0xc0ea47549ab5f3d9) && (local_68 != &DAT_cbf29ce484222645)) &&
     (uVar5 = FUN_016a83a0(&local_68), (uVar5 & 0xff) != 0)) {
    puVar3 = (undefined4 *)FUN_010f8318(param_1 + 0x138,&local_68);
    *puVar3 = (int)(uVar5 >> 0x20);
  }
LAB_016ad1ec:
  puVar9 = puVar9 + 1;
  if (puVar9 == puVar1) {
    return;
  }
  goto LAB_016ad0fc;
}



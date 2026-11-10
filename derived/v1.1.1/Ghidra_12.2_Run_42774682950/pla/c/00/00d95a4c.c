/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d95a4c; name: FUN_00d95a4c
 */


/* WARNING: Removing unreachable block (ram,0x00d95c14) */
/* WARNING: Removing unreachable block (ram,0x00d95ba4) */

undefined8 FUN_00d95a4c(long param_1,undefined8 param_2,uint param_3,uint *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  undefined8 *apuStack_d0 [13];
  undefined8 local_68;
  
  apuStack_d0[0] = &local_68;
  uVar3 = *(ulong *)(param_1 + 0xa8);
  uVar1 = uVar3 + *(long *)(param_1 + 0xb0);
  lVar2 = *(long *)(param_1 + 0x70);
  plVar5 = (long *)(lVar2 + (uVar1 / 0x38) * 8);
  if (*(long *)(param_1 + 0x78) == lVar2) {
    lVar7 = 0;
  }
  else {
    lVar7 = *plVar5 + (uVar1 % 0x38) * 0x48;
  }
  uVar6 = 0;
  local_68 = param_2;
  if (*(long *)(param_1 + 0x78) == lVar2) goto LAB_00d95bb8;
  while (lVar2 = *(long *)(lVar2 + (uVar3 / 0x38) * 8) + (uVar3 % 0x38) * 0x48, uVar6 <= param_3) {
    while( true ) {
      if (lVar7 == lVar2) goto LAB_00d95bc4;
      lVar2 = lVar7;
      if (*plVar5 == lVar7) {
        lVar2 = plVar5[-1] + 0xfc0;
      }
      uVar1 = FUN_00d99a3c(apuStack_d0,lVar2 + -0x48);
      if ((uVar1 & 1) != 0) {
        if (param_4 != (uint *)0x0) {
          *param_4 = uVar6;
        }
        uVar4 = 1;
        goto LAB_00d95bd4;
      }
      if (*plVar5 == lVar7) {
        plVar5 = plVar5 + -1;
        lVar7 = *plVar5 + 0xfc0;
      }
      uVar3 = *(ulong *)(param_1 + 0xa8);
      lVar7 = lVar7 + -0x48;
      uVar6 = uVar6 + 1;
      lVar2 = *(long *)(param_1 + 0x70);
      if (*(long *)(param_1 + 0x78) != lVar2) break;
LAB_00d95bb8:
      lVar2 = 0;
      if (param_3 < uVar6) goto LAB_00d95bc4;
    }
  }
LAB_00d95bc4:
  uVar4 = 0;
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
LAB_00d95bd4:
  FUN_00d99a54(apuStack_d0);
  return uVar4;
}



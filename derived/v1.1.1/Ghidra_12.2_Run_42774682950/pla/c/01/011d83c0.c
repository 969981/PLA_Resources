/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d83c0; name: thunk_FUN_011d78e4
 */


void thunk_FUN_011d78e4(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  if (*(int *)((long)param_1 + 0x3c) == 1) {
    puVar6 = &DAT_041f87a8;
  }
  else {
    puVar6 = &DAT_041f8460;
    switch(*(int *)((long)param_1 + 0x3c)) {
    case 0:
      break;
    default:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    case 2:
      puVar6 = &DAT_041f8af0;
      break;
    case 3:
      puVar6 = &DAT_041f8e38;
      break;
    case 4:
      puVar6 = &DAT_041f9180;
      break;
    case 5:
      puVar6 = &DAT_041f94c8;
    }
  }
  lVar3 = puVar6[0x15];
  uStack_48 = puVar6[0x16];
  uStack_40 = puVar6[0x17];
  lVar10 = *(long *)(param_2 + 0x70);
  plStack_38 = (long *)0x0;
  lStack_50 = lVar3;
  uVar4 = FUN_00d63240(*param_1,&lStack_50);
  if (plStack_38 != (long *)0x0) {
    (**(code **)(*plStack_38 + 0x20))();
  }
  uVar7 = *(ulong *)(lVar10 + 0xb8) & 0x3f07;
  if (((((uVar7 == 0xf01) || ((*(byte *)(lVar10 + 0x98) & 7) != 0)) ||
       ((*(byte *)(lVar10 + 0xa0) & 7) != 0)) ||
      (((*(byte *)(lVar10 + 0xa8) & 7) != 0 ||
       (((*(uint *)(lVar10 + 0xb0) | (uint)*(ulong *)(lVar10 + 0xb8)) & 7) != 0)))) ||
     (((*(byte *)(lVar10 + 0xc0) & 7) != 0 ||
      (((*(byte *)(lVar10 + 200) & 7) != 0 || (*(short *)(lVar10 + 0x74) == 0)))))) {
    FUN_0284c2d8(param_1[2],lVar10,uVar4,0,uVar7 == 0xf01,0);
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  plVar8 = *(long **)(*param_1 + 0x148);
  lVar10 = *(long *)(*param_1 + 0x150);
  if ((lVar10 != 0) && (*plVar8 != lVar3)) {
    plVar9 = plVar8 + lVar10 * 6;
    lVar10 = lVar10 * 0x30;
    do {
      lVar10 = lVar10 + -0x30;
      if (lVar10 == 0) {
        plVar8 = plVar9;
        break;
      }
      plVar2 = plVar8 + 6;
      plVar1 = plVar8 + 6;
      plVar8 = plVar2;
    } while (*plVar1 != lVar3);
  }
  *(byte *)(plVar8[4] + 0x58) = *(byte *)(plVar8[4] + 0x58) & 0xfe | bVar5;
  return;
}



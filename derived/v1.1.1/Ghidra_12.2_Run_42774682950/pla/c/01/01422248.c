/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01422248; name: FUN_01422248
 */


void FUN_01422248(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  
  lVar8 = *(long *)(param_2 + 0x70);
  uVar9 = *(ulong *)(lVar8 + 0xb8) & 0x3f07;
  if (((((uVar9 == 0xf01) || ((*(byte *)(lVar8 + 0x98) & 7) != 0)) ||
       ((*(byte *)(lVar8 + 0xa0) & 7) != 0)) ||
      (((*(byte *)(lVar8 + 0xa8) & 7) != 0 ||
       (((*(uint *)(lVar8 + 0xb0) | (uint)*(ulong *)(lVar8 + 0xb8)) & 7) != 0)))) ||
     (((*(byte *)(lVar8 + 0xc0) & 7) != 0 || ((*(byte *)(lVar8 + 200) & 7) != 0)))) {
    bVar3 = true;
  }
  else {
    bVar3 = *(short *)(lVar8 + 0x74) == 0;
  }
  uVar5 = (ulong)*(byte *)(param_1 + 7);
  lVar10 = *(long *)(&DAT_0420e320 + uVar5 * 0x1f8);
  if ((param_1[2] != 0) && (bVar3)) {
    puStack_58 = (&PTR_s_pane_L_list_base_00_P_sick_00_0420e328)[uVar5 * 0x3f];
    local_50 = *(undefined8 *)(&DAT_0420e330 + uVar5 * 0x1f8);
    local_48 = (long *)0x0;
    local_60 = lVar10;
    lVar4 = FUN_00d63240(*param_1,&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (lVar4 != 0) {
      FUN_0284c2d8(param_1[2],lVar8,lVar4,1,uVar9 == 0xf01,0);
    }
  }
  plVar6 = *(long **)(*param_1 + 0x148);
  lVar8 = *(long *)(*param_1 + 0x150);
  if ((lVar8 != 0) && (*plVar6 != lVar10)) {
    plVar7 = plVar6 + lVar8 * 6;
    lVar8 = lVar8 * 0x30;
    do {
      lVar8 = lVar8 + -0x30;
      if (lVar8 == 0) {
        plVar6 = plVar7;
        break;
      }
      plVar2 = plVar6 + 6;
      plVar1 = plVar6 + 6;
      plVar6 = plVar2;
    } while (*plVar1 != lVar10);
  }
  *(bool *)(plVar6[4] + 0x58) = bVar3;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0142148c; name: FUN_0142148c
 */


void FUN_0142148c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  byte bVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (param_2 == 0) {
    plVar9 = *(long **)(*param_1 + 0x148);
    lVar12 = *(long *)(*param_1 + 0x150);
    if ((lVar12 != 0) &&
       (*plVar9 != *(long *)(&DAT_0420e248 + (ulong)*(byte *)(param_1 + 7) * 0x1f8))) {
      plVar11 = plVar9 + lVar12 * 6;
      lVar12 = lVar12 * 0x30;
      do {
        lVar12 = lVar12 + -0x30;
        if (lVar12 == 0) {
          plVar9 = plVar11;
          break;
        }
        plVar2 = plVar9 + 6;
        plVar1 = plVar9 + 6;
        plVar9 = plVar2;
      } while (*plVar1 != *(long *)(&DAT_0420e248 + (ulong)*(byte *)(param_1 + 7) * 0x1f8));
    }
    lVar12 = plVar9[4];
    bVar10 = *(byte *)(lVar12 + 0x58) & 0xfe;
  }
  else {
    FUN_01421840(param_1);
    if (param_1[4] != 0) {
      uVar6 = FUN_02c73a80(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x70) + 0x60) + 0x98));
      FUN_0284e6a0(param_1[4],uVar6,0);
    }
    lVar12 = *(long *)(*(long *)(param_2 + 0x70) + 0x60);
    uVar8 = FUN_02c6cf3c(*(undefined8 *)(lVar12 + 0x98));
    if (((uVar8 & 1) == 0) &&
       ((*(ushort *)(*(long *)(*(long *)(lVar12 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
      if (param_1[3] != 0) {
        FUN_0284ef04(param_1[3],*(undefined8 *)(*(long *)(param_2 + 0x70) + 0x60),0,0);
      }
      lVar12 = (ulong)*(byte *)(param_1 + 7) * 0x1f8;
      uVar3 = *(undefined8 *)(&DAT_0420e398 + lVar12);
      puVar4 = (&PTR_s_anime_L_list_base_00_L_icon_seib_0420e3a0)
               [(ulong)*(byte *)(param_1 + 7) * 0x3f];
      uVar13 = *(undefined8 *)(&DAT_0420e3a8 + lVar12);
      iVar7 = FUN_02c6f5e8(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x70) + 0x60) + 0x98));
      uStack_58 = 0;
      local_70 = uVar3;
      puStack_68 = puVar4;
      local_60 = uVar13;
      FUN_0283b1e8(*param_1,&local_70);
      uStack_58 = 0;
      local_70 = uVar3;
      puStack_68 = puVar4;
      local_60 = uVar13;
      FUN_0283b748((float)iVar7,*param_1,&local_70);
      FUN_01421ae4(param_1,param_2);
      FUN_01421d9c(param_1,param_2);
      FUN_01422248(param_1,param_2);
      bVar10 = *(byte *)(param_1 + 7);
      bVar5 = FUN_02c6d5b0(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x70) + 0x60) + 0x98));
      plVar9 = *(long **)(*param_1 + 0x148);
      lVar12 = *(long *)(*param_1 + 0x150);
      if ((lVar12 != 0) && (*plVar9 != *(long *)(&DAT_0420e338 + (ulong)bVar10 * 0x1f8))) {
        plVar11 = plVar9 + lVar12 * 6;
        lVar12 = lVar12 * 0x30;
        do {
          lVar12 = lVar12 + -0x30;
          if (lVar12 == 0) {
            plVar9 = plVar11;
            break;
          }
          plVar2 = plVar9 + 6;
          plVar1 = plVar9 + 6;
          plVar9 = plVar2;
        } while (*plVar1 != *(long *)(&DAT_0420e338 + (ulong)bVar10 * 0x1f8));
      }
      *(byte *)(plVar9[4] + 0x58) = *(byte *)(plVar9[4] + 0x58) & 0xfe | bVar5 & 1;
      FUN_014223e4(param_1,param_2);
      plVar9 = *(long **)(*param_1 + 0x148);
      lVar12 = *(long *)(*param_1 + 0x150);
      if ((lVar12 != 0) &&
         (*plVar9 != *(long *)(&DAT_0420e380 + (ulong)*(byte *)(param_1 + 7) * 0x1f8))) {
        plVar11 = plVar9 + lVar12 * 6;
        lVar12 = lVar12 * 0x30;
        do {
          lVar12 = lVar12 + -0x30;
          if (lVar12 == 0) {
            plVar9 = plVar11;
            break;
          }
          plVar2 = plVar9 + 6;
          plVar1 = plVar9 + 6;
          plVar9 = plVar2;
        } while (*plVar1 != *(long *)(&DAT_0420e380 + (ulong)*(byte *)(param_1 + 7) * 0x1f8));
      }
      lVar12 = plVar9[4];
      bVar10 = *(byte *)(lVar12 + 0x58) | 1;
    }
    else {
      plVar9 = *(long **)(*param_1 + 0x148);
      lVar12 = *(long *)(*param_1 + 0x150);
      if ((lVar12 != 0) &&
         (*plVar9 != *(long *)(&DAT_0420e380 + (ulong)*(byte *)(param_1 + 7) * 0x1f8))) {
        plVar11 = plVar9 + lVar12 * 6;
        lVar12 = lVar12 * 0x30;
        do {
          lVar12 = lVar12 + -0x30;
          if (lVar12 == 0) {
            plVar9 = plVar11;
            break;
          }
          plVar2 = plVar9 + 6;
          plVar1 = plVar9 + 6;
          plVar9 = plVar2;
        } while (*plVar1 != *(long *)(&DAT_0420e380 + (ulong)*(byte *)(param_1 + 7) * 0x1f8));
      }
      lVar12 = plVar9[4];
      bVar10 = *(byte *)(lVar12 + 0x58) & 0xfe;
    }
    *(byte *)(lVar12 + 0x58) = bVar10;
    plVar9 = *(long **)(*param_1 + 0x148);
    lVar12 = *(long *)(*param_1 + 0x150);
    if ((lVar12 != 0) &&
       (*plVar9 != *(long *)(&DAT_0420e248 + (ulong)*(byte *)(param_1 + 7) * 0x1f8))) {
      plVar11 = plVar9 + lVar12 * 6;
      lVar12 = lVar12 * 0x30;
      do {
        lVar12 = lVar12 + -0x30;
        if (lVar12 == 0) {
          plVar9 = plVar11;
          break;
        }
        plVar2 = plVar9 + 6;
        plVar1 = plVar9 + 6;
        plVar9 = plVar2;
      } while (*plVar1 != *(long *)(&DAT_0420e248 + (ulong)*(byte *)(param_1 + 7) * 0x1f8));
    }
    lVar12 = plVar9[4];
    bVar10 = *(byte *)(lVar12 + 0x58) | 1;
  }
  *(byte *)(lVar12 + 0x58) = bVar10;
  return;
}



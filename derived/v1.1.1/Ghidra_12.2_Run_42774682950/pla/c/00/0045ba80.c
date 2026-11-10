/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045ba80; name: FUN_0045ba80
 */


undefined8 FUN_0045ba80(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  iVar3 = FUN_0045c230(param_2,param_3,param_4);
  if (-1 < iVar3) {
    uVar4 = FUN_0045b850(param_1,param_2,iVar3);
    return uVar4;
  }
  puVar5 = (undefined4 *)FUN_00421c70(PTR_DAT_04374378);
  if (puVar5 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar5 = 1;
  plVar6 = (long *)FUN_00421c70(PTR_DAT_04374380);
  *(long **)(puVar5 + 2) = plVar6;
  if (plVar6 != (long *)0x0) {
    if (*plVar6 == 0) {
      lVar7 = FUN_0041cf50();
      **(long **)(puVar5 + 2) = lVar7;
      if (lVar7 == 0) goto LAB_0045bcbc;
      lVar7 = *(long *)(*(long *)(puVar5 + 2) + 8);
    }
    else {
      lVar7 = plVar6[1];
    }
    if (lVar7 == 0) {
      lVar7 = FUN_0041cf50();
      *(long *)(*(long *)(puVar5 + 2) + 8) = lVar7;
      if (lVar7 == 0) goto LAB_0045bcbc;
    }
    lVar9 = (long)param_4;
    lVar7 = lVar9 << 0x20;
    lVar8 = lVar9;
    do {
      lVar7 = lVar7 + -0x100000000;
      if (lVar8 < 1) {
        bVar2 = false;
        goto LAB_0045bb80;
      }
      lVar1 = param_2 + lVar8;
      lVar8 = lVar8 + -1;
    } while (*(char *)(lVar1 + -1) == '\0');
    bVar2 = true;
LAB_0045bb80:
    iVar3 = thunk_FUN_0040a280(**(undefined8 **)(puVar5 + 2),param_2);
    if (iVar3 != 0) {
      *(ulong *)(**(long **)(puVar5 + 2) + 0x10) =
           *(ulong *)(**(long **)(puVar5 + 2) + 0x10) & 0xfffffffffffffff8;
      *(ulong *)(**(long **)(puVar5 + 2) + 0x10) = *(ulong *)(**(long **)(puVar5 + 2) + 0x10) | 8;
      if (bVar2) {
        lVar8 = -8;
        do {
          iVar3 = (int)lVar8;
          lVar8 = lVar8 + 1;
        } while ((0xffU >> (ulong)(iVar3 + 9U & 0x1f) & (uint)*(byte *)(param_2 + (lVar7 >> 0x20)))
                 != 0);
        *(ulong *)(**(long **)(puVar5 + 2) + 0x10) =
             *(ulong *)(**(long **)(puVar5 + 2) + 0x10) | -lVar8;
      }
      lVar7 = lVar9 << 0x20;
      do {
        lVar7 = lVar7 + -0x100000000;
        if (lVar9 < 1) {
          bVar2 = false;
          goto LAB_0045bc34;
        }
        lVar8 = param_3 + lVar9;
        lVar9 = lVar9 + -1;
      } while (*(char *)(lVar8 + -1) == -1);
      bVar2 = true;
LAB_0045bc34:
      iVar3 = thunk_FUN_0040a280(*(undefined8 *)(*(long *)(puVar5 + 2) + 8),param_3);
      if (iVar3 != 0) {
        *(ulong *)(*(long *)(*(long *)(puVar5 + 2) + 8) + 0x10) =
             *(ulong *)(*(long *)(*(long *)(puVar5 + 2) + 8) + 0x10) & 0xfffffffffffffff8;
        *(ulong *)(*(long *)(*(long *)(puVar5 + 2) + 8) + 0x10) =
             *(ulong *)(*(long *)(*(long *)(puVar5 + 2) + 8) + 0x10) | 8;
        if (bVar2) {
          lVar8 = -8;
          do {
            iVar3 = (int)lVar8;
            lVar8 = lVar8 + 1;
          } while ((0xffU >> (ulong)(iVar3 + 9U & 0x1f) &
                   (*(byte *)(param_3 + (lVar7 >> 0x20)) ^ 0xffffffff)) != 0);
          *(ulong *)(*(long *)(*(long *)(puVar5 + 2) + 8) + 0x10) =
               *(ulong *)(*(long *)(*(long *)(puVar5 + 2) + 8) + 0x10) | -lVar8;
        }
        *param_1 = puVar5;
        return 1;
      }
    }
  }
LAB_0045bcbc:
  FUN_00421810(puVar5,PTR_DAT_04374378);
  return 0;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4a3bc; name: FUN_02f4a3bc
 */


undefined4 FUN_02f4a3bc(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  long *plVar10;
  uint uVar11;
  
  piVar5 = *(int **)(param_1 + 200);
  uVar3 = *(uint *)(param_1 + 0xd0);
  piVar8 = piVar5;
  if ((uVar3 != 0) && (*piVar5 != param_2)) {
    lVar7 = (ulong)uVar3 * 0x10;
    piVar9 = piVar5;
    do {
      lVar7 = lVar7 + -0x10;
      if (lVar7 == 0) goto LAB_02f4a404;
      piVar1 = piVar9 + 4;
      piVar8 = piVar9 + 4;
      piVar9 = piVar9 + 4;
    } while (*piVar1 != param_2);
  }
  if (piVar8 == piVar5 + (ulong)uVar3 * 4) {
LAB_02f4a404:
    uVar11 = *(uint *)(param_1 + 0xd4);
    if (uVar3 < uVar11) {
LAB_02f4a444:
      if (uVar3 < uVar11) {
        uVar3 = *(uint *)(param_1 + 0xd0);
        *(uint *)(param_1 + 0xd0) = uVar3 + 1;
        if (piVar5 + (ulong)uVar3 * 4 != (int *)0x0) {
          piVar8 = piVar5 + (ulong)uVar3 * 4;
          piVar5[(ulong)uVar3 * 4] = param_2;
          goto LAB_02f4a46c;
        }
      }
    }
    else {
      iVar2 = uVar11 + (uVar11 >> 1);
      if (uVar11 == 0) {
        iVar2 = 1;
      }
      uVar11 = iVar2 + uVar11;
      piVar5 = (int *)(*DAT_0442d148)(0,piVar5,(ulong)uVar11 << 4);
      if (piVar5 != (int *)0x0) {
        *(int **)(param_1 + 200) = piVar5;
        *(uint *)(param_1 + 0xd4) = uVar11;
        goto LAB_02f4a444;
      }
    }
    uVar6 = 2;
  }
  else {
LAB_02f4a46c:
    plVar10 = (long *)(piVar8 + 2);
    puVar4 = (undefined8 *)(*DAT_0442d138)(2,0x28);
    if (puVar4 == (undefined8 *)0x0) {
      *plVar10 = 0;
      FUN_02f4a558((undefined8 *)(param_1 + 200),param_2);
    }
    else {
      *(undefined4 *)(puVar4 + 3) = 0xffffffff;
      *puVar4 = 0xffffffff00000000;
      puVar4[2] = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)(puVar4 + 4) = 0;
      *(ushort *)((long)puVar4 + 0xc) = *(ushort *)((long)puVar4 + 0xc) & 0xf800;
      *plVar10 = (long)puVar4;
      FUN_02ef65c8(puVar4,param_2);
    }
    uVar6 = 1;
    if (*plVar10 == 0) {
      uVar6 = 2;
    }
  }
  return uVar6;
}



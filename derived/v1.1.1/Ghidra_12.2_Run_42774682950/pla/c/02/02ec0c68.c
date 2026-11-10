/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec0c68; name: FUN_02ec0c68
 */


bool FUN_02ec0c68(long param_1,long *param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  char local_44 [4];
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    puVar11 = *(undefined8 **)(param_1 + 8);
    *(undefined4 *)(puVar11 + 0xf) = 3;
    iVar3 = *(int *)((long)puVar11 + 0x74) + -1;
    *(int *)((long)puVar11 + 0x74) = iVar3;
    if (iVar3 == 0) {
      (**(code **)*puVar11)(puVar11);
      (*DAT_0442d150)(0,puVar11);
    }
    if (*(char *)(param_1 + 0x10) != '\0') {
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
  }
  if (*param_2 == 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x18);
    bVar4 = false;
    puVar11 = puVar10;
    if (*(int *)(param_1 + 0x20) != 0) {
      do {
        *param_4 = puVar10[1];
        puVar11 = (undefined8 *)*puVar10;
        iVar3 = *(int *)((long)puVar11 + 0x74) + -1;
        *(int *)((long)puVar11 + 0x74) = iVar3;
        *(undefined4 *)(puVar11 + 0xf) = 3;
        if (iVar3 == 0) {
          (**(code **)*puVar11)(puVar11);
          (*DAT_0442d150)(0,puVar11);
        }
        puVar11 = *(undefined8 **)(param_1 + 0x18);
        uVar6 = *(uint *)(param_1 + 0x20);
        if (puVar10 < puVar11 + (ulong)uVar6 * 2 + -2) {
          uVar7 = (long)puVar11 + (ulong)uVar6 * 0x10 + ~(ulong)puVar10 + -0x10;
          uVar1 = ((uint)(uVar7 >> 4) & 0xfffffff) + 1;
          uVar8 = (ulong)uVar1 & 3;
          puVar5 = puVar10;
          if ((uVar1 & 3) != 0) {
            puVar9 = puVar10;
            do {
              puVar5 = puVar9 + 2;
              uVar8 = uVar8 - 1;
              *puVar9 = *puVar5;
              puVar9[1] = puVar9[3];
              puVar9 = puVar5;
            } while (uVar8 != 0);
          }
          if (0x2f < uVar7) {
            do {
              *puVar5 = puVar5[2];
              puVar5[1] = puVar5[3];
              puVar5[2] = puVar5[4];
              puVar5[3] = puVar5[5];
              puVar5[4] = puVar5[6];
              puVar5[5] = puVar5[7];
              puVar5[7] = puVar5[9];
              puVar9 = puVar5 + 8;
              puVar5[6] = *puVar9;
              puVar5 = puVar9;
            } while (puVar9 < puVar11 + (ulong)uVar6 * 2 + -2);
          }
          uVar6 = *(uint *)(param_1 + 0x20);
          puVar11 = *(undefined8 **)(param_1 + 0x18);
        }
        uVar6 = uVar6 - 1;
        *(uint *)(param_1 + 0x20) = uVar6;
      } while (puVar11 + (ulong)uVar6 * 2 != puVar10);
      bVar4 = uVar6 != 0;
    }
    if ((puVar11 != (undefined8 *)0x0) && (!bVar4)) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      (*DAT_0442d150)(0,puVar11);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      cVar2 = *(char *)(param_1 + 0x10);
      goto joined_r0x02ec0ec4;
    }
  }
  else {
    puVar11 = (undefined8 *)FUN_02ebc0f0(param_1 + 0x18,*param_2,local_44);
    if ((puVar11 != (undefined8 *)0x0) && (local_44[0] != '\0')) {
      *param_4 = *param_2;
      puVar11 = (undefined8 *)*puVar11;
      *(undefined4 *)(puVar11 + 0xf) = 3;
      iVar3 = *(int *)((long)puVar11 + 0x74) + -1;
      *(int *)((long)puVar11 + 0x74) = iVar3;
      if (iVar3 == 0) {
        (**(code **)*puVar11)(puVar11);
        (*DAT_0442d150)(0,puVar11);
      }
      FUN_02ec03ac(param_1 + 0x18,*param_2);
    }
  }
  cVar2 = *(char *)(param_1 + 0x10);
joined_r0x02ec0ec4:
  if (cVar2 == '\0') {
    bVar4 = *(int *)(param_1 + 0x20) == 0;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}



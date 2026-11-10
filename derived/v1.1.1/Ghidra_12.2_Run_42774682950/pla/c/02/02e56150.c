/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e56150; name: FUN_02e56150
 */


void FUN_02e56150(long *param_1,uint *param_2,long param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  char *__s;
  size_t sVar3;
  void *__src;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  float fVar17;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  
  iVar1 = (int)param_1[1];
  puVar5 = *(undefined8 **)(param_2 + 2);
  if (puVar5 == (undefined8 *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(puVar5 + 1);
  }
  uVar4 = iVar9 + iVar1;
  if (*param_2 < uVar4) {
    puVar5 = (undefined8 *)FUN_02f59e30(9,uVar4 * 0x48 + 0x10);
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    __src = *(void **)(param_2 + 2);
    if ((__src == (void *)0x0) || (*(int *)((long)__src + 8) == 0)) {
      *puVar5 = 0xffffffffffffffff;
      *(undefined4 *)(puVar5 + 1) = 0;
      lVar14 = *(long *)(param_2 + 2);
    }
    else {
      memcpy(puVar5,__src,(ulong)(*(int *)((long)__src + 8) * 0x48 + 0x10));
      lVar14 = *(long *)(param_2 + 2);
    }
    if (lVar14 != 0) {
      FUN_02f59e60(9);
    }
    *(undefined8 **)(param_2 + 2) = puVar5;
    *param_2 = uVar4;
    iVar1 = (int)param_1[1];
  }
  if (iVar1 == 0) {
    return;
  }
  uVar13 = 0;
  do {
    lVar14 = *param_1;
    if (puVar5 == (undefined8 *)0x0) {
LAB_02e562bc:
      puVar5 = (undefined8 *)0x0;
    }
    else {
      uVar4 = *(uint *)(puVar5 + 1);
      if (*param_2 <= uVar4) goto LAB_02e562bc;
      *(uint *)(puVar5 + 1) = uVar4 + 1;
      puVar5 = puVar5 + (ulong)uVar4 * 9 + 2;
    }
    lVar6 = *(long *)(**(long **)(*(long *)(param_4 + 8) + 0x38) + 0x20);
    local_70 = *(undefined4 *)(lVar6 + 0x18);
    local_6c = *(undefined4 *)(lVar6 + 0x1c);
    uStack_68 = *(undefined4 *)(lVar6 + 0x20);
    lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 8) + 0x38) + 0x10);
    local_80 = *(undefined4 *)(lVar6 + 0x78);
    local_7c = *(undefined4 *)(lVar6 + 0x7c);
    uStack_78 = *(undefined4 *)(lVar6 + 0x80);
    FUN_02e56510(&local_60,lVar14 + uVar13 * 0xf0,&local_70,&local_80);
    lVar15 = lVar14 + uVar13 * 0xf0;
    *(undefined8 *)((long)puVar5 + 4) = local_60;
    *(undefined4 *)((long)puVar5 + 0xc) = local_58;
    puVar5[2] = 0x3f8000003f800000;
    *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(lVar15 + 0xe0);
    puVar5[8] = 0;
    *(undefined4 *)(puVar5 + 7) = 0;
    puVar16 = (uint *)(lVar15 + 0xe8);
    uVar4 = *puVar16;
    lVar6 = (long)(int)uVar4;
    do {
      if (lVar6 < 1) goto LAB_02e56374;
      lVar12 = *(long *)(lVar15 + 0x78 + lVar6 * 8);
      lVar6 = lVar6 + -1;
    } while (lVar12 == 0);
    __s = *(char **)(lVar12 + 8);
    puVar5[8] = __s;
    uVar10 = 0;
    if (__s != (char *)0x0) {
      sVar3 = strlen(__s);
      uVar10 = (undefined4)sVar3;
    }
    *(undefined4 *)(puVar5 + 7) = uVar10;
    uVar4 = *puVar16;
LAB_02e56374:
    if (uVar4 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        if (*(long *)(lVar14 + uVar13 * 0xf0 + 0x80 + uVar7 * 8) != 0) break;
        uVar7 = uVar7 + 1;
      } while (uVar4 != uVar7);
    }
    uVar4 = (uint)uVar7;
    *(char *)((long)puVar5 + 0x1c) = (char)uVar7;
    if (uVar4 < *puVar16) {
      uVar8 = uVar7 & 0xffffffff;
      puVar11 = *(undefined4 **)(lVar14 + uVar13 * 0xf0 + (uVar7 & 0xffffffff) * 8 + 0x80);
      uVar10 = 0;
      if (puVar11 == (undefined4 *)0x0) {
LAB_02e5644c:
        uVar4 = (uint)uVar8;
      }
      else {
        *(undefined4 *)((long)puVar5 + 0x24) = *puVar11;
        uVar7 = uVar8 + 1;
        if (uVar7 < *puVar16) {
          puVar11 = *(undefined4 **)(lVar14 + uVar13 * 0xf0 + uVar7 * 8 + 0x80);
          if (puVar11 == (undefined4 *)0x0) {
            uVar10 = 1;
            uVar8 = uVar7;
            goto LAB_02e5644c;
          }
          *(undefined4 *)(puVar5 + 5) = *puVar11;
          uVar7 = uVar8 + 2;
          if (uVar7 < *puVar16) {
            puVar11 = *(undefined4 **)(lVar14 + uVar13 * 0xf0 + uVar7 * 8 + 0x80);
            if (puVar11 == (undefined4 *)0x0) {
              uVar10 = 2;
              uVar8 = uVar7;
              goto LAB_02e5644c;
            }
            *(undefined4 *)((long)puVar5 + 0x2c) = *puVar11;
            uVar8 = uVar8 + 3;
            if (uVar8 < *puVar16) {
              puVar11 = *(undefined4 **)(lVar14 + uVar13 * 0xf0 + uVar8 * 8 + 0x80);
              if (puVar11 == (undefined4 *)0x0) {
                uVar10 = 3;
                goto LAB_02e5644c;
              }
              *(undefined4 *)(puVar5 + 6) = *puVar11;
              uVar4 = uVar4 + 4;
              uVar10 = 4;
            }
            else {
              uVar4 = uVar4 + 3;
              uVar10 = 3;
            }
          }
          else {
            uVar4 = uVar4 + 2;
            uVar10 = 2;
          }
        }
        else {
          uVar4 = uVar4 + 1;
          uVar10 = 1;
        }
      }
    }
    else {
      uVar10 = 0;
    }
    *(undefined4 *)(puVar5 + 4) = uVar10;
    *(char *)((long)puVar5 + 0x1d) = (char)*puVar16 - (char)uVar4;
    lVar14 = lVar14 + uVar13 * 0xf0;
    *(undefined4 *)puVar5 = *(undefined4 *)(lVar14 + 0xec);
    fVar17 = *(float *)(*(long *)(*(long *)(*(long *)(param_4 + 8) + 0x38) + 0x28) + 0xd8);
    bVar2 = *(uint *)(param_1 + 2) <= uVar13;
    uVar13 = uVar13 + 1;
    if (bVar2) {
      fVar17 = 1.0 - fVar17;
    }
    *(float *)((long)puVar5 + 0x14) = fVar17 * *(float *)(lVar14 + 0xe4);
    if (*(uint *)(param_1 + 1) <= uVar13) {
      return;
    }
    puVar5 = *(undefined8 **)(param_2 + 2);
  } while( true );
}



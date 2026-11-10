/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00237ab4; name: FUN_00237ab4
 */


/* WARNING: Removing unreachable block (ram,0x00237ecc) */

void FUN_00237ab4(long param_1,char *param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5,undefined4 param_6,uint param_7,long param_8)

{
  undefined1 *puVar1;
  long lVar2;
  char cVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  void *__s;
  int iVar9;
  long lVar10;
  
  puVar6 = PTR_DAT_04372bb8;
  puVar5 = PTR_DAT_04372ba8;
  if (*param_2 == '\0') {
    iVar9 = 0;
  }
  else if (param_2[1] == '\0') {
    iVar9 = 1;
  }
  else if (param_2[2] == '\0') {
    iVar9 = 2;
  }
  else if (param_2[3] == '\0') {
    iVar9 = 3;
  }
  else if (param_2[4] == '\0') {
    iVar9 = 4;
  }
  else if (param_2[5] == '\0') {
    iVar9 = 5;
  }
  else if (param_2[6] == '\0') {
    iVar9 = 6;
  }
  else if (param_2[7] == '\0') {
    iVar9 = 7;
  }
  else if (param_2[8] == '\0') {
    iVar9 = 8;
  }
  else if (param_2[9] == '\0') {
    iVar9 = 9;
  }
  else if (param_2[10] == '\0') {
    iVar9 = 10;
  }
  else if (param_2[0xb] == '\0') {
    iVar9 = 0xb;
  }
  else if (param_2[0xc] == '\0') {
    iVar9 = 0xc;
  }
  else if (param_2[0xd] == '\0') {
    iVar9 = 0xd;
  }
  else if (param_2[0xe] == '\0') {
    iVar9 = 0xe;
  }
  else if (param_2[0xf] == '\0') {
    iVar9 = 0xf;
  }
  else if (param_2[0x10] == '\0') {
    iVar9 = 0x10;
  }
  else if (param_2[0x11] == '\0') {
    iVar9 = 0x11;
  }
  else if (param_2[0x12] == '\0') {
    iVar9 = 0x12;
  }
  else if (param_2[0x13] == '\0') {
    iVar9 = 0x13;
  }
  else if (param_2[0x14] == '\0') {
    iVar9 = 0x14;
  }
  else if (param_2[0x15] == '\0') {
    iVar9 = 0x15;
  }
  else if (param_2[0x16] == '\0') {
    iVar9 = 0x16;
  }
  else if (param_2[0x17] == '\0') {
    iVar9 = 0x17;
  }
  else if (param_2[0x18] == '\0') {
    iVar9 = 0x18;
  }
  else if (param_2[0x19] == '\0') {
    iVar9 = 0x19;
  }
  else if (param_2[0x1a] == '\0') {
    iVar9 = 0x1a;
  }
  else if (param_2[0x1b] == '\0') {
    iVar9 = 0x1b;
  }
  else if (param_2[0x1c] == '\0') {
    iVar9 = 0x1c;
  }
  else if (param_2[0x1d] == '\0') {
    iVar9 = 0x1d;
  }
  else if (param_2[0x1e] == '\0') {
    iVar9 = 0x1e;
  }
  else {
    iVar9 = 0x1f;
    if (param_2[0x1f] != '\0') {
      iVar9 = 0x20;
    }
  }
  pcVar7 = (char *)(**(code **)PTR_DAT_04372ba8)(iVar9 + 1,4,*(undefined8 *)PTR_DAT_04372bb8);
  pcVar4 = pcVar7;
  for (; (iVar9 != 0 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    iVar9 = iVar9 + -1;
    *pcVar4 = *param_2;
    pcVar4 = pcVar4 + 1;
  }
  *pcVar4 = '\0';
  do {
    cVar3 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar3 != '\0');
  *(char **)(param_1 + 0x10) = pcVar7;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined1 *)(param_1 + 0x1c) = param_4;
  *(undefined1 *)(param_1 + 0x1d) = param_5;
  *(undefined4 *)(param_1 + 0x20) = 1;
  puVar8 = (undefined8 *)(**(code **)puVar5)(0x10,4,*(undefined8 *)puVar6);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = 0;
    puVar8[1] = 0;
  }
  *(undefined8 **)(param_1 + 0x28) = puVar8;
  *(undefined4 *)puVar8 = param_6;
  *(uint *)(*(long *)(param_1 + 0x28) + 4) = param_7;
  __s = (void *)(**(code **)puVar5)((long)(int)param_7,4,*(undefined8 *)puVar6);
  if ((0 < (int)param_7) && (__s != (void *)0x0)) {
    memset(__s,0,(ulong)param_7);
  }
  *(void **)(*(long *)(param_1 + 0x28) + 8) = __s;
  if (0 < (int)param_7) {
    if (param_7 == 1) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      do {
        puVar1 = (undefined1 *)(param_8 + lVar10);
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + lVar10) = *puVar1;
        lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8) + lVar10;
        lVar10 = lVar10 + 2;
        *(undefined1 *)(lVar2 + 1) = puVar1[1];
      } while ((ulong)param_7 - ((ulong)param_7 & 1) != lVar10);
      if ((param_7 & 1) == 0) {
        return;
      }
    }
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + lVar10) =
         *(undefined1 *)(param_8 + lVar10);
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea5e58; name: FUN_02ea5e58
 */


undefined8 FUN_02ea5e58(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  size_t sVar4;
  size_t sVar5;
  char *__dest;
  void *__dest_00;
  int *piVar6;
  undefined8 uVar7;
  ulong uVar8;
  char *__s;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    uVar7 = 2;
  }
  else {
    uVar3 = 0;
    if (*(ushort *)(param_1 + 0x20) != 0) {
      uVar3 = *(uint *)(param_1 + 0x5c) / (uint)*(ushort *)(param_1 + 0x20);
    }
    if ((*(uint *)(param_1 + 0x50) == 0) ||
       (lVar2 = *(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x50) * 0x10,
       uVar3 != *(uint *)(lVar2 + -0xc))) {
      iVar1 = *(int *)(param_1 + 0x58) + 1;
      *(int *)(param_1 + 0x58) = iVar1;
      sVar4 = strlen(param_2);
      uVar8 = (ulong)((int)sVar4 + 1);
      __dest_00 = (void *)FUN_02f59e30(0,uVar8);
      if (__dest_00 != (void *)0x0) {
        memcpy(__dest_00,param_2,uVar8);
        piVar6 = (int *)FUN_02ea62c0((long *)(param_1 + 0x48));
        if (piVar6 != (int *)0x0) {
          *piVar6 = iVar1;
          piVar6[1] = uVar3;
          *(void **)(piVar6 + 2) = __dest_00;
          return 1;
        }
        FUN_02f59e60(0,__dest_00);
      }
    }
    else {
      sVar4 = strlen(*(char **)(lVar2 + -8));
      sVar5 = strlen(param_2);
      uVar8 = (ulong)((int)sVar4 + (int)sVar5 + 1);
      __dest = (char *)FUN_02f59e30(0,uVar8);
      if (__dest != (char *)0x0) {
        __s = *(char **)(lVar2 + -8);
        sVar4 = uVar8 - 1;
        sVar5 = strlen(__s);
        if (sVar5 + 1 <= sVar4) {
          sVar4 = sVar5 + 1;
        }
        strncpy(__dest,__s,sVar4);
        __dest[sVar4] = '\0';
        FUN_02f59e60(0,*(undefined8 *)(lVar2 + -8));
        FUN_02938870(__dest,param_2,uVar8);
        *(char **)(lVar2 + -8) = __dest;
        return 1;
      }
    }
    uVar7 = 0x34;
  }
  return uVar7;
}



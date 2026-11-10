/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7abac; name: FUN_02e7abac
 */


void FUN_02e7abac(long param_1,long param_2,int param_3,char param_4)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined1 local_44;
  undefined3 uStack_43;
  
  plVar4 = *(long **)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x18);
  if ((uVar2 == 0) || (*plVar4 == *(long *)(param_2 + 0x40))) {
    plVar6 = plVar4;
  }
  else {
    lVar5 = (ulong)uVar2 * 0x20;
    plVar3 = plVar4;
    do {
      lVar5 = lVar5 + -0x20;
      if (lVar5 == 0) {
        return;
      }
      plVar1 = plVar3 + 4;
      plVar6 = plVar3 + 4;
      plVar3 = plVar3 + 4;
    } while (*plVar1 != *(long *)(param_2 + 0x40));
  }
  if ((plVar6 != plVar4 + (ulong)uVar2 * 4) && (plVar4 = (long *)plVar6[2], plVar4 != (long *)0x0))
  {
    if (param_4 == -1) {
      do {
        if ((((plVar4[3] == param_2) && ((char)plVar4[5] == -0x70)) &&
            (*(char *)((long)plVar4 + 0x2b) != '\0')) &&
           (((*(byte *)(plVar4 + 6) >> 2 & 1) == 0 && (*(int *)((long)plVar4 + 0x2c) <= param_3))))
        {
          uStack_43 = (undefined3)((ulong)plVar4[5] >> 8);
          _local_44 = CONCAT31(uStack_43,0x80);
          FUN_02e7a138(param_1,param_2,&local_44,*(int *)((long)plVar4 + 0x2c),1,0);
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
    else {
      do {
        if (((plVar4[3] == param_2) && (*(char *)((long)plVar4 + 0x29) == param_4)) &&
           (((char)plVar4[5] == -0x70 &&
            (((*(char *)((long)plVar4 + 0x2b) != '\0' && ((*(byte *)(plVar4 + 6) >> 2 & 1) == 0)) &&
             (*(int *)((long)plVar4 + 0x2c) <= param_3)))))) {
          uStack_43 = (undefined3)((ulong)plVar4[5] >> 8);
          _local_44 = CONCAT31(uStack_43,0x80);
          FUN_02e7a138(param_1,param_2,&local_44,*(int *)((long)plVar4 + 0x2c),1,0);
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  return;
}



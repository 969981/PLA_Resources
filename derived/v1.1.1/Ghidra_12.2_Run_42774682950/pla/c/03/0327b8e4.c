/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0327b8e4; name: FUN_0327b8e4
 */


void FUN_0327b8e4(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong local_48;
  
  FUN_032bcf10(param_2,0x108,&local_48);
  if ((int)param_2[1] == 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
    if (lVar1 != 0) {
      iVar2 = (int)(local_48 / 0x108);
      if (0x3ffffffe < iVar2) {
        iVar2 = 0x3fffffff;
      }
      if (0 < (int)param_2[1]) {
        lVar3 = 0;
        lVar4 = 0;
        do {
          memcpy((void *)(lVar1 + lVar3),(void *)(*param_2 + lVar3),0x108);
          lVar4 = lVar4 + 1;
          lVar3 = lVar3 + 0x108;
        } while (lVar4 < (int)param_2[1]);
      }
      *param_2 = lVar1;
      *(int *)((long)param_2 + 0xc) = iVar2;
    }
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea61c4; name: FUN_02ea61c4
 */


int FUN_02ea61c4(long param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined1 local_5c [4];
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined8 local_4c;
  
  uVar3 = *(uint *)(param_1 + 0x50);
  if (uVar3 == 0) {
    iVar4 = 0;
  }
  else {
    lVar5 = 0;
    iVar4 = 0;
    do {
      local_58 = 0x6c62616c;
      local_54 = *param_2 + 4;
      puVar2 = (undefined4 *)(*(long *)(param_1 + 0x48) + lVar5);
      local_50 = *puVar2;
      local_4c = *(undefined8 *)(puVar2 + 2);
      (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),&local_58,0xc);
      (**(code **)(**(long **)(param_1 + 0x60) + 0x18))
                (*(long **)(param_1 + 0x60),local_4c,*param_2);
      iVar1 = iVar4 + *param_2;
      iVar4 = iVar1 + 0xc;
      if ((*param_2 & 1) != 0) {
        local_5c[0] = 0;
        (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),local_5c,1);
        iVar4 = iVar1 + 0xd;
      }
      lVar5 = lVar5 + 0x10;
      param_2 = param_2 + 1;
    } while ((ulong)uVar3 * 0x10 != lVar5);
  }
  return iVar4;
}



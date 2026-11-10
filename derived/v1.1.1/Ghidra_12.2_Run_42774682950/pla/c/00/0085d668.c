/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085d668; name: FUN_0085d668
 */


void FUN_0085d668(long param_1,undefined8 param_2,void *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  void *__dest;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)FUN_0085e96c(*(undefined8 *)(param_1 + 0x1308));
  if ((((puVar4 != (undefined8 *)0x0) && (*(long *)(param_1 + 0x1320) != 0)) &&
      (iVar2 = *(int *)(param_1 + 0x1328), iVar2 != 0)) && (param_4 < 0x5c1)) {
    iVar1 = *(int *)(param_1 + 0x132c) + 1;
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = iVar1 / iVar2;
    }
    if (iVar1 - iVar3 * iVar2 != *(int *)(param_1 + 0x1330)) {
      __dest = (void *)(*(long *)(param_1 + 0x1320) + (long)*(int *)(param_1 + 0x132c) * 0x5d0);
      uVar5 = *puVar4;
      memcpy(__dest,param_3,(ulong)param_4);
      *(uint *)((long)__dest + 0x5c0) = param_4;
      *(undefined8 *)((long)__dest + 0x5c8) = uVar5;
      iVar1 = *(int *)(param_1 + 0x1328);
      iVar2 = *(int *)(param_1 + 0x132c) + 1;
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = iVar2 / iVar1;
      }
      *(int *)(param_1 + 0x132c) = iVar2 - iVar3 * iVar1;
    }
  }
  return;
}



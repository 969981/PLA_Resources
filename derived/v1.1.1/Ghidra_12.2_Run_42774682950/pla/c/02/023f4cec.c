/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023f4cec; name: FUN_023f4cec
 */


void FUN_023f4cec(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_28;
  
  local_28 = 0;
  lVar2 = FUN_023f4704(param_1,1,&local_28);
  local_28 = 0;
  puVar3 = (undefined8 *)FUN_023e11f0(param_1,3,&local_28);
  lVar4 = *param_2;
  uVar1 = *(undefined4 *)(puVar3 + 1);
  *(undefined8 *)(lVar2 + lVar4) = *puVar3;
  *(undefined4 *)((undefined8 *)(lVar2 + lVar4) + 1) = uVar1;
  FUN_0014ff10(param_1,0);
  return;
}



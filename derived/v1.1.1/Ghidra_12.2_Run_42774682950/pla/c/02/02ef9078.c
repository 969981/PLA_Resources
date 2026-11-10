/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef9078; name: FUN_02ef9078
 */


void FUN_02ef9078(float param_1,float param_2,undefined8 param_3,ulong param_4)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  cVar1 = (&DAT_03a9f3e4)[param_4 & 0xffffffff];
  fVar2 = cosf(param_2);
  fVar3 = cosf(param_1);
  fVar4 = sinf(param_1);
  fVar5 = sinf(param_2);
  FUN_02ef9108(fVar2 * fVar3,-(fVar4 * fVar2),fVar5,cVar1 + 1,1,param_3);
  return;
}



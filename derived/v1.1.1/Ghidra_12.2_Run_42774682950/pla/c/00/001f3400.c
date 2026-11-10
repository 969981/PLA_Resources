/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f3400; name: FUN_001f3400
 */


undefined8 FUN_001f3400(undefined8 param_1,char *param_2,ulong param_3)

{
  char cVar1;
  undefined8 uVar2;
  byte *pbVar3;
  char *pcVar4;
  byte abStack_a0 [128];
  
  if ((param_3 & 0xffffffffffffff01) == 1) {
    param_3 = param_3 - 1;
    uVar2 = FUN_001f32c0(param_1,abStack_a0,param_3 >> 1);
    if ((int)uVar2 == 0) {
      if (param_3 != 0) {
        pbVar3 = abStack_a0;
        pcVar4 = param_2;
        do {
          cVar1 = "0123456789abcdef"[(ulong)*pbVar3 & 0xf];
          param_2 = pcVar4 + 2;
          *pcVar4 = "0123456789abcdef"[*pbVar3 >> 4];
          pcVar4[1] = cVar1;
          param_3 = param_3 - 2;
          pbVar3 = pbVar3 + 1;
          pcVar4 = param_2;
        } while (param_3 != 0);
      }
      uVar2 = 0;
      *param_2 = '\0';
    }
  }
  else {
    uVar2 = 0x2b;
  }
  return uVar2;
}



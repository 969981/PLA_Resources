/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e50f80; name: FUN_02e50f80
 */


bool FUN_02e50f80(long param_1,long param_2,long param_3,float *param_4,undefined4 *param_5)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char local_34 [4];
  
  uVar4 = *(ulong *)(param_2 + 0x40);
  uVar5 = *(ulong *)(param_3 + 0x40);
  uVar1 = uVar4;
  if (uVar5 <= uVar4) {
    uVar1 = uVar5;
    uVar5 = uVar4;
  }
  lVar3 = FUN_02e53940(param_1 + 0x50,uVar1,uVar5,local_34);
  if (lVar3 == 0 || local_34[0] == '\0') {
    bVar2 = true;
    fVar7 = *(float *)(param_2 + 0x54) - *(float *)(param_3 + 0x54);
    fVar6 = *(float *)(param_2 + 0x50) - *(float *)(param_3 + 0x50);
    fVar8 = *(float *)(param_2 + 0x58) - *(float *)(param_3 + 0x58);
    *param_4 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8);
    *param_5 = 0;
  }
  else {
    *param_4 = *(float *)(lVar3 + 0x14);
    *param_5 = *(undefined4 *)(lVar3 + 0x10);
    bVar2 = *(float *)(lVar3 + 0x14) != 3.4028235e+38;
  }
  return bVar2;
}



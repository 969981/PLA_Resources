/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091a750; name: FUN_0091a750
 */


int FUN_0091a750(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar3 = FUN_00929498(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xe0));
  if ((param_5 == 2) && (iVar3 < 0)) {
    iVar4 = FUN_00929498(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xe0),param_2,param_3,param_4,0
                        );
    if (3 < param_6) {
      param_6 = 4;
    }
    fVar5 = powf(3.0,(float)param_6);
    iVar3 = (int)(float)(int)((float)iVar3 / fVar5);
    iVar1 = -iVar3;
    if (-1 < iVar3) {
      iVar1 = iVar3;
    }
    iVar2 = -iVar4;
    if (-1 < iVar4) {
      iVar2 = iVar4;
    }
    if (iVar1 < iVar2) {
      iVar3 = iVar4;
    }
  }
  return iVar3;
}



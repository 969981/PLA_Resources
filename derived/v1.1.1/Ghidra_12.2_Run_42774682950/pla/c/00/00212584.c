/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00212584; name: FUN_00212584
 */


int FUN_00212584(long param_1,byte param_2,int param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  if (param_3 == 0) {
    iVar3 = -0x1f5;
  }
  else {
    lVar4 = FUN_0020c738(param_1 + 0x890,0x98);
    if (lVar4 == 0) {
      iVar3 = -0x385;
    }
    else {
      FUN_00211334();
      uVar1 = *param_4;
      uVar2 = param_4[1];
      *(undefined1 *)(lVar4 + 0x71) = 0;
      *(undefined8 *)(lVar4 + 0x60) = uVar1;
      *(undefined8 *)(lVar4 + 0x68) = uVar2;
      *(byte *)(lVar4 + 0x70) = param_2 & 1;
      FUN_0020ca18(lVar4,0,param_3);
      iVar3 = FUN_002069b8(param_1,lVar4);
      if (iVar3 != 0) {
        FUN_0020ca34(lVar4);
        FUN_0020c748(param_1 + 0x890,lVar4);
      }
    }
  }
  return iVar3;
}



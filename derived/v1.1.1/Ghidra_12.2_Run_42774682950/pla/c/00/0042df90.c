/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042df90; name: FUN_0042df90
 */


long * FUN_0042df90(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_1 == (long *)0x0) {
    uVar3 = 0x43;
    uVar4 = 0x235;
  }
  else {
    if (*(long *)(*param_1 + 0x50) != 0) {
      plVar2 = (long *)FUN_004002a0(0x30,"external/openssl/crypto/ec/ec_lib.c",0x23d);
      if (plVar2 == (long *)0x0) {
        FUN_004014b0(0x10,0x79,0x41,"external/openssl/crypto/ec/ec_lib.c",0x23f);
        return (long *)0x0;
      }
      lVar5 = *param_1;
      *plVar2 = lVar5;
      *(int *)(plVar2 + 1) = (int)param_1[4];
      iVar1 = (**(code **)(lVar5 + 0x50))(plVar2);
      if (iVar1 == 0) {
        FUN_00400420(plVar2,"external/openssl/crypto/ec/ec_lib.c",0x247);
        return (long *)0x0;
      }
      return plVar2;
    }
    uVar3 = 0x42;
    uVar4 = 0x239;
  }
  FUN_004014b0(0x10,0x79,uVar3,"external/openssl/crypto/ec/ec_lib.c",uVar4);
  return (long *)0x0;
}



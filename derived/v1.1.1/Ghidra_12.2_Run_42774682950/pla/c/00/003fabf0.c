/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fabf0; name: FUN_003fabf0
 */


undefined4 FUN_003fabf0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  undefined8 local_38;
  
  FUN_00443d70();
  uVar4 = FUN_00403d80();
  iVar1 = FUN_00407950(param_1);
  if (0 < iVar1) {
    iVar7 = 0;
    do {
      uVar5 = FUN_00407970(param_1,iVar7);
      iVar2 = FUN_004e3220(uVar4,uVar5);
      if (iVar2 == 0) {
        FUN_00403ee0(uVar4);
        return 7;
      }
      iVar7 = iVar7 + 1;
    } while (iVar1 != iVar7);
  }
  lVar6 = FUN_00404920(uVar4,3,0,&local_38);
  if (lVar6 < 1) {
    uVar3 = 7;
  }
  else {
    uVar3 = FUN_003f4be0("x509_pem_cert_chain",local_38,lVar6,param_2);
  }
  FUN_00403ee0(uVar4);
  return uVar3;
}



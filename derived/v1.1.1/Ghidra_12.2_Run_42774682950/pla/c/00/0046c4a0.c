/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046c4a0; name: FUN_0046c4a0
 */


void FUN_0046c4a0(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  FUN_00407010(param_1[3]);
  FUN_004078c0(param_1[4],&LAB_0046c560);
  puVar1 = PTR_FUN_043744c0;
  if (0 < *(int *)(param_1 + 1)) {
    puVar3 = (undefined8 *)*param_1;
    iVar2 = 0;
    do {
      FUN_00460a80(*puVar3);
      FUN_004078c0(puVar3[1],puVar1);
      FUN_0046d300(puVar3[2]);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 1));
  }
  FUN_004078c0(param_1[2],PTR_FUN_04374408);
  FUN_00400420(*param_1,"external/openssl/crypto/x509v3/pcy_tree.c",0x271);
  FUN_00400420(param_1,"external/openssl/crypto/x509v3/pcy_tree.c",0x272);
  return;
}



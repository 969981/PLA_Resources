/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f0810; name: FUN_004f0810
 */


undefined8 FUN_004f0810(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  uVar2 = FUN_004f0590();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if (*(int *)(param_1 + 0x640) != -1) {
    pcVar5 = *(code **)(*(long *)(param_1 + 0x598) + 0x210);
    if (pcVar5 != (code *)0x0) {
      iVar1 = (*pcVar5)(param_1,*(undefined8 *)(*(long *)(param_1 + 0x598) + 0x218));
      if (iVar1 == 0) {
        uVar2 = 0x71;
        uVar3 = 0x148;
        uVar4 = 0xb11;
      }
      else {
        if (-1 < iVar1) {
          return 1;
        }
        uVar2 = 0x50;
        uVar3 = 0x41;
        uVar4 = 0xb17;
      }
      FUN_004c99a0(param_1,uVar2,0x1ba,uVar3,"external/openssl/ssl/statem/statem_clnt.c",uVar4);
      return 0;
    }
  }
  return 1;
}



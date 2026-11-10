/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8e8f0; name: FUN_02e8e8f0
 */


void FUN_02e8e8f0(undefined4 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    uVar2 = *param_1;
    uVar4 = *(undefined8 *)(param_1 + 2);
    uVar5 = *(undefined8 *)(param_1 + 0x12);
    lVar1 = DAT_0440a148 + 0xf8;
    *(undefined4 *)(DAT_0440a148 + 0xf4) = 1;
    FUN_02e9823c(lVar1,lVar3,uVar2,uVar4,1,uVar5);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



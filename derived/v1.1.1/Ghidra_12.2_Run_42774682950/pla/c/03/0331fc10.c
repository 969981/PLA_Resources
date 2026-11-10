/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331fc10; name: FUN_0331fc10
 */


uint FUN_0331fc10(undefined4 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_10f0 [128];
  undefined1 auStack_1050 [4096];
  
  if (PTR_FUN_0434fc18 == (undefined *)0x0) {
    uVar1 = 1;
  }
  else {
    FUN_032c4730(auStack_1050,0x1000,0xffffffff,param_2,auStack_10f0 + 0x80);
    uVar1 = (*(code *)PTR_FUN_0434fc18)
                      (*param_1,*(undefined8 *)(param_1 + 2),param_1[1],*(undefined8 *)(param_1 + 4)
                       ,*(undefined8 *)(param_1 + 6),auStack_1050);
  }
  return uVar1 & 1;
}



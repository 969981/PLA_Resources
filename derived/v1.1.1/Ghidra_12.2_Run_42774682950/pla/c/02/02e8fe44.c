/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8fe44; name: FUN_02e8fe44
 */


undefined8 FUN_02e8fe44(long param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  FUN_02e94e64();
  uVar3 = *param_2;
  if (1 < uVar3) {
    if (uVar3 - 2 < 2) {
      uVar3 = param_2[0xe];
      if (param_2[0xc] != 1) {
        uVar3 = 0;
      }
      goto LAB_02e8fe6c;
    }
    if (1 < uVar3 - 6) {
      uVar3 = 0;
      goto LAB_02e8fe6c;
    }
  }
  uVar3 = param_2[1];
LAB_02e8fe6c:
  uVar4 = *(undefined8 *)(param_2 + 0xc);
  uVar1 = *(undefined8 *)(param_2 + 6);
  uVar2 = *(undefined8 *)(param_2 + 8);
  if (param_2[10] != 2) {
    uVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0xf4) = 1;
  FUN_02e9823c(param_1 + 0xf8,uVar1,uVar3,uVar4,1,uVar2);
  return 1;
}



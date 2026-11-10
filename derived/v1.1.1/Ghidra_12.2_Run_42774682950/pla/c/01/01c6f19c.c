/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c6f19c; name: FUN_01c6f19c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c6f19c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_01c6f24c();
  *param_1 = &PTR_LAB_0424cc58;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = &DAT_cbf29ce484222645;
  param_1[0x18] = &DAT_03996322;
  param_1[9] = &PTR_LAB_0424cca8;
  param_1[10] = &PTR_LAB_0424ccf0;
  uVar2 = _UNK_03888fc8;
  uVar1 = _DAT_03888fc0;
  *(undefined4 *)(param_1 + 0x1b) = 1;
  param_1[0x1e] = 0x3f800000;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0x3f8000003f800000;
  param_1[0x24] = 0x3f8000003f800000;
  param_1[0x28] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0x42480000;
  param_1[0x1d] = uVar2;
  param_1[0x1c] = uVar1;
  uVar2 = DAT_0388a148;
  uVar1 = DAT_0388a140;
  param_1[0x23] = DAT_0388a148;
  param_1[0x22] = uVar1;
  param_1[0x27] = uVar2;
  param_1[0x26] = uVar1;
  param_1[0x2b] = uVar2;
  param_1[0x2a] = uVar1;
  FUN_01c6f4ac(param_1,param_2);
  return;
}



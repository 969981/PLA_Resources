/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002305b0; name: FUN_002305b0
 */


void FUN_002305b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  
  uVar4 = nn::os::GetSystemTick();
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoWare_Ui2d-11_4_0-Release");
  FUN_00232610(param_1,param_2,param_3);
  *(undefined **)PTR_DAT_04372a88 = PTR_PTR_04372a90;
  puVar3 = PTR_DAT_04372a98;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  uVar1 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
  uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)PTR_DAT_04372a98 = uVar4;
  *(uint *)(puVar3 + 4) = uVar1;
  *(uint *)(puVar3 + 8) = uVar2;
  *(uint *)(puVar3 + 0xc) = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  return;
}



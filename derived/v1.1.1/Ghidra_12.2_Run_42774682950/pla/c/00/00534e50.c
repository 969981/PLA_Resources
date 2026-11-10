/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00534e50; name: FUN_00534e50
 */


void FUN_00534e50(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_002e4780(param_1,"grpc.enable_deadline_checking");
  uVar1 = FUN_002e5050(param_1);
  FUN_002e4ee0(uVar2,~uVar1 & 1);
  return;
}



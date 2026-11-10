/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006756d8; name: FUN_006756d8
 */


void FUN_006756d8(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  bVar1 = FUN_006544d0(param_2);
  *param_1 = bVar1 & 1;
  FUN_00654534(param_1 + 8,param_2,&DAT_039b2ff6);
  FUN_00654534(param_1 + 0x28,param_2,&DAT_038991ba);
                    /* try { // try from 0067572c to 0067573b has its CatchHandler @ 006757bc */
  uVar2 = FUN_00654518(param_2,&DAT_0394a393);
  *(undefined2 *)(param_1 + 0x48) = uVar2;
  FUN_00654534(param_1 + 0x50,param_2,&DAT_038d29ed);
                    /* try { // try from 00675758 to 00675767 has its CatchHandler @ 00675790 */
  uVar3 = FUN_00654518(param_2,&DAT_038a2cce);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  FUN_00654574(param_1 + 0x78,param_2,&DAT_0391200e);
  return;
}



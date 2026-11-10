/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3aa00; name: FUN_02a3aa00
 */


void FUN_02a3aa00(long param_1,undefined2 param_2,undefined4 param_3,undefined4 *param_4)

{
  switch(param_3) {
  case 1:
    FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),0x9d,param_2,*param_4,0xffff0000);
    return;
  case 2:
    FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),0x9d,param_2,*param_4,param_4[1],0xffff0000);
    return;
  case 3:
    FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),0x9d,param_2,*param_4,param_4[1],param_4[2],
                 0xffff0000);
    return;
  case 4:
    FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),0x9d,param_2,*param_4,param_4[1],param_4[2],
                 param_4[3],0xffff0000);
    return;
  default:
    FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),0x9d,param_2,0xffff0000);
    return;
  }
}



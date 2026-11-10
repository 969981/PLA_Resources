/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3bf4c; name: FUN_02a3bf4c
 */


void FUN_02a3bf4c(long param_1,uint *param_2,uint *param_3,undefined2 *param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_2;
  if (*param_3 != 0) {
    uVar1 = *param_3;
  }
  uVar2 = param_3[5];
  if ((uVar2 & 0x1f) != 0) {
    FUN_02a3fae8(*(undefined8 *)(param_1 + 0x18),*param_4,0x7f,uVar2 & 0x1f,uVar2 >> 5 & 0x1f,
                 uVar2 >> 10 & 0x1f,uVar2 >> 0xf & 0x1f,uVar2 >> 0x14 & 0x1f,uVar2 >> 0x19 & 0x1f);
    param_3[5] = 0;
  }
  if (param_4[1] == -1) {
    FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x6e,(char)param_3[1],
                 *(undefined1 *)((long)param_3 + 5),uVar1 & 0xffff,
                 *(undefined1 *)((long)param_2 + 10),0,7,*(undefined1 *)((long)param_3 + 6),
                 (char)param_2[8],(char)param_2[5]);
  }
  else {
    FUN_02a3fae8(*(undefined8 *)(param_1 + 0x18),param_4[1],0x6e,(char)param_3[1],
                 *(undefined1 *)((long)param_3 + 5),uVar1,*(undefined1 *)((long)param_2 + 10),
                 *(undefined1 *)((long)param_3 + 0xf),param_3[4],*(undefined1 *)((long)param_3 + 6),
                 param_2[8],param_2[5]);
  }
  *(undefined1 *)((long)param_3 + 6) = 0;
  *(undefined1 *)((long)param_3 + 10) = 1;
  return;
}



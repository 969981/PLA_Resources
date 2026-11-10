/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00851b2c; name: FUN_00851b2c
 */


void FUN_00851b2c(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x78) == 5) {
    if (*(char *)(param_1 + 0xca) != 'd') {
      return;
    }
    *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined2 *)(param_1 + 0xb0) = 0xffff;
    *(undefined8 *)(param_1 + 0xb4) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 200) = 0;
    *(undefined1 *)(param_1 + 0xca) = 0;
    memset((void *)(param_1 + 0x94),0xff,0x18);
    *(undefined1 *)(param_1 + 0xca) = 100;
    uVar2 = 6;
  }
  else {
    if (*(int *)(param_1 + 0x78) != 2) {
      return;
    }
    uVar1 = FUN_008519b0(param_1,*(undefined1 *)(param_1 + 0xb0));
    if ((uVar1 & 1) == 0) {
      *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined2 *)(param_1 + 0xb0) = 0xffff;
      *(undefined8 *)(param_1 + 0xb4) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined2 *)(param_1 + 200) = 0;
      *(undefined1 *)(param_1 + 0xca) = 0;
      memset((void *)(param_1 + 0x94),0xff,0x18);
      uVar2 = 0xc;
    }
    else {
      uVar1 = FUN_00842070(*(undefined8 *)(param_1 + 0x70),*(undefined2 *)(param_1 + 200));
      if ((uVar1 & 1) == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined2 *)(param_1 + 0xb0) = 0xffff;
      *(undefined8 *)(param_1 + 0xb4) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined2 *)(param_1 + 200) = 0;
      *(undefined1 *)(param_1 + 0xca) = 0;
      memset((void *)(param_1 + 0x94),0xff,0x18);
      *(undefined1 *)(param_1 + 0xca) = 100;
      uVar2 = 3;
    }
  }
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  return;
}



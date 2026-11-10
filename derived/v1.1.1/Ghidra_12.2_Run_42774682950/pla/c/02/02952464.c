/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02952464; name: FUN_02952464
 */


void FUN_02952464(long param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  char cVar4;
  
  *(undefined1 *)(param_1 + 0x386) = 0;
  *(undefined2 *)(param_1 + 900) = 0;
  FUN_0295124c();
  *(undefined1 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x2f4);
  *(undefined4 *)(param_1 + 0x307) = *(undefined4 *)(param_1 + 0x2fb);
  cVar4 = (int)*(undefined8 *)(param_1 + 0x2f4) != 0;
  if ((bool)cVar4) {
    *(undefined1 *)(param_1 + 0x368) = 1;
  }
  *(undefined1 *)(param_1 + 0x30c) = 1;
  *(undefined8 *)(param_1 + 0x31c) = *(undefined8 *)(param_1 + 0x310);
  *(undefined4 *)(param_1 + 0x323) = *(undefined4 *)(param_1 + 0x317);
  if ((int)*(undefined8 *)(param_1 + 0x310) != 0) {
    cVar4 = cVar4 + '\x01';
    *(char *)(param_1 + 0x368) = cVar4;
  }
  *(undefined1 *)(param_1 + 0x328) = 1;
  *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 0x32c);
  *(undefined4 *)(param_1 + 0x33f) = *(undefined4 *)(param_1 + 0x333);
  if ((int)*(undefined8 *)(param_1 + 0x32c) != 0) {
    cVar4 = cVar4 + '\x01';
    *(char *)(param_1 + 0x368) = cVar4;
  }
  *(undefined1 *)(param_1 + 0x344) = 1;
  *(undefined8 *)(param_1 + 0x354) = *(undefined8 *)(param_1 + 0x348);
  *(undefined4 *)(param_1 + 0x35b) = *(undefined4 *)(param_1 + 0x34f);
  if ((int)*(undefined8 *)(param_1 + 0x348) != 0) {
    *(char *)(param_1 + 0x368) = cVar4 + '\x01';
  }
  *(byte *)(param_1 + 0x307) = *(byte *)(param_1 + 0x307) & 0xf0;
  *(byte *)(param_1 + 0x2fb) = *(byte *)(param_1 + 0x2fb) & 0xf0;
  *(byte *)(param_1 + 0x323) = *(byte *)(param_1 + 0x323) & 0xf0;
  *(byte *)(param_1 + 0x317) = *(byte *)(param_1 + 0x317) & 0xf0;
  *(byte *)(param_1 + 0x33f) = *(byte *)(param_1 + 0x33f) & 0xf0;
  *(byte *)(param_1 + 0x333) = *(byte *)(param_1 + 0x333) & 0xf0;
  *(byte *)(param_1 + 0x35b) = *(byte *)(param_1 + 0x35b) & 0xf0;
  *(byte *)(param_1 + 0x34f) = *(byte *)(param_1 + 0x34f) & 0xf0;
  *(undefined1 *)(param_1 + 0x36d) = 0x12;
  *(undefined1 *)(param_1 + 0x360) = 1;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined2 *)(param_1 + 0x374) = 0;
  *(undefined4 *)(param_1 + 0x38f) = 0;
  *(undefined4 *)(param_1 + 0x38c) = 0;
  if (*(char *)(param_1 + 0x49c) != '\x1f') {
    *(undefined1 *)(param_1 + 0x49c) = 0x1f;
    *(undefined4 *)(param_1 + 0x498) = 0;
  }
  uVar1 = *(ushort *)(param_1 + 0x87);
  *(undefined1 *)(param_1 + 0x28e) = 0x1f;
  *(ushort *)(param_1 + 0x87) = uVar1 & 0xffbf;
  *(undefined1 *)(param_1 + 0x36e) = 1;
  if ((*(byte *)(param_1 + 0x388) >> 6 & 1) == 0) {
    *(undefined2 *)(param_1 + 0x496) = 0;
    memset((void *)(param_1 + 0xd0),0,0x168);
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 0x265) = 0;
    *(undefined8 *)(param_1 + 0x240) = 0;
    *(undefined8 *)(param_1 + 0x248) = 0;
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 600) = 0;
    if (*(char *)(param_1 + 0x2e4) != '\x01') {
      *(undefined1 *)(param_1 + 0x2e4) = 1;
      *(undefined1 *)(param_1 + 0x2e7) = 0;
    }
    if (*(char *)(param_1 + 0x2e5) != '\x01') {
      *(undefined1 *)(param_1 + 0x2e5) = 1;
      *(undefined1 *)(param_1 + 0x2e8) = 0;
    }
    if (*(char *)(param_1 + 0x2e6) != '\x01') {
      *(undefined1 *)(param_1 + 0x2e6) = 1;
      *(undefined1 *)(param_1 + 0x2e9) = 0;
    }
    *(undefined4 *)(param_1 + 0x387) = 0;
  }
  if ((uVar1 >> 8 & 1) == 0) {
    *(char *)(param_1 + 0x369) = (char)(uVar1 & 0x1f);
    *(undefined2 *)(param_1 + 0x364) = *(undefined2 *)(param_1 + 0x7a);
    FUN_02c62fcc(*(undefined8 *)(param_1 + 0x60),uVar1 & 0x1f,0);
    return;
  }
  uVar2 = FUN_02c6f924(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98));
  *(undefined1 *)(param_1 + 0x369) = uVar2;
  uVar3 = FUN_02c69538(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98));
  *(undefined2 *)(param_1 + 0x364) = uVar3;
  return;
}



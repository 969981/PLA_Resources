/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0299d334; name: FUN_0299d334
 */


ulong FUN_0299d334(int *param_1,int param_2,undefined8 param_3,undefined8 *param_4,long param_5)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ulong __n;
  ulong uVar5;
  char *pcVar6;
  char local_58 [8];
  undefined4 local_50;
  undefined2 local_4c;
  byte local_4a;
  byte local_48 [4];
  byte local_44 [4];
  
  cVar1 = (char)param_1[1];
  if (*param_1 == 0) {
    local_58[0] = cVar1;
    __n = (ulong)(cVar1 != '\x06');
    if (cVar1 == '\x06') {
      return 0;
    }
  }
  else {
    if (cVar1 == '\x06') {
      return 0;
    }
    local_4a = 0;
    local_50 = 0x6060606;
    local_4c = 0x606;
    if (param_2 == 1) {
      FUN_0299c054(param_1,&local_50);
      bVar2 = local_4a;
    }
    else if (param_2 == 2) {
      FUN_0299c6e8(param_1,&local_50);
      bVar2 = local_4a;
    }
    else {
      FUN_0299beac(param_1,&local_50);
      bVar2 = local_4a;
    }
    __n = (ulong)bVar2;
    local_4a = bVar2;
    if (__n != 0) {
      memcpy(local_58,&local_50,__n);
    }
    if (bVar2 == 0) {
      return 0;
    }
  }
  uVar5 = 0;
  pcVar6 = local_58;
  do {
    FUN_02947b84(*param_4,*pcVar6,local_44,local_48);
    uVar3 = (ulong)local_44[0];
    if ((((uVar3 != 5) && (local_48[0] < *(byte *)(param_4 + uVar3 * 7 + 7))) &&
        (lVar4 = param_4[uVar3 * 7 + (ulong)local_48[0] + 1], lVar4 != 0)) &&
       (*(short *)(lVar4 + 0x74) != 0)) {
      uVar3 = uVar5 & 0xff;
      uVar5 = (ulong)((int)uVar5 + 1);
      *(undefined1 *)(param_5 + uVar3) = *(undefined1 *)(lVar4 + 0x7d);
    }
    __n = __n - 1;
    pcVar6 = pcVar6 + 1;
  } while (__n != 0);
  return uVar5;
}



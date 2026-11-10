/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029db038; name: FUN_029db038
 */


void FUN_029db038(long param_1,char *param_2,long *param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_68;
  byte local_60;
  undefined1 local_5f;
  undefined4 local_5c;
  char local_58 [8];
  
  lVar6 = *param_3;
  lVar5 = param_3[1];
  lVar7 = *(long *)(*(long *)(param_1 + 0x60) + 0x660);
  local_60 = 1;
  if (**(int **)(*(long *)(lVar7 + 8) + 0x58) == 0) {
    lVar8 = *(long *)(*(long *)(lVar7 + 0x60) + 0x600);
    uVar4 = FUN_02951890(lVar6,7);
    if ((uVar4 & 1) == 0) {
      local_60 = FUN_02973720(*(undefined8 *)(lVar8 + 0x38),lVar6);
      local_60 = local_60 & 1;
    }
    else {
      local_60 = 1;
    }
  }
  local_58[0] = '\0';
  local_5f = 1;
  local_68 = lVar6;
  local_5c = (int)lVar5;
  FUN_029db498(*(undefined8 *)(*(long *)(lVar7 + 0x60) + 0x620),local_58,&local_68);
  *param_2 = local_58[0];
  if (local_58[0] != '\0') {
    return;
  }
  bVar3 = *(byte *)(*param_3 + 0x7d);
  cVar1 = '\x03';
  if (0x17 < bVar3) {
    cVar1 = (bVar3 < 0x1e) << 2;
  }
  cVar2 = '\x01';
  if (0x11 < bVar3) {
    cVar2 = cVar1;
  }
  cVar1 = '\x02';
  if (0xb < bVar3) {
    cVar1 = cVar2;
  }
  cVar2 = '\0';
  if (5 < bVar3) {
    cVar2 = cVar1;
  }
  if (cVar2 != *(char *)(*(long *)(param_1 + 8) + 0x130)) {
    FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0x119,bVar3,0xffff0000);
    return;
  }
  FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x239,0xffff0000);
  lVar5 = *(long *)(param_1 + 0x20);
  lVar6 = *(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0x10) + 0x1c8);
  uVar4 = *(ulong *)(lVar6 + 0x10);
  if (uVar4 < 0x1e) {
    *(ulong *)(lVar6 + 0x10) = uVar4 + 1;
  }
  FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0x2b,1);
  return;
}



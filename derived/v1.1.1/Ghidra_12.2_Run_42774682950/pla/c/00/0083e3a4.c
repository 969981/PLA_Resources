/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083e3a4; name: FUN_0083e3a4
 */


void FUN_0083e3a4(undefined8 param_1)

{
  undefined *puVar1;
  undefined2 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_620 [4];
  undefined1 auStack_610 [32];
  undefined1 local_5f0;
  ulong local_5ef;
  undefined2 local_5e7;
  undefined1 local_5e5;
  undefined1 local_5e4;
  undefined1 auStack_5e3 [1459];
  undefined2 local_28 [2];
  char local_24;
  
  puVar1 = PTR_DAT_04377550;
  lVar6 = *(long *)PTR_DAT_04377550;
  local_5f0 = 0;
  uVar4 = FUN_0083fd98(lVar6 + 0x178);
  uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  local_5ef = uVar4 >> 0x20 | uVar4 << 0x20;
  uVar2 = FUN_0083fda0(lVar6 + 0x178);
  local_5e5 = (undefined1)((ushort)uVar2 >> 8);
  local_5e4 = (undefined1)uVar2;
  local_5e7 = 0;
  iVar3 = FUN_0083e488(param_1,auStack_5e3);
  if (local_24 != '\0') {
    FUN_0083fd74(auStack_610,*(long *)puVar1 + 0x1b8);
    uVar5 = FUN_00847424(param_1);
    local_620[0] = 0xa0000000;
    local_28[0] = 0;
    lVar6 = FUN_008469d8(uVar5,local_620,auStack_610,iVar3 - (int)&local_5f0,local_28,
                         0x1000000000000,0);
    if (lVar6 != 0) {
      uVar5 = FUN_00847424(param_1);
      FUN_0084695c(local_620,uVar5,&local_5f0);
    }
  }
  return;
}



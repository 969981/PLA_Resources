/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293f1f0; name: FUN_0293f1f0
 */


void FUN_0293f1f0(ulong param_1,long param_2,ulong *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar4 = (uint)param_1;
  switch(uVar4 & 0xf) {
  case 1:
    uVar7 = (ulong)((uint)*(byte *)(param_2 + 0x7d) << 3 | 1) & 0xff;
    uVar6 = (ulong)(uVar4 << 10) & 0xfc000 | param_1 >> 2 & 0x3f00;
    goto LAB_0293f314;
  case 2:
    uVar2 = (uVar4 & 0xffff) >> 4 & 0x3f;
    uVar3 = uVar4 >> 10 & 0x3f;
    uVar4 = uVar3;
    if (uVar2 <= uVar3) {
      uVar4 = uVar2;
      uVar2 = uVar3;
    }
    iVar5 = FUN_02954744(DAT_043ecde0,(uVar2 - uVar4) + 1);
    uVar6 = (ulong)((iVar5 + uVar4) * 0x100 & 0x3f00) |
            (ulong)((uint)*(byte *)(param_2 + 0x7d) << 3 | 2) & 0xfe;
    break;
  case 3:
    uVar6 = (ulong)((uint)*(byte *)(param_2 + 0x7d) << 3 | 3) & 0xff |
            ((ulong)*(byte *)(param_2 + 0x7d) & 0x3f) << 8;
    break;
  case 4:
    uVar2 = (uVar4 & 0xffff) >> 4 & 0x3f;
    uVar3 = uVar4 >> 10 & 0x3f;
    uVar4 = uVar3;
    if (uVar2 <= uVar3) {
      uVar4 = uVar2;
      uVar2 = uVar3;
    }
    bVar1 = *(byte *)(param_2 + 0x7d);
    iVar5 = FUN_02954744(DAT_043ecde0,(uVar2 - uVar4) + 1);
    uVar7 = (ulong)((iVar5 + uVar4) * 0x100 & 0x3f00);
    uVar6 = (ulong)((uint)bVar1 << 3 | 4) & 0xfc | ((ulong)bVar1 & 0x3f) << 0xe;
LAB_0293f314:
    uVar6 = uVar6 | uVar7;
    break;
  default:
    uVar6 = 0xf8;
  }
  *param_3 = uVar6;
  return;
}



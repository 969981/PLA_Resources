/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0303ee44; name: FUN_0303ee44
 */


void FUN_0303ee44(long param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  cVar3 = param_2[2];
  *(undefined4 *)(param_1 + 0x338) = 0x78;
  *(undefined4 *)(param_1 + 0x138) = 0x28;
  *(undefined4 *)(param_1 + 0x78) = 10;
  *(undefined4 *)(param_1 + 0xb8) = 0x14;
  bVar4 = cVar3 != '\0';
  *(uint *)(param_1 + 0x33c) =
       *(uint *)(param_1 + 0x33c) & 0xfffff800 |
       *(uint *)(param_1 + 0x33c) & 0x3ff | (uint)bVar4 << 10;
  *(undefined4 *)(param_1 + 0x378) = 0x82;
  *(uint *)(param_1 + 0x37c) =
       *(uint *)(param_1 + 0x37c) & 0xfffff800 |
       *(uint *)(param_1 + 0x37c) & 0x3ff | (uint)bVar4 << 10;
  *(undefined4 *)(param_1 + 0x3b8) = 0x8c;
  uVar5 = (uint)bVar4;
  *(uint *)(param_1 + 0x3bc) =
       *(uint *)(param_1 + 0x3bc) & 0xfffff800 | *(uint *)(param_1 + 0x3bc) & 0x3ff | uVar5 << 10;
  *(undefined4 *)(param_1 + 0x3f8) = 0x96;
  *(uint *)(param_1 + 0x3fc) =
       *(uint *)(param_1 + 0x3fc) & 0xfffff800 | *(uint *)(param_1 + 0x3fc) & 0x3ff | uVar5 << 10;
  *(undefined4 *)(param_1 + 0x438) = 0xa0;
  *(uint *)(param_1 + 0x43c) =
       *(uint *)(param_1 + 0x43c) & 0xfffff800 | *(uint *)(param_1 + 0x43c) & 0x3ff | uVar5 << 10;
  *(undefined4 *)(param_1 + 0x478) = 0xaa;
  *(uint *)(param_1 + 0x47c) =
       *(uint *)(param_1 + 0x47c) & 0xfffff800 | *(uint *)(param_1 + 0x47c) & 0x3ff | uVar5 << 10;
  *(undefined4 *)(param_1 + 0x4b8) = 0xb4;
  uVar5 = (uint)bVar4;
  *(uint *)(param_1 + 0x4bc) =
       *(uint *)(param_1 + 0x4bc) & 0xfffff800 | *(uint *)(param_1 + 0x4bc) & 0x3ff | uVar5 << 10;
  *(undefined4 *)(param_1 + 0x4f8) = 0xbe;
  *(uint *)(param_1 + 0x4fc) =
       *(uint *)(param_1 + 0x4fc) & 0xfffff800 | *(uint *)(param_1 + 0x4fc) & 0x3ff | uVar5 << 10;
  *(undefined4 *)(param_1 + 0x538) = 200;
  *(uint *)(param_1 + 0x53c) =
       *(uint *)(param_1 + 0x53c) & 0xfffff800 | *(uint *)(param_1 + 0x53c) & 0x3ff | uVar5 << 10;
  *(undefined4 *)(param_1 + 0x578) = 0xd2;
  *(uint *)(param_1 + 0x57c) =
       *(uint *)(param_1 + 0x57c) & 0xfffff800 | *(uint *)(param_1 + 0x57c) & 0x3ff | uVar5 << 10;
  *(undefined4 *)(param_1 + 0x5b8) = 0xdc;
  *(uint *)(param_1 + 0xbc) =
       *(uint *)(param_1 + 0xbc) & 0xfffff800 | *(uint *)(param_1 + 0xbc) & 0x3ff | uVar5 << 10;
  *(uint *)(param_1 + 0xfc) =
       *(uint *)(param_1 + 0xfc) & 0xfffff800 | *(uint *)(param_1 + 0xfc) & 0x3ff | uVar5 << 10;
  *(uint *)(param_1 + 0x13c) =
       *(uint *)(param_1 + 0x13c) & 0xfffff800 | *(uint *)(param_1 + 0x13c) & 0x3ff | uVar5 << 10;
  *(undefined4 *)(param_1 + 0x178) = 0x32;
  uVar1 = *(uint *)(param_1 + 0x17c);
  uVar6 = (uint)bVar4;
  *(uint *)(param_1 + 0x17c) = uVar1 & 0xfffff800 | uVar1 & 0x3ff | uVar6 << 10;
  *(undefined4 *)(param_1 + 0x1b8) = 0x3c;
  *(uint *)(param_1 + 0x1bc) =
       *(uint *)(param_1 + 0x1bc) & 0xfffff800 | *(uint *)(param_1 + 0x1bc) & 0x3ff | uVar6 << 10;
  *(undefined4 *)(param_1 + 0x1f8) = 0x46;
  *(uint *)(param_1 + 0x1fc) =
       *(uint *)(param_1 + 0x1fc) & 0xfffff800 | *(uint *)(param_1 + 0x1fc) & 0x3ff | uVar6 << 10;
  *(undefined4 *)(param_1 + 0x238) = 0x50;
  *(uint *)(param_1 + 0x23c) =
       *(uint *)(param_1 + 0x23c) & 0xfffff800 | *(uint *)(param_1 + 0x23c) & 0x3ff | uVar6 << 10;
  *(undefined4 *)(param_1 + 0x278) = 0x5a;
  *(uint *)(param_1 + 0x27c) =
       *(uint *)(param_1 + 0x27c) & 0xfffff800 | *(uint *)(param_1 + 0x27c) & 0x3ff | uVar6 << 10;
  *(undefined4 *)(param_1 + 0x2b8) = 100;
  *(uint *)(param_1 + 700) =
       *(uint *)(param_1 + 700) & 0xfffff800 | *(uint *)(param_1 + 700) & 0x3ff | uVar6 << 10;
  uVar8 = (uint)bVar4 << 10;
  *(uint *)(param_1 + 0x5bc) =
       *(uint *)(param_1 + 0x5bc) & 0xfffff800 | *(uint *)(param_1 + 0x5bc) & 0x3ff | uVar5 << 10;
  *(undefined4 *)(param_1 + 0x5f8) = 0xe6;
  *(uint *)(param_1 + 0x5fc) =
       *(uint *)(param_1 + 0x5fc) & 0xfffff800 | *(uint *)(param_1 + 0x5fc) & 0x3ff | uVar6 << 10;
  *(undefined4 *)(param_1 + 0x638) = 0xf0;
  *(uint *)(param_1 + 0x63c) =
       *(uint *)(param_1 + 0x63c) & 0xfffff800 | *(uint *)(param_1 + 0x63c) & 0x3ff | uVar6 << 10;
  *(undefined4 *)(param_1 + 0x678) = 0xfa;
  *(uint *)(param_1 + 0x67c) =
       *(uint *)(param_1 + 0x67c) & 0xfffff800 | *(uint *)(param_1 + 0x67c) & 0x3ff | uVar6 << 10;
  *(undefined4 *)(param_1 + 0x6b8) = 0x104;
  *(uint *)(param_1 + 0x6bc) =
       *(uint *)(param_1 + 0x6bc) & 0xfffff800 | *(uint *)(param_1 + 0x6bc) & 0x3ff | uVar6 << 10;
  *(undefined4 *)(param_1 + 0x6f8) = 0x10e;
  *(uint *)(param_1 + 0x6fc) =
       *(uint *)(param_1 + 0x6fc) & 0xfffff800 | *(uint *)(param_1 + 0x6fc) & 0x3ff | uVar6 << 10;
  *(undefined4 *)(param_1 + 0x738) = 0x118;
  *(uint *)(param_1 + 0x73c) =
       *(uint *)(param_1 + 0x73c) & 0xfffff800 | *(uint *)(param_1 + 0x73c) & 0x3ff | uVar6 << 10;
  *(undefined4 *)(param_1 + 0x778) = 0x122;
  *(undefined4 *)(param_1 + 0xf8) = 0x1e;
  uVar2 = *(uint *)(param_1 + 0x3c);
  uVar5 = uVar2 & 0x3ff | uVar6 << 10;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(uint *)(param_1 + 0x3c) = uVar2 & 0xfffff800 | uVar5;
  uVar7 = *(uint *)(param_1 + 0x7c) & 0xfffff800 | *(uint *)(param_1 + 0x7c) & 0x3ff | uVar6 << 10;
  *(uint *)(param_1 + 0x3c) = uVar2 & 0xfffff000 | uVar5;
  *(uint *)(param_1 + 0x7c) = uVar7;
  *(uint *)(param_1 + 0x7c) = uVar7 & 0xfffeffbf;
  *(uint *)(param_1 + 0x80) = uVar8 | *(uint *)(param_1 + 0x80) | 0x21808;
  *(undefined4 *)(param_1 + 0x84) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x2f8) = 0x6e;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x78);
  uVar5 = 0x20880;
  *(uint *)(param_1 + 0x2fc) =
       *(uint *)(param_1 + 0x2fc) & 0xfffff800 | *(uint *)(param_1 + 0x2fc) & 0x3ff | uVar6 << 10;
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x88);
  *(uint *)(param_1 + 0xc0) = (uint)*(undefined8 *)(param_1 + 0x80) | 0x200;
  uVar7 = (uint)bVar4;
  *(uint *)(param_1 + 0x77c) =
       *(uint *)(param_1 + 0x77c) & 0xfffff800 | *(uint *)(param_1 + 0x77c) & 0x3ff | uVar7 << 10;
  *(undefined4 *)(param_1 + 0x7b8) = 300;
  *(uint *)(param_1 + 0x7bc) =
       *(uint *)(param_1 + 0x7bc) & 0xfffff800 | *(uint *)(param_1 + 0x7bc) & 0x3ff | uVar7 << 10;
  *(undefined4 *)(param_1 + 0x7f8) = 0x136;
  *(uint *)(param_1 + 0x7fc) =
       *(uint *)(param_1 + 0x7fc) & 0xfffff800 | *(uint *)(param_1 + 0x7fc) & 0x3ff | uVar7 << 10;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x98);
  uVar7 = *(uint *)(param_1 + 0x100) | uVar8;
  *(uint *)(param_1 + 0x100) = uVar7 | 0x20800;
  if (*param_2 == '\0') {
    uVar5 = 0x20808;
  }
  *(uint *)(param_1 + 0x100) = uVar5 | uVar7;
  *(uint *)(param_1 + 0x140) = uVar8 | *(uint *)(param_1 + 0x140) | 0x20880;
  *(uint *)(param_1 + 0x1c0) = uVar8 | *(uint *)(param_1 + 0x1c0) | 0x20a08;
  *(uint *)(param_1 + 0x180) = *(uint *)(param_1 + 0x180) | 0x20902;
  *(uint *)(param_1 + 0x17c) = uVar1 & 0xfffffbff;
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_1 + 400);
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_1 + 0x188);
  *(uint *)(param_1 + 0x200) = *(uint *)(param_1 + 0x200) | 0x80;
  uVar5 = *(uint *)(param_1 + 0x240) | uVar8;
  *(uint *)(param_1 + 0x240) = uVar5 | 0x10040;
  if (param_2[1] != '\0') {
    *(uint *)(param_1 + 0x240) = uVar5 | 0x100c2;
  }
  *(undefined8 *)(param_1 + 0x244) = 0x33c23d70a;
  *(undefined8 *)(param_1 + 0x308) = 0x300000003;
  *(undefined4 *)(param_1 + 0x24c) = 3;
  *(undefined8 *)(param_1 + 0x288) = 0x400000004;
  *(undefined8 *)(param_1 + 0x2c8) = 0x400000004;
  *(uint *)(param_1 + 700) = *(uint *)(param_1 + 700) & 0xfffffbff;
  *(uint *)(param_1 + 0x27c) = *(uint *)(param_1 + 0x27c) & 0xfffffbff;
  *(uint *)(param_1 + 0x2fc) = *(uint *)(param_1 + 0x2fc) & 0xfffffbff;
  *(uint *)(param_1 + 0x280) = *(uint *)(param_1 + 0x280) & 0xfffffbff | 0x180;
  *(uint *)(param_1 + 0x300) = *(uint *)(param_1 + 0x300) & 0xfffefa7f | 0x10180;
  *(uint *)(param_1 + 0x2c0) = *(uint *)(param_1 + 0x2c0) & 0xfffffbff | 0x80;
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_1 + 0x310);
  *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_1 + 0x318);
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x300);
  *(undefined8 *)(param_1 + 0x348) = *(undefined8 *)(param_1 + 0x308);
  *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 0x2f8);
  *(undefined8 *)(param_1 + 0x388) = 0x500000005;
  *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) | 0x2100;
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 2;
  *(uint *)(param_1 + 0x3bc) = *(uint *)(param_1 + 0x3bc) & 0xfffffff7;
  *(uint *)(param_1 + 0x400) = *(uint *)(param_1 + 0x400) | 0x30;
  *(uint *)(param_1 + 0x3fc) = *(uint *)(param_1 + 0x3fc) & 0xfffffff7;
  *(uint *)(param_1 + 0x3c0) = uVar8 | *(uint *)(param_1 + 0x3c0) | 0x10;
  *(uint *)(param_1 + 0x440) = uVar8 | *(uint *)(param_1 + 0x440) | 0x10;
  *(uint *)(param_1 + 0x43c) = *(uint *)(param_1 + 0x43c) & 0xfffffff7;
  *(undefined4 *)(param_1 + 0x454) = 0x5f7ffff0;
  *(undefined4 *)(param_1 + 0x450) = 0x5f7ffff0;
  return;
}



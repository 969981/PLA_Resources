/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001094c0; name: FUN_001094c0
 */


void FUN_001094c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  *(undefined4 *)(param_1 + 0x4d14) = 0x102aabb;
  *(undefined8 *)(param_1 + 0x10) = 0x100000001;
  *(undefined8 *)(param_1 + 0x18) = 0x100000001;
  do {
    lVar2 = param_1 + lVar1;
    lVar1 = lVar1 + 8;
    *(undefined4 *)(lVar2 + 0x22) = 0x2aaa2aaa;
    *(undefined2 *)(lVar2 + 0x20) = 0x2aaa;
    *(undefined2 *)(lVar2 + 0x26) = 0x2aaa;
  } while (lVar1 != 0x180);
  FUN_00109f10(param_1 + 0x41a0);
  *(undefined4 *)(param_1 + 0x4562) = 0x20002000;
  *(undefined2 *)(param_1 + 0x4560) = 0x2000;
  *(undefined2 *)(param_1 + 0x4566) = 0x2000;
  *(undefined4 *)(param_1 + 0x4568) = 0x20002000;
  *(undefined8 *)(param_1 + 0x456c) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4574) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x457c) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4584) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x458c) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4594) = 0x2000200020002000;
  lVar1 = 0;
  *(undefined4 *)(param_1 + 0x459c) = 0x20002000;
  do {
    *(undefined8 *)(param_1 + 0x1a0 + lVar1) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x200);
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + 0x3a0 + lVar1) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x200);
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + 0x5a0 + lVar1) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x200);
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + 0x7a0 + lVar1) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x200);
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + 0x9a0 + lVar1) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x200);
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + 0xba0 + lVar1) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x200);
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + 0xda0 + lVar1) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x200);
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + 4000 + lVar1) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x200);
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + 0x11a0 + lVar1) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x200);
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + 0x13a0 + lVar1) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x200);
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + 0x15a0 + lVar1) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x200);
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + 0x17a0 + lVar1) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x200);
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + 0x19a0 + lVar1) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x200);
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + 0x1ba0 + lVar1) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x200);
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + 0x1da0 + lVar1) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x200);
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + 0x1fa0 + lVar1) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x200);
  lVar1 = param_1 + 0x21a4;
  lVar2 = 0x100;
  do {
    *(undefined8 *)(lVar1 + -4) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
    lVar2 = lVar2 + -4;
  } while (lVar2 != 0);
  lVar1 = param_1 + 0x23a4;
  lVar2 = 0x100;
  do {
    *(undefined8 *)(lVar1 + -4) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
    lVar2 = lVar2 + -4;
  } while (lVar2 != 0);
  lVar1 = param_1 + 0x25a4;
  lVar2 = 0x100;
  do {
    *(undefined8 *)(lVar1 + -4) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
    lVar2 = lVar2 + -4;
  } while (lVar2 != 0);
  lVar1 = param_1 + 0x27a4;
  lVar2 = 0x100;
  do {
    *(undefined8 *)(lVar1 + -4) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
    lVar2 = lVar2 + -4;
  } while (lVar2 != 0);
  lVar1 = param_1 + 0x29a4;
  lVar2 = 0x100;
  do {
    *(undefined8 *)(lVar1 + -4) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
    lVar2 = lVar2 + -4;
  } while (lVar2 != 0);
  lVar1 = param_1 + 0x2ba4;
  lVar2 = 0x100;
  do {
    *(undefined8 *)(lVar1 + -4) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
    lVar2 = lVar2 + -4;
  } while (lVar2 != 0);
  lVar1 = param_1 + 0x2da4;
  lVar2 = 0x100;
  do {
    *(undefined8 *)(lVar1 + -4) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
    lVar2 = lVar2 + -4;
  } while (lVar2 != 0);
  lVar1 = param_1 + 0x2fa4;
  lVar2 = 0x100;
  do {
    *(undefined8 *)(lVar1 + -4) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
    lVar2 = lVar2 + -4;
  } while (lVar2 != 0);
  lVar1 = param_1 + 0x31a4;
  lVar2 = 0x100;
  do {
    *(undefined8 *)(lVar1 + -4) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
    lVar2 = lVar2 + -4;
  } while (lVar2 != 0);
  lVar1 = param_1 + 0x33a4;
  lVar2 = 0x100;
  do {
    *(undefined8 *)(lVar1 + -4) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
    lVar2 = lVar2 + -4;
  } while (lVar2 != 0);
  lVar1 = param_1 + 0x35a4;
  lVar2 = 0x100;
  do {
    *(undefined8 *)(lVar1 + -4) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
    lVar2 = lVar2 + -4;
  } while (lVar2 != 0);
  lVar1 = param_1 + 0x37a4;
  lVar2 = 0x100;
  do {
    *(undefined8 *)(lVar1 + -4) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
    lVar2 = lVar2 + -4;
  } while (lVar2 != 0);
  lVar1 = param_1 + 0x39a4;
  lVar2 = 0x100;
  do {
    *(undefined8 *)(lVar1 + -4) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
    lVar2 = lVar2 + -4;
  } while (lVar2 != 0);
  lVar1 = param_1 + 0x3ba4;
  lVar2 = 0x100;
  do {
    *(undefined8 *)(lVar1 + -4) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
    lVar2 = lVar2 + -4;
  } while (lVar2 != 0);
  lVar1 = param_1 + 0x3da4;
  lVar2 = 0x100;
  do {
    *(undefined8 *)(lVar1 + -4) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
    lVar2 = lVar2 + -4;
  } while (lVar2 != 0);
  lVar1 = param_1 + 0x3fa4;
  lVar2 = 0x100;
  do {
    *(undefined8 *)(lVar1 + -4) = 0x2000200020002000;
    lVar1 = lVar1 + 8;
    lVar2 = lVar2 + -4;
  } while (lVar2 != 0);
  FUN_00109fa0(param_1 + 0x4260);
  *(undefined4 *)(param_1 + 0x4846) = 0x20002000;
  *(undefined2 *)(param_1 + 0x4844) = 0x2000;
  *(undefined2 *)(param_1 + 0x484a) = 0x2000;
  *(undefined8 *)(param_1 + 0x484c) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4854) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x485c) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4864) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x486c) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4874) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x487c) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4884) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x488c) = 0x2000200020002000;
  FUN_00109f10(param_1 + 0x44a0);
  lVar1 = param_1 + 0x4324;
  lVar2 = 0x60;
  do {
    *(undefined4 *)(lVar1 + -2) = 0x20002000;
    *(undefined2 *)(lVar1 + -4) = 0x2000;
    lVar2 = lVar2 + -2;
    *(undefined2 *)(lVar1 + 2) = 0x2000;
    lVar1 = lVar1 + 8;
  } while (lVar2 != 0);
  FUN_0010a030(param_1 + 0x45a0);
  *(undefined8 *)(param_1 + 0x4748) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4750) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4758) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4760) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4768) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4770) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4778) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4780) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4788) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4790) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4798) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x47a0) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x47a8) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x47b0) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x47b8) = 0x2000200020002000;
  *(undefined4 *)(param_1 + 0x47c0) = 0x20002000;
  *(undefined2 *)(param_1 + 0x47c4) = 0x2000;
  *(undefined2 *)(param_1 + 0x4700) = 0x2000;
  *(undefined2 *)(param_1 + 0x4704) = 0x2000;
  *(undefined2 *)(param_1 + 0x4708) = 0x2000;
  *(undefined2 *)(param_1 + 0x470c) = 0x2000;
  *(undefined4 *)(param_1 + 0x4710) = 0x20002000;
  *(undefined2 *)(param_1 + 0x4716) = 0x2000;
  *(undefined2 *)(param_1 + 0x471a) = 0x2000;
  *(undefined2 *)(param_1 + 0x471e) = 0x2000;
  *(undefined4 *)(param_1 + 0x4722) = 0x20002000;
  *(undefined2 *)(param_1 + 0x4728) = 0x2000;
  *(undefined2 *)(param_1 + 0x472c) = 0x2000;
  *(undefined2 *)(param_1 + 0x4730) = 0x2000;
  *(undefined4 *)(param_1 + 0x4734) = 0x20002000;
  *(undefined2 *)(param_1 + 0x473a) = 0x2000;
  *(undefined2 *)(param_1 + 0x473e) = 0x2000;
  *(undefined2 *)(param_1 + 0x4742) = 0x2000;
  *(undefined2 *)(param_1 + 0x4746) = 0x2000;
  *(undefined8 *)(param_1 + 0x47c6) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x47ce) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x47d6) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x47de) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x47e6) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x47ee) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x47f6) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x47fe) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4806) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x480e) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4816) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x481e) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4826) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x482e) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4836) = 0x2000200020002000;
  *(undefined4 *)(param_1 + 0x483e) = 0x20002000;
  *(undefined2 *)(param_1 + 0x4842) = 0x2000;
  *(undefined8 *)(param_1 + 0x4894) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x489c) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x48a4) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x48ac) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x48b4) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x48bc) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x48c4) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x48cc) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x48d4) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x48dc) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x48e4) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x48ec) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x48f4) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x48fc) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x4904) = 0x2000200020002000;
  *(undefined8 *)(param_1 + 0x490c) = 0x2000200020002000;
  FUN_0010a190((undefined8 *)(param_1 + 0x4914));
  FUN_0010a190((undefined8 *)(param_1 + 0x4a14));
  FUN_0010a190((undefined8 *)(param_1 + 0x4b14));
  FUN_0010a190((undefined8 *)(param_1 + 0x4c14));
  *(undefined4 *)(param_1 + 0x4402) = 0x3ff03ff0;
  *(undefined2 *)(param_1 + 0x4400) = 0x3ff0;
  *(undefined2 *)(param_1 + 0x4406) = 0x3ff0;
  *(undefined4 *)(param_1 + 0x4408) = 0x3ff03ff0;
  *(undefined8 *)(param_1 + 0x440c) = 0x3ff03ff03ff03ff0;
  *(undefined8 *)(param_1 + 0x4414) = 0x3ff03ff03ff03ff0;
  *(undefined8 *)(param_1 + 0x441c) = 0x3ff03ff03ff03ff0;
  *(undefined8 *)(param_1 + 0x4424) = 0x3ff03ff03ff03ff0;
  *(undefined8 *)(param_1 + 0x442c) = 0x3ff03ff03ff03ff0;
  *(undefined8 *)(param_1 + 0x4434) = 0x3ff03ff03ff03ff0;
  *(undefined8 *)(param_1 + 0x443c) = 0x3ff03ff03ff03ff0;
  *(undefined8 *)(param_1 + 0x4444) = 0x3ff03ff03ff03ff0;
  *(undefined8 *)(param_1 + 0x444c) = 0x3ff03ff03ff03ff0;
  *(undefined8 *)(param_1 + 0x4454) = 0x3ff03ff03ff03ff0;
  *(undefined8 *)(param_1 + 0x445c) = 0x3ff03ff03ff03ff0;
  *(undefined8 *)(param_1 + 0x4464) = 0x3ff03ff03ff03ff0;
  *(undefined4 *)(param_1 + 0x446c) = 0x3ff03ff0;
  *(undefined2 *)(param_1 + 0x4472) = 0x3ff0;
  *(undefined2 *)(param_1 + 0x4470) = 0x3ff0;
  *(undefined4 *)(param_1 + 0x4476) = 0x3ff03ff0;
  *(undefined2 *)(param_1 + 0x4474) = 0x3ff0;
  *(undefined2 *)(param_1 + 0x447a) = 0x3ff0;
  *(undefined8 *)(param_1 + 0x447c) = 0x3ff03ff03ff03ff0;
  *(undefined8 *)(param_1 + 0x4484) = 0x3ff03ff03ff03ff0;
  *(undefined8 *)(param_1 + 0x448c) = 0x3ff03ff03ff03ff0;
  *(undefined8 *)(param_1 + 0x4494) = 0x3ff03ff03ff03ff0;
  *(undefined4 *)(param_1 + 0x449c) = 0x3ff03ff0;
  *(undefined8 *)(param_1 + 0x42d4) = 0x10001015551555;
  *(undefined8 *)(param_1 + 0x42e4) = 0x10001015551555;
  *(undefined8 *)(param_1 + 0x42f4) = 0x10001015551555;
  *(undefined8 *)(param_1 + 0x4304) = 0x10001015551555;
  *(undefined8 *)(param_1 + 0x4314) = 0x10001015551555;
  *(undefined8 *)(param_1 + 0x4210) = 0x2aaa2aaa2aaa2aaa;
  *(undefined4 *)(param_1 + 0x4218) = 0x2aaa2aaa;
  *(undefined2 *)(param_1 + 0x421e) = 0x2aaa;
  *(undefined2 *)(param_1 + 0x421c) = 0x2aaa;
  *(undefined4 *)(param_1 + 0x4222) = 0x2aaa2aaa;
  *(undefined2 *)(param_1 + 0x4220) = 0x2aaa;
  *(undefined2 *)(param_1 + 0x4226) = 0x2aaa;
  *(undefined4 *)(param_1 + 0x4228) = 0x2aaa2aaa;
  *(undefined8 *)(param_1 + 0x422c) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4234) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x423c) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4244) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x424c) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4254) = 0x2aaa2aaa2aaa2aaa;
  *(undefined4 *)(param_1 + 0x425c) = 0x2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4914) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x491c) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4924) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x492c) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4934) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x493c) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4944) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x494c) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4a14) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4a1c) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4a24) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4a2c) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4a34) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4a3c) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4a44) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4a4c) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4b14) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4b1c) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4b24) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4b2c) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4b34) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4b3c) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4b44) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4b4c) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4c14) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4c1c) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4c24) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4c2c) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4c34) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4c3c) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4c44) = 0x2aaa2aaa2aaa2aaa;
  *(undefined8 *)(param_1 + 0x4c4c) = 0x2aaa2aaa2aaa2aaa;
  *(undefined4 *)(param_1 + 0x4916) = 0x33333ff0;
  *(undefined2 *)(param_1 + 0x491e) = 0x3333;
  *(undefined2 *)(param_1 + 0x4a16) = 0x3ff0;
  return;
}




/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b2af30(void *param_1,int param_2)

{
  byte *pbVar1;
  uint **ppuVar2;
  uint *puVar3;
  ulonglong uVar4;
  byte *pbVar5;
  char cVar6;
  uint **_Src;
  uint uVar7;
  uint **ppuVar8;
  int iVar9;
  char *pcVar10;
  byte ***pppbVar11;
  int iVar12;
  byte *pbVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  byte **ppbVar17;
  uint **_Dst;
  byte **ppbVar18;
  uint **ppuVar19;
  int **in_FS_OFFSET;
  bool bVar20;
  float10 fVar21;
  uint local_d0;
  undefined4 local_cc;
  uint *local_c8;
  void *local_c4;
  byte **local_c0;
  undefined local_bc [11];
  undefined local_b1;
  uint **local_b0;
  int local_ac;
  undefined *local_a8;
  undefined8 local_a4;
  char *local_9c;
  char *local_98;
  char *local_94;
  undefined *local_90;
  char *local_8c;
  char *local_88;
  undefined **local_84;
  char *local_80;
  char *local_7c;
  char *local_78;
  char *local_74;
  char *local_70;
  undefined *local_6c;
  char *local_68;
  char *local_64;
  char *local_60;
  char *local_5c;
  char *local_58;
  char *local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [3];
  uint **local_20;
  uint **local_1c;
  uint **local_18;
  uint local_14;
  int *local_10;
  undefined *puStack12;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack12 = &LAB_0139094c;
  local_10 = *in_FS_OFFSET;
  local_14 = DAT_0171c290 ^ (uint)&stack0xfffffffc;
  *(int ***)in_FS_OFFSET = &local_10;
  local_c4 = param_1;
  local_ac = param_2;
  local_c0 = (byte **)(param_2 + 0xbc);
  local_cc = 0;
  thunk_FUN_00c94b90(&DAT_01717550,local_c0,local_14);
  piVar14 = (int *)(param_2 + 200);
  local_a4 = (double)CONCAT44(piVar14,(undefined *)local_a4);
  thunk_FUN_00c94b90(&DAT_01717568,piVar14);
  iVar15 = *piVar14;
  iVar16 = *(int *)(param_2 + 0xcc);
  while (iVar15 != iVar16) {
    local_18 = (uint **)0xf;
    local_1c = (uint **)0x0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    thunk_FUN_004b22d0("curse_",6);
    local_8 = 0;
    cVar6 = thunk_FUN_011b1dd0();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = (uint **)0xf;
    local_1c = (uint **)0x0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    if (cVar6 != '\0') {
      thunk_FUN_005974a0();
    }
    iVar15 = iVar15 + 0x18;
  }
  iVar15 = *(int *)(local_ac + 0xd8);
  iVar16 = *(int *)(local_ac + 0xd4);
  while (iVar16 != iVar15) {
    thunk_FUN_00597b90();
    iVar16 = iVar16 + 0x18;
  }
  if (*(int *)(local_ac + 0x150) == 0) {
    thunk_FUN_00f8c620();
    local_8 = 1;
    _Src = (uint **)thunk_FUN_0051beb0(local_2c,"??STA/sessions/");
    iVar15 = local_ac;
    local_8._0_1_ = 2;
    _Dst = (uint **)(local_ac + 0x140);
    if (_Dst != _Src) {
      if (0xf < *(uint *)(local_ac + 0x154)) {
                    /* WARNING: Subroutine does not return */
        operator_delete(*_Dst);
      }
      *(undefined4 *)(local_ac + 0x154) = 0xf;
      *(undefined4 *)(local_ac + 0x150) = 0;
      *(undefined *)_Dst = 0;
      if (&DAT_0000000f < _Src[5]) {
        local_a4 = (double)((ulonglong)local_a4 & 0xffffffff | ZEXT48(_Dst) << 0x20);
        *_Dst = *_Src;
        *_Src = (uint *)0x0;
        local_b0 = _Dst;
      }
      else {
        if ((int)_Src[4] + 1U != 0) {
          memmove(_Dst,_Src,(int)_Src[4] + 1U);
        }
      }
      *(uint **)(iVar15 + 0x150) = _Src[4];
      *(uint **)(iVar15 + 0x154) = _Src[5];
      *(undefined **)(_Src + 5) = &DAT_0000000f;
      _Src[4] = (uint *)0x0;
      *(undefined *)_Src = 0;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = (uint **)0xf;
    local_1c = (uint **)0x0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_8 = 0xffffffff;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_44[0]);
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  }
  thunk_FUN_01147bd0((double)DAT_01774020 +
                     (double)(&DAT_014ce570)[(DAT_01774020 >> 0x1f) * 0x1fffffff]);
  local_9c = "water";
  local_98 = "water_ice";
  local_94 = "water_swamp";
  local_90 = &DAT_014c40b4;
  local_8c = "alcohol";
  local_88 = "swamp";
  local_84 = &PTR_LAB_014c40c0;
  local_80 = "blood";
  local_7c = "blood_fungi";
  local_78 = "blood_worm";
  local_74 = "radioactive_liquid";
  local_70 = "cement";
  local_6c = &DAT_0149b30c;
  local_68 = &DAT_014c40cc;
  local_64 = "urine";
  local_60 = "poison";
  local_5c = "magic_liquid_teleportation";
  local_58 = "magic_liquid_polymorph";
  local_54 = "magic_liquid_random_polymorph";
  local_50 = "magic_liquid_berserk";
  local_4c = "magic_liquid_charm";
  local_48 = "magic_liquid_invisibility";
  local_a8 = (undefined *)0x0;
  local_a4 = 0.00000000;
  thunk_FUN_005bf860(0,&local_9c,local_44,local_c4);
  local_8 = 4;
  local_8c = "sand";
  local_88 = &DAT_014c4190;
  local_84 = (undefined **)&DAT_014c4198;
  local_80 = "honey";
  local_7c = "slime";
  local_78 = &DAT_014c41b0;
  local_74 = "rotten_meat";
  local_70 = &DAT_014c41c8;
  local_6c = &DAT_014ad844;
  local_68 = "silver";
  local_64 = "copper";
  local_60 = "brass";
  local_5c = "diamond";
  local_58 = &DAT_014c41e8;
  local_54 = "gunpowder";
  local_50 = "gunpowder_explosive";
  local_4c = "grass";
  local_48 = "fungi";
  local_20 = (uint **)0x0;
  local_1c = (uint **)0x0;
  local_18 = (uint **)0x0;
  thunk_FUN_005bf860(0,&local_8c,local_44,local_c4);
  local_8 = CONCAT31(local_8._1_3_,5);
  thunk_FUN_011eb7c0(((double)DAT_01774020 +
                     (double)(&DAT_014ce570)[(DAT_01774020 >> 0x1f) * 0x1fffffff]) * 0.17127000 +
                     1323.59030000);
  iVar15 = 5;
  do {
    thunk_FUN_011d0cb0();
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  if ((local_a8 != (undefined *)local_a4) && (local_20 != local_1c)) {
    thunk_FUN_00a72420("magic_liquid_hp_regeneration_unstable",local_bc);
    thunk_FUN_00a72420("midas_precursor",local_bc,&local_a8,&local_20);
  }
  iVar15 = local_ac;
  local_8 = CONCAT31(local_8._1_3_,4);
  if (local_20 != (uint **)0x0) {
    _Orphan_all((_Container_base0 *)&local_20);
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  local_8 = 0xffffffff;
  if (local_a8 != (undefined *)0x0) {
    _Orphan_all((_Container_base0 *)&local_a8);
                    /* WARNING: Subroutine does not return */
    operator_delete(local_a8);
  }
  if (*(char *)(local_ac + 0x30) != '\0') {
LAB_00b2be69:
    if (DAT_0176c6a0 == 0) {
      local_c4 = operator_new(0x140);
      local_8 = 0xd;
      if (local_c4 == (void *)0x0) {
        DAT_0176c6a0 = 0;
      }
      else {
        DAT_0176c6a0 = thunk_FUN_00e9a6d0();
      }
      local_8 = 0xffffffff;
    }
    if (*(int *)(DAT_0176c6a0 + 0x18) != 0) {
      thunk_FUN_010959f0();
    }
    *in_FS_OFFSET = local_10;
    FUN_01227fda();
    return;
  }
  thunk_FUN_011eb7c0(((double)DAT_01774020 +
                     (double)(&DAT_014ce570)[(DAT_01774020 >> 0x1f) * 0x1fffffff]) - 1.10000000);
  thunk_FUN_011d0cb0();
  thunk_FUN_011d0cb0();
  thunk_FUN_011d0cb0();
  local_18 = (uint **)0xf;
  local_1c = (uint **)0x0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  if (*PTR_s_intro_has_played_017170b8 == '\0') {
    pcVar10 = (char *)0x0;
  }
  else {
    pcVar10 = PTR_s_intro_has_played_017170b8;
    do {
      cVar6 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar6 != '\0');
    pcVar10 = pcVar10 + -(int)(PTR_s_intro_has_played_017170b8 + 1);
  }
  thunk_FUN_004b22d0(PTR_s_intro_has_played_017170b8,pcVar10);
  local_8 = 6;
  local_cc = 1;
  cVar6 = thunk_FUN_00fa1d80();
  if (cVar6 != '\0') {
    fVar21 = (float10)thunk_FUN_011d0cb0();
    local_a4 = (double)((ulonglong)local_a4 & 0xffffffff |
                       (ulonglong)(uint)((float)fVar21 + 0.00000000) << 0x20);
    if ((float)fVar21 + 0.00000000 <= 0.89999998) {
      bVar20 = true;
      goto LAB_00b2b58f;
    }
  }
  bVar20 = false;
LAB_00b2b58f:
  local_8 = 0xffffffff;
  local_cc = 0;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  if (bVar20) {
    local_18 = (uint **)0xf;
    local_1c = (uint **)0x0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    thunk_FUN_004b22d0("weather_this_run_no_gradient",0x1c);
    local_8 = 7;
    thunk_FUN_007bf480();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
  }
  local_8 = 0xffffffff;
  local_18 = (uint **)&DAT_0000000f;
  local_1c = (uint **)0x0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  fVar21 = (float10)thunk_FUN_011d0cb0();
  local_a4 = (double)((ulonglong)local_a4 & 0xffffffff | (ulonglong)(uint)(float)fVar21 << 0x20);
  *(float *)(iVar15 + 0x34) = (float)fVar21 + 0.00000000;
  thunk_FUN_00a720c0();
  *(undefined4 *)(iVar15 + 0x60) = *(undefined4 *)(iVar15 + 100);
  *(undefined4 *)(iVar15 + 0x40) = *(undefined4 *)(iVar15 + 0x44);
  fVar21 = (float10)thunk_FUN_011d0cb0();
  local_a4 = (double)(fVar21 * (float10)2.00000000);
  *(uint *)(iVar15 + 0xe4) = (uint)((int)(fVar21 * (float10)2.00000000) != 0);
  fVar21 = (float10)thunk_FUN_011d0cb0();
  ppbVar17 = (byte **)(iVar15 + 0xbc);
  *(int *)(iVar15 + 0xe0) = (int)(fVar21 * (float10)2.00000000);
  iVar16 = *(int *)(iVar15 + 0xc0) - (int)*ppbVar17;
  local_a4 = (double)((ulonglong)(double)(fVar21 * (float10)2.00000000) & 0xffffffff);
  iVar16 = iVar16 / 6 + (iVar16 >> 0x1f);
  if (iVar16 >> 2 != iVar16 >> 0x1f) {
    ppbVar18 = (byte **)*ppbVar17;
    do {
      pppbVar11 = &DAT_01717538;
      pbVar1 = ppbVar18[4];
      if (0xf < _DAT_0171754c) {
        pppbVar11 = (byte ***)DAT_01717538;
      }
      ppbVar17 = ppbVar18;
      if (&DAT_00000010 <= ppbVar18[5]) {
        ppbVar17 = (byte **)*ppbVar18;
      }
      pbVar13 = DAT_01717548;
      if (pbVar1 < DAT_01717548) {
        pbVar13 = pbVar1;
      }
      if (pbVar13 == (byte *)0x0) {
LAB_00b2b787:
        if (pbVar1 < DAT_01717548) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (uint)(pbVar1 != DAT_01717548);
        }
        bVar20 = uVar7 == 0;
      }
      else {
        while (pbVar5 = pbVar13 + -4, (byte *)0x3 < pbVar13) {
          if ((byte **)*ppbVar17 != *pppbVar11) goto LAB_00b2b748;
          ppbVar17 = ppbVar17 + 1;
          pppbVar11 = pppbVar11 + 1;
          pbVar13 = pbVar5;
        }
        if (pbVar5 == (byte *)0xfffffffc) {
LAB_00b2b77c:
          uVar7 = 0;
        }
        else {
LAB_00b2b748:
          bVar20 = *(byte *)ppbVar17 < *(byte *)pppbVar11;
          if ((*(byte *)ppbVar17 == *(byte *)pppbVar11) &&
             ((pbVar5 == (byte *)0xfffffffd ||
              ((bVar20 = *(byte *)((int)ppbVar17 + 1) < *(byte *)((int)pppbVar11 + 1),
               *(byte *)((int)ppbVar17 + 1) == *(byte *)((int)pppbVar11 + 1) &&
               ((pbVar5 == (byte *)0xfffffffe ||
                ((bVar20 = *(byte *)((int)ppbVar17 + 2) < *(byte *)((int)pppbVar11 + 2),
                 *(byte *)((int)ppbVar17 + 2) == *(byte *)((int)pppbVar11 + 2) &&
                 ((pbVar5 == (byte *)0xffffffff ||
                  (bVar20 = *(byte *)((int)ppbVar17 + 3) < *(byte *)((int)pppbVar11 + 3),
                  *(byte *)((int)ppbVar17 + 3) == *(byte *)((int)pppbVar11 + 3)))))))))))))
          goto LAB_00b2b77c;
          uVar7 = -(uint)bVar20 | 1;
        }
        bVar20 = uVar7 == 0;
        if (bVar20) goto LAB_00b2b787;
      }
      iVar15 = local_ac;
      if (bVar20) {
        *(uint **)(local_ac + 0x100) = local_a4._4_4_;
        ppbVar17 = (byte **)(local_ac + 0xbc);
        break;
      }
      ppbVar18 = ppbVar18 + 6;
      local_a4 = (double)((ulonglong)local_a4 & 0xffffffff |
                         (ulonglong)((int)local_a4._4_4_ + 1U) << 0x20);
      iVar16 = (int)(local_c0[1] + -(int)*local_c0) / 6 +
               ((int)(local_c0[1] + -(int)*local_c0) >> 0x1f);
      ppbVar17 = local_c0;
    } while ((int)local_a4._4_4_ + 1U < (uint)((iVar16 >> 2) - (iVar16 >> 0x1f)));
  }
  _Src = (uint **)(iVar15 + 0xe8);
  iVar16 = iVar15;
  if (2 < (uint)(*(int *)(iVar15 + 0xec) - (int)*_Src >> 2)) goto LAB_00b2bbde;
  local_20 = (uint **)0x0;
  local_1c = (uint **)0x0;
  local_18 = (uint **)0x0;
  local_8 = 8;
  _Dst = (uint **)0x0;
  iVar16 = (int)(ppbVar17[1] + -(int)*ppbVar17) / 6 + ((int)(ppbVar17[1] + -(int)*ppbVar17) >> 0x1f)
  ;
  local_a4 = (double)((ulonglong)local_a4 & 0xffffffff);
  ppuVar8 = local_20;
  if (iVar16 >> 2 != iVar16 >> 0x1f) {
    local_a4._4_4_ = (uint *)0x0;
    ppuVar19 = (uint **)0x0;
    local_b0 = (uint **)0x0;
    do {
      local_c8 = local_a4._4_4_;
      if ((&local_c8 < local_1c) && (local_b0 <= &local_c8)) {
        ppuVar8 = (uint **)((int)((int)&local_c8 - (int)local_b0) >> 2);
        if ((local_1c == ppuVar19) && ((int)((int)ppuVar19 - (int)local_1c) >> 2 == 0)) {
          _Dst = (uint **)((int)((int)local_1c - (int)local_b0) >> 2);
          local_b0 = ppuVar8;
          if (_Dst == (uint **)0x3fffffff) goto LAB_00b2b9e4;
          thunk_FUN_00d29070();
          ppuVar8 = local_b0;
          local_b0 = local_20;
        }
        if (local_1c != (uint **)0x0) {
          *local_1c = local_b0[(int)ppuVar8];
        }
        local_8 = CONCAT31((int3)((uint)local_8 >> 8),8);
        local_b0 = local_20;
        ppuVar19 = local_18;
      }
      else {
        if ((local_1c == ppuVar19) && ((int)((int)ppuVar19 - (int)local_1c) >> 2 == 0)) {
          _Dst = (uint **)((int)((int)local_1c - (int)local_b0) >> 2);
          if (_Dst == (uint **)0x3fffffff) goto LAB_00b2b9e4;
          thunk_FUN_00d29070();
          local_b0 = local_20;
          ppuVar19 = local_18;
        }
        if (local_1c != (uint **)0x0) {
          *local_1c = local_a4._4_4_;
          local_b0 = local_20;
          ppuVar19 = local_18;
        }
      }
      _Dst = local_1c + 1;
      local_a4._4_4_ = (uint *)((int)local_a4._4_4_ + 1);
      iVar16 = (int)(local_c0[1] + -(int)*local_c0) / 6 +
               ((int)(local_c0[1] + -(int)*local_c0) >> 0x1f);
      ppuVar8 = local_b0;
      local_1c = _Dst;
    } while (local_a4._4_4_ < (uint *)((iVar16 >> 2) - (iVar16 >> 0x1f)));
  }
LAB_00b2b9fa:
  local_a8 = &local_b1;
  iVar16 = 0x20;
  uVar7 = 0xffffffff;
  do {
    uVar7 = uVar7 >> 1;
    iVar16 = iVar16 + -1;
  } while (0x7fff < uVar7);
  local_a4 = (double)CONCAT44(uVar7,iVar16);
  if (ppuVar8 != _Dst) {
    thunk_FUN_005ca440(ppuVar8,_Dst);
    _Dst = local_1c;
  }
  iVar9 = *(int *)(iVar15 + 0xec) - (int)*_Src;
  iVar12 = local_ac;
  iVar16 = local_ac;
  while (local_ac = iVar16, (uint)(iVar9 >> 2) < 3) {
    ppuVar8 = _Dst + -1;
    if (_Dst[-1] != *(uint **)(iVar12 + 0x100)) {
      ppuVar19 = *(uint ***)(iVar15 + 0xec);
      if ((ppuVar8 < ppuVar19) && (ppuVar2 = (uint **)*_Src, ppuVar2 <= ppuVar8)) {
        if ((ppuVar19 == *(uint ***)(iVar15 + 0xf0)) &&
           ((int)((int)*(uint ***)(iVar15 + 0xf0) - (int)ppuVar19) >> 2 == 0)) {
          _Dst = (uint **)*_Src;
          iVar16 = (int)((int)ppuVar19 - (int)_Dst) >> 2;
          if (iVar16 == 0x3fffffff) goto LAB_00b2b9e4;
          local_a4 = (double)((ulonglong)local_a4 & 0xffffffff | (ulonglong)(iVar16 + 1) << 0x20);
          thunk_FUN_00d29070();
        }
        local_b0 = *(uint ***)(iVar15 + 0xec);
        local_a4 = (double)CONCAT44(local_b0,(undefined *)local_a4);
        if (local_b0 != (uint **)0x0) {
          *local_b0 = (uint *)(*_Src)[(int)((int)ppuVar8 - (int)ppuVar2) >> 2];
        }
        local_8 = CONCAT31((int3)((uint)local_8 >> 8),8);
        _Dst = local_1c;
      }
      else {
        if ((ppuVar19 == *(uint ***)(iVar15 + 0xf0)) &&
           ((int)((int)*(uint ***)(iVar15 + 0xf0) - (int)ppuVar19) >> 2 == 0)) {
          _Dst = (uint **)*_Src;
          iVar16 = (int)((int)ppuVar19 - (int)_Dst) >> 2;
          if (iVar16 == 0x3fffffff) goto LAB_00b2b9e4;
          local_a4 = (double)((ulonglong)local_a4 & 0xffffffff | (ulonglong)(iVar16 + 1) << 0x20);
          thunk_FUN_00d29070();
          _Dst = local_1c;
        }
        if (*(uint ***)(iVar15 + 0xec) != (uint **)0x0) {
          **(uint ***)(iVar15 + 0xec) = *ppuVar8;
          _Dst = local_1c;
        }
      }
      *(int *)(iVar15 + 0xec) = *(int *)(iVar15 + 0xec) + 4;
      iVar12 = local_ac;
    }
    _Dst = _Dst + -1;
    iVar9 = *(int *)(iVar15 + 0xec) - (int)*_Src;
    iVar16 = local_ac;
    local_1c = _Dst;
  }
  local_8 = 0xffffffff;
  if (local_20 != (uint **)0x0) {
    _Orphan_all((_Container_base0 *)&local_20);
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
LAB_00b2bbde:
  iVar12 = *(int *)(iVar16 + 0xc0) - *(int *)(iVar16 + 0xbc);
  uVar7 = 0;
  iVar12 = iVar12 / 6 + (iVar12 >> 0x1f);
  if (iVar12 >> 2 != iVar12 >> 0x1f) {
    do {
      local_a4 = (double)((ulonglong)local_a4 & 0xffffffff | (ulonglong)uVar7 << 0x20);
      cVar6 = thunk_FUN_005978d0();
      if ((cVar6 == '\0') && (uVar7 != *(uint *)(iVar16 + 0x100))) {
        puVar3 = *(uint **)(iVar16 + 0xf8);
        _Dst = (uint **)(iVar16 + 0xf4);
        local_d0 = uVar7;
        if ((&local_d0 < puVar3) && (*_Dst <= &local_d0)) {
          local_a4._4_4_ = (uint *)((int)((int)&local_d0 - (int)*_Dst) >> 2);
          uVar4 = (ulonglong)local_a4 & 0xffffffff;
          local_a4 = (double)(uVar4 | ZEXT48(local_a4._4_4_) << 0x20);
          local_a4._0_4_ = (undefined *)(int)uVar4;
          if (puVar3 == *(uint **)(iVar16 + 0xfc)) {
            if ((int)((int)*(uint **)(iVar16 + 0xfc) - (int)puVar3) >> 2 == 0) {
              iVar12 = (int)((int)puVar3 - (int)*_Dst) >> 2;
              if (iVar12 == 0x3fffffff) goto LAB_00b2b9e4;
              local_b0 = (uint **)(iVar12 + 1);
              thunk_FUN_00d29070();
            }
          }
          local_b0 = *(uint ***)(iVar16 + 0xf8);
          local_a4 = (double)CONCAT44(local_b0,(undefined *)local_a4);
          if (local_b0 != (uint **)0x0) {
            *local_b0 = (uint *)(*_Dst)[(int)local_a4._4_4_];
          }
          local_8 = 0xffffffff;
        }
        else {
          if ((puVar3 == *(uint **)(iVar16 + 0xfc)) &&
             ((int)((int)*(uint **)(iVar16 + 0xfc) - (int)puVar3) >> 2 == 0)) {
            iVar12 = (int)((int)puVar3 - (int)*_Dst) >> 2;
            if (iVar12 == 0x3fffffff) goto LAB_00b2b9e4;
            local_a4 = (double)((ulonglong)local_a4 & 0xffffffff | (ulonglong)(iVar12 + 1) << 0x20);
            thunk_FUN_00d29070();
          }
          if (*(uint **)(iVar16 + 0xf8) != (uint *)0x0) {
            **(uint **)(iVar16 + 0xf8) = uVar7;
          }
        }
        *(int *)(iVar16 + 0xf8) = *(int *)(iVar16 + 0xf8) + 4;
      }
      uVar7 = uVar7 + 1;
      iVar12 = (int)(local_c0[1] + -(int)*local_c0) / 6 +
               ((int)(local_c0[1] + -(int)*local_c0) >> 0x1f);
      iVar16 = local_ac;
      if ((uint)((iVar12 >> 2) - (iVar12 >> 0x1f)) <= uVar7) break;
    } while( true );
  }
  local_20 = (uint **)&local_b1;
  local_1c = (uint **)&DAT_00000020;
  local_18 = (uint **)0xffffffff;
  do {
    local_18 = (uint **)((uint)local_18 >> 1);
    local_1c = (uint **)((int)local_1c + -1);
  } while (0x7fff < local_18);
  if (*(int *)(local_ac + 0xf4) != *(int *)(local_ac + 0xf8)) {
    thunk_FUN_005ca440(*(int *)(local_ac + 0xf4),*(int *)(local_ac + 0xf8));
  }
  iVar15 = thunk_FUN_009ef170();
  if (iVar15 == 0) {
    local_18 = (uint **)0xf;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    local_1c = (uint **)iVar15;
    thunk_FUN_004b22d0("data/global/player_stats.xml",0x1c);
    local_8 = 0xc;
    thunk_FUN_00fdcba0();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = (uint **)0xf;
    local_1c = (uint **)0x0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    thunk_FUN_00eeb160();
  }
  *(undefined *)(local_ac + 0x30) = 1;
  goto LAB_00b2be69;
LAB_00b2b9e4:
  _Xlength_error("vector<T> too long");
  ppuVar8 = local_20;
  goto LAB_00b2b9fa;
}

